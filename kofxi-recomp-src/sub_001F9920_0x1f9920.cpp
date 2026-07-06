#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9920
// Address: 0x1f9920 - 0x1f99c8
void sub_001F9920_0x1f9920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9920_0x1f9920");
#endif

    switch (ctx->pc) {
        case 0x1f993cu: goto label_1f993c;
        case 0x1f996cu: goto label_1f996c;
        default: break;
    }

    ctx->pc = 0x1f9920u;

    // 0x1f9920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f992c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9934: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F9934u;
    SET_GPR_U32(ctx, 31, 0x1F993Cu);
    ctx->pc = 0x1F9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9934u;
    // 0x1f9938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F9934u, 0x1F993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F993Cu;
label_1f993c:
    // 0x1f993c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f993cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f9940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9940u;
    {
        const bool branch_taken_0x1f9940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9940u;
        // 0x1f9944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9940) {
            ctx->pc = 0x1F9960u;
            goto label_1f9960;
        }
    }
    ctx->pc = 0x1F9948u;
    // 0x1f9948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f994c: 0x34a50137  ori         $a1, $a1, 0x137
    ctx->pc = 0x1f994cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)311);
    // 0x1f9950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9958: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F9958u;
    ctx->pc = 0x1F995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9958u;
    // 0x1f995c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F9960u;
label_1f9960:
    // 0x1f9960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9964: 0xc07e672  jal         func_1F99C8
    ctx->pc = 0x1F9964u;
    SET_GPR_U32(ctx, 31, 0x1F996Cu);
    ctx->pc = 0x1F9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9964u;
    // 0x1f9968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99C8u, 0x1F9964u, 0x1F996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F996Cu;
label_1f996c:
    // 0x1f996c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9970: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f9970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9974: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f9974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f9978: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1f9978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f997c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F997Cu;
    {
        const bool branch_taken_0x1f997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F997Cu;
        // 0x1f9980: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f997c) {
            ctx->pc = 0x1F99B0u;
            goto label_1f99b0;
        }
    }
    ctx->pc = 0x1F9984u;
    // 0x1f9984: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1f9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x1f9988: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1f9988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1f998c: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x1f998cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9990: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f9990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9994: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9994u;
    {
        const bool branch_taken_0x1f9994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9994) {
            ctx->pc = 0x1F9998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9994u;
            // 0x1f9998: 0xae09096c  sw          $t1, 0x96C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2412), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F999Cu;
            goto label_1f999c;
        }
    }
    ctx->pc = 0x1F999Cu;
label_1f999c:
    // 0x1f999c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f999cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f99a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f99a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f99a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f99a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f99a8: 0x807f662  j           func_1FD988
    ctx->pc = 0x1F99A8u;
    ctx->pc = 0x1F99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99A8u;
    // 0x1f99ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    sub_001FD988_0x1fd988(rdram, ctx, runtime); return;
    ctx->pc = 0x1F99B0u;
label_1f99b0:
    // 0x1f99b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f99b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f99b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f99b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f99b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f99b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f99bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F99BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99BCu;
        // 0x1f99c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F99BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F99C4u;
    // 0x1f99c4: 0x0  nop
    ctx->pc = 0x1f99c4u;
    // NOP
}

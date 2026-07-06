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

// Function: sub_002F2968
// Address: 0x2f2968 - 0x2f2a10
void sub_002F2968_0x2f2968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2968_0x2f2968");
#endif

    switch (ctx->pc) {
        case 0x2f298cu: goto label_2f298c;
        case 0x2f29a8u: goto label_2f29a8;
        case 0x2f29d4u: goto label_2f29d4;
        default: break;
    }

    ctx->pc = 0x2f2968u;

    // 0x2f2968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f296c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2974: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f2974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f297c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2980: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f2980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f2984: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F2984u;
    SET_GPR_U32(ctx, 31, 0x2F298Cu);
    ctx->pc = 0x2F2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2984u;
    // 0x2f2988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F2984u, 0x2F298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F298Cu;
label_2f298c:
    // 0x2f298c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f298cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2990: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2f2990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f2994: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2998: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2998u;
    {
        const bool branch_taken_0x2f2998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2998u;
        // 0x2f299c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2998) {
            ctx->pc = 0x2F29C0u;
            goto label_2f29c0;
        }
    }
    ctx->pc = 0x2F29A0u;
    // 0x2f29a0: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2F29A0u;
    SET_GPR_U32(ctx, 31, 0x2F29A8u);
    ctx->pc = 0x2F29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29A0u;
    // 0x2f29a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2F29A0u, 0x2F29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29A8u;
label_2f29a8:
    // 0x2f29a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2f29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f29ac: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2f29acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f29b0: 0x1ce00004  bgtz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F29B0u;
    {
        const bool branch_taken_0x2f29b0 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29B0u;
        // 0x2f29b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29b0) {
            ctx->pc = 0x2F29C4u;
            goto label_2f29c4;
        }
    }
    ctx->pc = 0x2F29B8u;
    // 0x2f29b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F29B8u;
    {
        const bool branch_taken_0x2f29b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29B8u;
        // 0x2f29bc: 0x2402fc13  addiu       $v0, $zero, -0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29b8) {
            ctx->pc = 0x2F29F0u;
            goto label_2f29f0;
        }
    }
    ctx->pc = 0x2F29C0u;
label_2f29c0:
    // 0x2f29c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f29c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f29c4:
    // 0x2f29c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f29c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f29c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29cc: 0xc0bdf70  jal         func_2F7DC0
    ctx->pc = 0x2F29CCu;
    SET_GPR_U32(ctx, 31, 0x2F29D4u);
    ctx->pc = 0x2F29D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29CCu;
    // 0x2f29d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7DC0u, 0x2F29CCu, 0x2F29D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29D4u;
label_2f29d4:
    // 0x2f29d4: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F29D4u;
    {
        const bool branch_taken_0x2f29d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29D4u;
        // 0x2f29d8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29d4) {
            ctx->pc = 0x2F29FCu;
            goto label_2f29fc;
        }
    }
    ctx->pc = 0x2F29DCu;
    // 0x2f29dc: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F29DCu;
    {
        const bool branch_taken_0x2f29dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29DCu;
        // 0x2f29e0: 0x2402fc15  addiu       $v0, $zero, -0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29dc) {
            ctx->pc = 0x2F29ECu;
            goto label_2f29ec;
        }
    }
    ctx->pc = 0x2F29E4u;
    // 0x2f29e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F29E4u;
    {
        const bool branch_taken_0x2f29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29E4u;
        // 0x2f29e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29e4) {
            ctx->pc = 0x2F29FCu;
            goto label_2f29fc;
        }
    }
    ctx->pc = 0x2F29ECu;
label_2f29ec:
    // 0x2f29ec: 0x0  nop
    ctx->pc = 0x2f29ecu;
    // NOP
label_2f29f0:
    // 0x2f29f0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f29f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f29f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f29f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f29fc:
    // 0x2f29fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f29fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2a00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2a08: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A08u;
        // 0x2f2a0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2A10u;
}

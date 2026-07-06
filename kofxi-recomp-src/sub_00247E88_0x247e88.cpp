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

// Function: sub_00247E88
// Address: 0x247e88 - 0x247f30
void sub_00247E88_0x247e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247E88_0x247e88");
#endif

    switch (ctx->pc) {
        case 0x247eb4u: goto label_247eb4;
        default: break;
    }

    ctx->pc = 0x247e88u;

    // 0x247e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247e8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x247e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x247e90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x247e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x247e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247e9c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x247ea0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x247EA0u;
    {
        const bool branch_taken_0x247ea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x247ea0) {
            ctx->pc = 0x247EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247EA0u;
            // 0x247ea4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247EB8u;
            goto label_247eb8;
        }
    }
    ctx->pc = 0x247EA8u;
    // 0x247ea8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x247ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x247eac: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x247EACu;
    SET_GPR_U32(ctx, 31, 0x247EB4u);
    ctx->pc = 0x247EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EACu;
    // 0x247eb0: 0x24846a00  addiu       $a0, $a0, 0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x247EACu, 0x247EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EB4u;
label_247eb4:
    // 0x247eb4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x247eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_247eb8:
    // 0x247eb8: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x247EB8u;
    {
        const bool branch_taken_0x247eb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x247eb8) {
            ctx->pc = 0x247EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247EB8u;
            // 0x247ebc: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247EDCu;
            goto label_247edc;
        }
    }
    ctx->pc = 0x247EC0u;
    // 0x247ec0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x247ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x247ec4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247EC4u;
    {
        const bool branch_taken_0x247ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EC4u;
        // 0x247ec8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ec4) {
            ctx->pc = 0x247ED8u;
            goto label_247ed8;
        }
    }
    ctx->pc = 0x247ECCu;
    // 0x247ecc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x247eccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x247ed0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247ED0u;
    {
        const bool branch_taken_0x247ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247ed0) {
            ctx->pc = 0x247ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247ED0u;
            // 0x247ed4: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247F04u;
            goto label_247f04;
        }
    }
    ctx->pc = 0x247ED8u;
label_247ed8:
    // 0x247ed8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x247ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_247edc:
    // 0x247edc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x247edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247ee0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x247ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x247ee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247eec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x247eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x247ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ef4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247ef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247efc: 0x8090d8e  j           func_243638
    ctx->pc = 0x247EFCu;
    ctx->pc = 0x247F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EFCu;
    // 0x247f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    sub_00243638_0x243638(rdram, ctx, runtime); return;
    ctx->pc = 0x247F04u;
label_247f04:
    // 0x247f04: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x247f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x247f08: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x247f08u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
    // 0x247f0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f10: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x247f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x247f14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x247f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247f18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x247f1c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x247f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x247f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f24: 0x3e00008  jr          $ra
    ctx->pc = 0x247F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F24u;
        // 0x247f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F2Cu;
    // 0x247f2c: 0x0  nop
    ctx->pc = 0x247f2cu;
    // NOP
}

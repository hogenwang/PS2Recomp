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

// Function: sub_001BBB70
// Address: 0x1bbb70 - 0x1bbc68
void sub_001BBB70_0x1bbb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBB70_0x1bbb70");
#endif

    switch (ctx->pc) {
        case 0x1bbba0u: goto label_1bbba0;
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc8u: goto label_1bbbc8;
        case 0x1bbbdcu: goto label_1bbbdc;
        case 0x1bbbf4u: goto label_1bbbf4;
        case 0x1bbc00u: goto label_1bbc00;
        case 0x1bbc44u: goto label_1bbc44;
        case 0x1bbc50u: goto label_1bbc50;
        default: break;
    }

    ctx->pc = 0x1bbb70u;

    // 0x1bbb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbb74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1bbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1bbb78: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1bbb7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbb80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bbb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bbb84: 0xac442358  sw          $a0, 0x2358($v0)
    ctx->pc = 0x1bbb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9048), GPR_U32(ctx, 4));
    // 0x1bbb88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbb8c: 0x24712368  addiu       $s1, $v1, 0x2368
    ctx->pc = 0x1bbb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 9064));
    // 0x1bbb90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bbb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bbb94: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x1bbb94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bbb98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bbb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1bbb9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bbb9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbba0:
    // 0x1bbba0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1bbba0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbba4: 0x54530017  bnel        $v0, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BBBA4u;
    {
        const bool branch_taken_0x1bbba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1bbba4) {
            ctx->pc = 0x1BBBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBBA4u;
            // 0x1bbba8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBC04u;
            goto label_1bbc04;
        }
    }
    ctx->pc = 0x1BBBACu;
    // 0x1bbbac: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1bbbb0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BBBB0u;
    {
        const bool branch_taken_0x1bbbb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBB0u;
        // 0x1bbbb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbb0) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBBB8u;
    // 0x1bbbb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bbbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbbc: 0x0  nop
    ctx->pc = 0x1bbbbcu;
    // NOP
label_1bbbc0:
    // 0x1bbbc0: 0xc06e7c6  jal         func_1B9F18
    ctx->pc = 0x1BBBC0u;
    SET_GPR_U32(ctx, 31, 0x1BBBC8u);
    ctx->pc = 0x1BBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBC0u;
    // 0x1bbbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9F18u, 0x1BBBC0u, 0x1BBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBC8u;
label_1bbbc8:
    // 0x1bbbc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bbbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bbbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bbbd4: 0xc06e76e  jal         func_1B9DB8
    ctx->pc = 0x1BBBD4u;
    SET_GPR_U32(ctx, 31, 0x1BBBDCu);
    ctx->pc = 0x1BBBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBD4u;
    // 0x1bbbd8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9DB8u, 0x1BBBD4u, 0x1BBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBDCu;
label_1bbbdc:
    // 0x1bbbdc: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x1bbbdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1bbbe0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1bbbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bbbe4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BBBE4u;
    {
        const bool branch_taken_0x1bbbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBE4u;
        // 0x1bbbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbe4) {
            ctx->pc = 0x1BBBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbbc0;
        }
    }
    ctx->pc = 0x1BBBECu;
label_1bbbec:
    // 0x1bbbec: 0xc06e816  jal         func_1BA058
    ctx->pc = 0x1BBBECu;
    SET_GPR_U32(ctx, 31, 0x1BBBF4u);
    ctx->pc = 0x1BBBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBECu;
    // 0x1bbbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA058u, 0x1BBBECu, 0x1BBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBF4u;
label_1bbbf4:
    // 0x1bbbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbf8: 0xc06e7e6  jal         func_1B9F98
    ctx->pc = 0x1BBBF8u;
    SET_GPR_U32(ctx, 31, 0x1BBC00u);
    ctx->pc = 0x1BBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBF8u;
    // 0x1bbbfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9F98u, 0x1BBBF8u, 0x1BBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC00u;
label_1bbc00:
    // 0x1bbc00: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1bbc00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1bbc04:
    // 0x1bbc04: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1BBC04u;
    {
        const bool branch_taken_0x1bbc04 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1BBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC04u;
        // 0x1bbc08: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc04) {
            ctx->pc = 0x1BBBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbba0;
        }
    }
    ctx->pc = 0x1BBC0Cu;
    // 0x1bbc0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbc10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbc14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bbc14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbc18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bbc18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bbc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bbc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbc20: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC20u;
        // 0x1bbc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBC28u;
    // 0x1bbc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbc38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbc3c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBC3Cu;
    SET_GPR_U32(ctx, 31, 0x1BBC44u);
    ctx->pc = 0x1BBC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC3Cu;
    // 0x1bbc40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BBC3Cu, 0x1BBC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC44u;
label_1bbc44:
    // 0x1bbc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc48: 0xc06ef1a  jal         func_1BBC68
    ctx->pc = 0x1BBC48u;
    SET_GPR_U32(ctx, 31, 0x1BBC50u);
    ctx->pc = 0x1BBC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC48u;
    // 0x1bbc4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC68u, 0x1BBC48u, 0x1BBC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC50u;
label_1bbc50:
    // 0x1bbc50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbc50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbc58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbc5c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BBC5Cu;
    ctx->pc = 0x1BBC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC5Cu;
    // 0x1bbc60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BBC64u;
    // 0x1bbc64: 0x0  nop
    ctx->pc = 0x1bbc64u;
    // NOP
    if (ctx->pc == 0x1bbc64u) { ctx->pc = 0x1bbc68u; }
}

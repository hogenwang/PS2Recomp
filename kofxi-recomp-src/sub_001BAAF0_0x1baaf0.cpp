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

// Function: sub_001BAAF0
// Address: 0x1baaf0 - 0x1bac08
void sub_001BAAF0_0x1baaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAAF0_0x1baaf0");
#endif

    switch (ctx->pc) {
        case 0x1bab14u: goto label_1bab14;
        case 0x1bab4cu: goto label_1bab4c;
        case 0x1bab54u: goto label_1bab54;
        case 0x1bab5cu: goto label_1bab5c;
        case 0x1bab70u: goto label_1bab70;
        case 0x1bab84u: goto label_1bab84;
        case 0x1baba0u: goto label_1baba0;
        case 0x1babbcu: goto label_1babbc;
        case 0x1babf0u: goto label_1babf0;
        case 0x1babf8u: goto label_1babf8;
        default: break;
    }

    ctx->pc = 0x1baaf0u;

    // 0x1baaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1baaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1baaf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1baaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1baaf8: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1baafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1baafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bab00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bab04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bab08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bab0c: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1BAB0Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB14u);
    ctx->pc = 0x1BAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB0Cu;
    // 0x1bab10: 0x2670c368  addiu       $s0, $s3, -0x3C98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1BAB0Cu, 0x1BAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB14u;
label_1bab14:
    // 0x1bab14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bab18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAB18u;
    {
        const bool branch_taken_0x1bab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB18u;
        // 0x1bab1c: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab18) {
            ctx->pc = 0x1BAB38u;
            goto label_1bab38;
        }
    }
    ctx->pc = 0x1BAB20u;
    // 0x1bab20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bab20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bab24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bab24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bab28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bab28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bab2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bab2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bab30: 0x806b494  j           func_1AD250
    ctx->pc = 0x1BAB30u;
    ctx->pc = 0x1BAB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB30u;
    // 0x1bab34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    ctx->pc = 0x1BAB38u;
label_1bab38:
    // 0x1bab38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bab3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1bab3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bab40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bab40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bab44: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1BAB44u;
    SET_GPR_U32(ctx, 31, 0x1BAB4Cu);
    ctx->pc = 0x1BAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB44u;
    // 0x1bab48: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1BAB44u, 0x1BAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB4Cu;
label_1bab4c:
    // 0x1bab4c: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1BAB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB54u);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1BAB4Cu, 0x1BAB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB54u;
label_1bab54:
    // 0x1bab54: 0xc06d816  jal         func_1B6058
    ctx->pc = 0x1BAB54u;
    SET_GPR_U32(ctx, 31, 0x1BAB5Cu);
    ctx->pc = 0x1B6058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6058u, 0x1BAB54u, 0x1BAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB5Cu;
label_1bab5c:
    // 0x1bab5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bab60: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1bab60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1bab64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bab64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bab68: 0x24702368  addiu       $s0, $v1, 0x2368
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9064));
    // 0x1bab6c: 0x0  nop
    ctx->pc = 0x1bab6cu;
    // NOP
label_1bab70:
    // 0x1bab70: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1bab70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bab74: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAB74u;
    {
        const bool branch_taken_0x1bab74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1bab74) {
            ctx->pc = 0x1BAB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAB74u;
            // 0x1bab78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAB88u;
            goto label_1bab88;
        }
    }
    ctx->pc = 0x1BAB7Cu;
    // 0x1bab7c: 0xc06f616  jal         func_1BD858
    ctx->pc = 0x1BAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB84u);
    ctx->pc = 0x1BAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB7Cu;
    // 0x1bab80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD858u, 0x1BAB7Cu, 0x1BAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB84u;
label_1bab84:
    // 0x1bab84: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1bab84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1bab88:
    // 0x1bab88: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BAB88u;
    {
        const bool branch_taken_0x1bab88 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1BAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB88u;
        // 0x1bab8c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab88) {
            ctx->pc = 0x1BAB70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bab70;
        }
    }
    ctx->pc = 0x1BAB90u;
    // 0x1bab90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bab94: 0x2670c368  addiu       $s0, $s3, -0x3C98
    ctx->pc = 0x1bab94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951784));
    // 0x1bab98: 0xc06d312  jal         func_1B4C48
    ctx->pc = 0x1BAB98u;
    SET_GPR_U32(ctx, 31, 0x1BABA0u);
    ctx->pc = 0x1BAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB98u;
    // 0x1bab9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C48u, 0x1BAB98u, 0x1BABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABA0u;
label_1baba0:
    // 0x1baba0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1baba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1baba4: 0x8c62c370  lw          $v0, -0x3C90($v1)
    ctx->pc = 0x1baba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951792)));
    // 0x1baba8: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x1baba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1babac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BABACu;
    {
        const bool branch_taken_0x1babac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babac) {
            ctx->pc = 0x1BABBCu;
            goto label_1babbc;
        }
    }
    ctx->pc = 0x1BABB4u;
    // 0x1babb4: 0xc06d312  jal         func_1B4C48
    ctx->pc = 0x1BABB4u;
    SET_GPR_U32(ctx, 31, 0x1BABBCu);
    ctx->pc = 0x1B4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C48u, 0x1BABB4u, 0x1BABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABBCu;
label_1babbc:
    // 0x1babbc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1babbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1babc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1babc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1babc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1babc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1babc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1babc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1babcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1babccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1babd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1babd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1babd4: 0x806b494  j           func_1AD250
    ctx->pc = 0x1BABD4u;
    ctx->pc = 0x1BABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABD4u;
    // 0x1babd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    ctx->pc = 0x1BABDCu;
    // 0x1babdc: 0x0  nop
    ctx->pc = 0x1babdcu;
    // NOP
    // 0x1babe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1babe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1babe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1babe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1babe8: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BABE8u;
    SET_GPR_U32(ctx, 31, 0x1BABF0u);
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BABE8u, 0x1BABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABF0u;
label_1babf0:
    // 0x1babf0: 0xc06eb02  jal         func_1BAC08
    ctx->pc = 0x1BABF0u;
    SET_GPR_U32(ctx, 31, 0x1BABF8u);
    ctx->pc = 0x1BAC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC08u, 0x1BABF0u, 0x1BABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABF8u;
label_1babf8:
    // 0x1babf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1babf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1babfc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BABFCu;
    ctx->pc = 0x1BAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABFCu;
    // 0x1bac00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BAC04u;
    // 0x1bac04: 0x0  nop
    ctx->pc = 0x1bac04u;
    // NOP
    if (ctx->pc == 0x1bac04u) { ctx->pc = 0x1bac08u; }
}

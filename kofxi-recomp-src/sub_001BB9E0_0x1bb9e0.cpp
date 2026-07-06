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

// Function: sub_001BB9E0
// Address: 0x1bb9e0 - 0x1bbb70
void sub_001BB9E0_0x1bb9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB9E0_0x1bb9e0");
#endif

    switch (ctx->pc) {
        case 0x1bb9e0u: goto label_1bb9e0;
        case 0x1bb9e4u: goto label_1bb9e4;
        case 0x1bb9e8u: goto label_1bb9e8;
        case 0x1bb9ecu: goto label_1bb9ec;
        case 0x1bb9f0u: goto label_1bb9f0;
        case 0x1bb9f4u: goto label_1bb9f4;
        case 0x1bb9f8u: goto label_1bb9f8;
        case 0x1bb9fcu: goto label_1bb9fc;
        case 0x1bba00u: goto label_1bba00;
        case 0x1bba04u: goto label_1bba04;
        case 0x1bba08u: goto label_1bba08;
        case 0x1bba0cu: goto label_1bba0c;
        case 0x1bba10u: goto label_1bba10;
        case 0x1bba14u: goto label_1bba14;
        case 0x1bba18u: goto label_1bba18;
        case 0x1bba1cu: goto label_1bba1c;
        case 0x1bba20u: goto label_1bba20;
        case 0x1bba24u: goto label_1bba24;
        case 0x1bba28u: goto label_1bba28;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba30u: goto label_1bba30;
        case 0x1bba34u: goto label_1bba34;
        case 0x1bba38u: goto label_1bba38;
        case 0x1bba3cu: goto label_1bba3c;
        case 0x1bba40u: goto label_1bba40;
        case 0x1bba44u: goto label_1bba44;
        case 0x1bba48u: goto label_1bba48;
        case 0x1bba4cu: goto label_1bba4c;
        case 0x1bba50u: goto label_1bba50;
        case 0x1bba54u: goto label_1bba54;
        case 0x1bba58u: goto label_1bba58;
        case 0x1bba5cu: goto label_1bba5c;
        case 0x1bba60u: goto label_1bba60;
        case 0x1bba64u: goto label_1bba64;
        case 0x1bba68u: goto label_1bba68;
        case 0x1bba6cu: goto label_1bba6c;
        case 0x1bba70u: goto label_1bba70;
        case 0x1bba74u: goto label_1bba74;
        case 0x1bba78u: goto label_1bba78;
        case 0x1bba7cu: goto label_1bba7c;
        case 0x1bba80u: goto label_1bba80;
        case 0x1bba84u: goto label_1bba84;
        case 0x1bba88u: goto label_1bba88;
        case 0x1bba8cu: goto label_1bba8c;
        case 0x1bba90u: goto label_1bba90;
        case 0x1bba94u: goto label_1bba94;
        case 0x1bba98u: goto label_1bba98;
        case 0x1bba9cu: goto label_1bba9c;
        case 0x1bbaa0u: goto label_1bbaa0;
        case 0x1bbaa4u: goto label_1bbaa4;
        case 0x1bbaa8u: goto label_1bbaa8;
        case 0x1bbaacu: goto label_1bbaac;
        case 0x1bbab0u: goto label_1bbab0;
        case 0x1bbab4u: goto label_1bbab4;
        case 0x1bbab8u: goto label_1bbab8;
        case 0x1bbabcu: goto label_1bbabc;
        case 0x1bbac0u: goto label_1bbac0;
        case 0x1bbac4u: goto label_1bbac4;
        case 0x1bbac8u: goto label_1bbac8;
        case 0x1bbaccu: goto label_1bbacc;
        case 0x1bbad0u: goto label_1bbad0;
        case 0x1bbad4u: goto label_1bbad4;
        case 0x1bbad8u: goto label_1bbad8;
        case 0x1bbadcu: goto label_1bbadc;
        case 0x1bbae0u: goto label_1bbae0;
        case 0x1bbae4u: goto label_1bbae4;
        case 0x1bbae8u: goto label_1bbae8;
        case 0x1bbaecu: goto label_1bbaec;
        case 0x1bbaf0u: goto label_1bbaf0;
        case 0x1bbaf4u: goto label_1bbaf4;
        case 0x1bbaf8u: goto label_1bbaf8;
        case 0x1bbafcu: goto label_1bbafc;
        case 0x1bbb00u: goto label_1bbb00;
        case 0x1bbb04u: goto label_1bbb04;
        case 0x1bbb08u: goto label_1bbb08;
        case 0x1bbb0cu: goto label_1bbb0c;
        case 0x1bbb10u: goto label_1bbb10;
        case 0x1bbb14u: goto label_1bbb14;
        case 0x1bbb18u: goto label_1bbb18;
        case 0x1bbb1cu: goto label_1bbb1c;
        case 0x1bbb20u: goto label_1bbb20;
        case 0x1bbb24u: goto label_1bbb24;
        case 0x1bbb28u: goto label_1bbb28;
        case 0x1bbb2cu: goto label_1bbb2c;
        case 0x1bbb30u: goto label_1bbb30;
        case 0x1bbb34u: goto label_1bbb34;
        case 0x1bbb38u: goto label_1bbb38;
        case 0x1bbb3cu: goto label_1bbb3c;
        case 0x1bbb40u: goto label_1bbb40;
        case 0x1bbb44u: goto label_1bbb44;
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb4cu: goto label_1bbb4c;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb54u: goto label_1bbb54;
        case 0x1bbb58u: goto label_1bbb58;
        case 0x1bbb5cu: goto label_1bbb5c;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb64u: goto label_1bbb64;
        case 0x1bbb68u: goto label_1bbb68;
        case 0x1bbb6cu: goto label_1bbb6c;
        default: break;
    }

    ctx->pc = 0x1bb9e0u;

label_1bb9e0:
    // 0x1bb9e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bb9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1bb9e4:
    // 0x1bb9e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1bb9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9e8:
    // 0x1bb9e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1bb9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1bb9ec:
    // 0x1bb9ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb9f0:
    // 0x1bb9f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bb9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1bb9f4:
    // 0x1bb9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bb9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bb9f8:
    // 0x1bb9f8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1bb9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1bb9fc:
    // 0x1bb9fc: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1bb9fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1bba00:
    // 0x1bba00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1bba04:
    // 0x1bba04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bba08:
    // 0x1bba08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bba08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bba0c:
    // 0x1bba0c: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x1bba0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bba10:
    // 0x1bba10: 0x8c940014  lw          $s4, 0x14($a0)
    ctx->pc = 0x1bba10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bba14:
    // 0x1bba14: 0x1280004c  beqz        $s4, . + 4 + (0x4C << 2)
label_1bba18:
    if (ctx->pc == 0x1BBA18u) {
        ctx->pc = 0x1BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA14u;
        // 0x1bba18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA1Cu;
        goto label_1bba1c;
    }
    ctx->pc = 0x1BBA14u;
    {
        const bool branch_taken_0x1bba14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA14u;
        // 0x1bba18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba14) {
            ctx->pc = 0x1BBB48u;
            goto label_1bbb48;
        }
    }
    ctx->pc = 0x1BBA1Cu;
label_1bba1c:
    // 0x1bba1c: 0xd09818  mult        $s3, $a2, $s0
    ctx->pc = 0x1bba1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_1bba20:
    // 0x1bba20: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bba24:
    // 0x1bba24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1bba24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bba28:
    // 0x1bba28: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bba2c:
    // 0x1bba2c: 0x40f809  jalr        $v0
label_1bba30:
    if (ctx->pc == 0x1BBA30u) {
        ctx->pc = 0x1BBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA2Cu;
        // 0x1bba30: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA34u;
        goto label_1bba34;
    }
    ctx->pc = 0x1BBA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBA34u);
        ctx->pc = 0x1BBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA2Cu;
        // 0x1bba30: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBA2Cu, 0x1BBA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBA34u;
label_1bba34:
    // 0x1bba34: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1bba38:
    if (ctx->pc == 0x1BBA38u) {
        ctx->pc = 0x1BBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA34u;
        // 0x1bba38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA3Cu;
        goto label_1bba3c;
    }
    ctx->pc = 0x1BBA34u;
    {
        const bool branch_taken_0x1bba34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba34) {
            ctx->pc = 0x1BBA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBA34u;
            // 0x1bba38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBA3Cu;
            goto label_1bba3c;
        }
    }
    ctx->pc = 0x1BBA3Cu;
label_1bba3c:
    // 0x1bba3c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1bba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bba40:
    // 0x1bba40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bba40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bba44:
    // 0x1bba44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1bba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bba48:
    // 0x1bba48: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1bba48u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bba4c:
    // 0x1bba4c: 0x1012  mflo        $v0
    ctx->pc = 0x1bba4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1bba50:
    // 0x1bba50: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x1bba50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_1bba54:
    // 0x1bba54: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1bba54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bba58:
    // 0x1bba58: 0xc049cb6  jal         func_1272D8
label_1bba5c:
    if (ctx->pc == 0x1BBA5Cu) {
        ctx->pc = 0x1BBA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA58u;
        // 0x1bba5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA60u;
        goto label_1bba60;
    }
    ctx->pc = 0x1BBA58u;
    SET_GPR_U32(ctx, 31, 0x1BBA60u);
    ctx->pc = 0x1BBA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBA58u;
    // 0x1bba5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BBA58u, 0x1BBA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA60u;
label_1bba60:
    // 0x1bba60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bba60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bba64:
    // 0x1bba64: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1bba64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bba68:
    // 0x1bba68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bba6c:
    // 0x1bba6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bba6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bba70:
    // 0x1bba70: 0xc07337e  jal         func_1CCDF8
label_1bba74:
    if (ctx->pc == 0x1BBA74u) {
        ctx->pc = 0x1BBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA70u;
        // 0x1bba74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA78u;
        goto label_1bba78;
    }
    ctx->pc = 0x1BBA70u;
    SET_GPR_U32(ctx, 31, 0x1BBA78u);
    ctx->pc = 0x1BBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBA70u;
    // 0x1bba74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1BBA70u, 0x1BBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA78u;
label_1bba78:
    // 0x1bba78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bba7c:
    // 0x1bba7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bba7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bba80:
    // 0x1bba80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bba84:
    // 0x1bba84: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bba88:
    // 0x1bba88: 0x40f809  jalr        $v0
label_1bba8c:
    if (ctx->pc == 0x1BBA8Cu) {
        ctx->pc = 0x1BBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA88u;
        // 0x1bba8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA90u;
        goto label_1bba90;
    }
    ctx->pc = 0x1BBA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBA90u);
        ctx->pc = 0x1BBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA88u;
        // 0x1bba8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBA88u, 0x1BBA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBA90u;
label_1bba90:
    // 0x1bba90: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bba94:
    // 0x1bba94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bba98:
    // 0x1bba98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bba98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bba9c:
    // 0x1bba9c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bbaa0:
    // 0x1bbaa0: 0x40f809  jalr        $v0
label_1bbaa4:
    if (ctx->pc == 0x1BBAA4u) {
        ctx->pc = 0x1BBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAA0u;
        // 0x1bbaa4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAA8u;
        goto label_1bbaa8;
    }
    ctx->pc = 0x1BBAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBAA8u);
        ctx->pc = 0x1BBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAA0u;
        // 0x1bbaa4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBAA0u, 0x1BBAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBAA8u;
label_1bbaa8:
    // 0x1bbaa8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bbaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bbaac:
    // 0x1bbaac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1bbaacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbab0:
    // 0x1bbab0: 0x2713023  subu        $a2, $s3, $s1
    ctx->pc = 0x1bbab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1bbab4:
    // 0x1bbab4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bbab8:
    // 0x1bbab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bbab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bbabc:
    // 0x1bbabc: 0x40f809  jalr        $v0
label_1bbac0:
    if (ctx->pc == 0x1BBAC0u) {
        ctx->pc = 0x1BBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBABCu;
        // 0x1bbac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAC4u;
        goto label_1bbac4;
    }
    ctx->pc = 0x1BBABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBAC4u);
        ctx->pc = 0x1BBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBABCu;
        // 0x1bbac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBABCu, 0x1BBAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBAC4u;
label_1bbac4:
    // 0x1bbac4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1bbac8:
    if (ctx->pc == 0x1BBAC8u) {
        ctx->pc = 0x1BBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAC4u;
        // 0x1bbac8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBACCu;
        goto label_1bbacc;
    }
    ctx->pc = 0x1BBAC4u;
    {
        const bool branch_taken_0x1bbac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbac4) {
            ctx->pc = 0x1BBAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBAC4u;
            // 0x1bbac8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBACCu;
            goto label_1bbacc;
        }
    }
    ctx->pc = 0x1BBACCu;
label_1bbacc:
    // 0x1bbacc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1bbaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bbad0:
    // 0x1bbad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbad4:
    // 0x1bbad4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1bbad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbad8:
    // 0x1bbad8: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1bbad8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bbadc:
    // 0x1bbadc: 0x1012  mflo        $v0
    ctx->pc = 0x1bbadcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1bbae0:
    // 0x1bbae0: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x1bbae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_1bbae4:
    // 0x1bbae4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bbae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bbae8:
    // 0x1bbae8: 0xc049cb6  jal         func_1272D8
label_1bbaec:
    if (ctx->pc == 0x1BBAECu) {
        ctx->pc = 0x1BBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAE8u;
        // 0x1bbaec: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAF0u;
        goto label_1bbaf0;
    }
    ctx->pc = 0x1BBAE8u;
    SET_GPR_U32(ctx, 31, 0x1BBAF0u);
    ctx->pc = 0x1BBAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAE8u;
    // 0x1bbaec: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BBAE8u, 0x1BBAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBAF0u;
label_1bbaf0:
    // 0x1bbaf0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bbaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bbaf4:
    // 0x1bbaf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bbaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbaf8:
    // 0x1bbaf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bbaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbafc:
    // 0x1bbafc: 0xc07337e  jal         func_1CCDF8
label_1bbb00:
    if (ctx->pc == 0x1BBB00u) {
        ctx->pc = 0x1BBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAFCu;
        // 0x1bbb00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB04u;
        goto label_1bbb04;
    }
    ctx->pc = 0x1BBAFCu;
    SET_GPR_U32(ctx, 31, 0x1BBB04u);
    ctx->pc = 0x1BBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAFCu;
    // 0x1bbb00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1BBAFCu, 0x1BBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB04u;
label_1bbb04:
    // 0x1bbb04: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bbb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bbb08:
    // 0x1bbb08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bbb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbb0c:
    // 0x1bbb0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bbb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bbb10:
    // 0x1bbb10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bbb14:
    // 0x1bbb14: 0x40f809  jalr        $v0
label_1bbb18:
    if (ctx->pc == 0x1BBB18u) {
        ctx->pc = 0x1BBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB14u;
        // 0x1bbb18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB1Cu;
        goto label_1bbb1c;
    }
    ctx->pc = 0x1BBB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBB1Cu);
        ctx->pc = 0x1BBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB14u;
        // 0x1bbb18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB14u, 0x1BBB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBB1Cu;
label_1bbb1c:
    // 0x1bbb1c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bbb20:
    // 0x1bbb20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bbb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bbb24:
    // 0x1bbb24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bbb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bbb28:
    // 0x1bbb28: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bbb2c:
    // 0x1bbb2c: 0x40f809  jalr        $v0
label_1bbb30:
    if (ctx->pc == 0x1BBB30u) {
        ctx->pc = 0x1BBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB2Cu;
        // 0x1bbb30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB34u;
        goto label_1bbb34;
    }
    ctx->pc = 0x1BBB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBB34u);
        ctx->pc = 0x1BBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB2Cu;
        // 0x1bbb30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB2Cu, 0x1BBB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBB34u;
label_1bbb34:
    // 0x1bbb34: 0x230001a  div         $zero, $s1, $s0
    ctx->pc = 0x1bbb34u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bbb38:
    // 0x1bbb38: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1bbb3c:
    if (ctx->pc == 0x1BBB3Cu) {
        ctx->pc = 0x1BBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB38u;
        // 0x1bbb3c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB40u;
        goto label_1bbb40;
    }
    ctx->pc = 0x1BBB38u;
    {
        const bool branch_taken_0x1bbb38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb38) {
            ctx->pc = 0x1BBB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBB38u;
            // 0x1bbb3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBB40u;
            goto label_1bbb40;
        }
    }
    ctx->pc = 0x1BBB40u;
label_1bbb40:
    // 0x1bbb40: 0x8812  mflo        $s1
    ctx->pc = 0x1bbb40u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_1bbb44:
    // 0x1bbb44: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_1bbb48:
    // 0x1bbb48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bbb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbb4c:
    // 0x1bbb4c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bbb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bbb50:
    // 0x1bbb50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bbb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bbb54:
    // 0x1bbb54: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1bbb54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bbb58:
    // 0x1bbb58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bbb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bbb5c:
    // 0x1bbb5c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1bbb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1bbb60:
    // 0x1bbb60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bbb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bbb64:
    // 0x1bbb64: 0x3e00008  jr          $ra
label_1bbb68:
    if (ctx->pc == 0x1BBB68u) {
        ctx->pc = 0x1BBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB64u;
        // 0x1bbb68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB6Cu;
        goto label_1bbb6c;
    }
    ctx->pc = 0x1BBB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB64u;
        // 0x1bbb68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBB6Cu;
label_1bbb6c:
    // 0x1bbb6c: 0x0  nop
    ctx->pc = 0x1bbb6cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233498
// Address: 0x233498 - 0x2335e0
void sub_00233498_0x233498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233498_0x233498");
#endif

    switch (ctx->pc) {
        case 0x2334b0u: goto label_2334b0;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334fcu: goto label_2334fc;
        case 0x233518u: goto label_233518;
        case 0x233540u: goto label_233540;
        case 0x233578u: goto label_233578;
        case 0x233588u: goto label_233588;
        case 0x2335a8u: goto label_2335a8;
        default: break;
    }

    ctx->pc = 0x233498u;

    // 0x233498: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x233498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x23349c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23349cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2334a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2334a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334a4: 0x808b538  j           func_22D4E0
    ctx->pc = 0x2334A4u;
    ctx->pc = 0x2334A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2334A4u;
            // 0x2334a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2334ACu;
    // 0x2334ac: 0x0  nop
    ctx->pc = 0x2334acu;
    // NOP
label_2334b0:
    // 0x2334b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2334b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2334b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2334b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2334b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2334b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2334bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2334bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2334c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2334c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2334c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2334c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2334c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2334cc: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2334ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2334d0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2334D0u;
    {
        const bool branch_taken_0x2334d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2334D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2334D0u;
            // 0x2334d4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334d0) {
            ctx->pc = 0x233524u;
            goto label_233524;
        }
    }
    ctx->pc = 0x2334D8u;
    // 0x2334d8: 0x3c130023  lui         $s3, 0x23
    ctx->pc = 0x2334d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
    // 0x2334dc: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x2334dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_2334e0:
    // 0x2334e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2334e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334e4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2334e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2334e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2334e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334ec: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2334ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2334f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2334f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334f4: 0xc08cf60  jal         func_233D80
    ctx->pc = 0x2334F4u;
    SET_GPR_U32(ctx, 31, 0x2334FCu);
    ctx->pc = 0x2334F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2334F4u;
            // 0x2334f8: 0xfe020030  sd          $v0, 0x30($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233D80u;
    if (runtime->hasFunction(0x233D80u)) {
        auto targetFn = runtime->lookupFunction(0x233D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2334FCu; }
        if (ctx->pc != 0x2334FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233D80_0x233d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2334FCu; }
        if (ctx->pc != 0x2334FCu) { return; }
    }
    ctx->pc = 0x2334FCu;
label_2334fc:
    // 0x2334fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2334FCu;
    {
        const bool branch_taken_0x2334fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2334FCu;
            // 0x233500: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334fc) {
            ctx->pc = 0x233518u;
            goto label_233518;
        }
    }
    ctx->pc = 0x233504u;
    // 0x233504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233508: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23350c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23350cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233510: 0xc08cdaa  jal         func_2336A8
    ctx->pc = 0x233510u;
    SET_GPR_U32(ctx, 31, 0x233518u);
    ctx->pc = 0x233514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233510u;
            // 0x233514: 0x2668d4e0  addiu       $t0, $s3, -0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2336A8u;
    if (runtime->hasFunction(0x2336A8u)) {
        auto targetFn = runtime->lookupFunction(0x2336A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233518u; }
        if (ctx->pc != 0x233518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002336A8_0x2336a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233518u; }
        if (ctx->pc != 0x233518u) { return; }
    }
    ctx->pc = 0x233518u;
label_233518:
    // 0x233518: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x233518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23351c: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23351Cu;
    {
        const bool branch_taken_0x23351c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23351c) {
            ctx->pc = 0x233520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23351Cu;
            // 0x233520: 0xde020030  ld          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2334E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2334e0;
        }
    }
    ctx->pc = 0x233524u;
label_233524:
    // 0x233524: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x233524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233528: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x233528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23352c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23352cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233530: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233538: 0x3e00008  jr          $ra
    ctx->pc = 0x233538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233538u;
            // 0x23353c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233540u;
label_233540:
    // 0x233540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x233540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x233544: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x233544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x233548: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x233548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23354c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23354cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233550: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x233550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x233554: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x233554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233558: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x233558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23355c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23355cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233560: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x233560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x233564: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x233564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233568: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x233568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23356c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23356Cu;
    {
        const bool branch_taken_0x23356c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x233570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23356Cu;
            // 0x233570: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23356c) {
            ctx->pc = 0x2335B4u;
            goto label_2335b4;
        }
    }
    ctx->pc = 0x233574u;
    // 0x233574: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x233574u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
label_233578:
    // 0x233578: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x233578u;
    {
        const bool branch_taken_0x233578 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x233578) {
            ctx->pc = 0x23357Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233578u;
            // 0x23357c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23358Cu;
            goto label_23358c;
        }
    }
    ctx->pc = 0x233580u;
    // 0x233580: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x233580u;
    SET_GPR_U32(ctx, 31, 0x233588u);
    ctx->pc = 0x233584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233580u;
            // 0x233584: 0x26a447e0  addiu       $a0, $s5, 0x47E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 18400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233588u; }
        if (ctx->pc != 0x233588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233588u; }
        if (ctx->pc != 0x233588u) { return; }
    }
    ctx->pc = 0x233588u;
label_233588:
    // 0x233588: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x233588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23358c:
    // 0x23358c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233590: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x233594: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x233594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x233598: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x233598u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x23359c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335a0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2335A0u;
    SET_GPR_U32(ctx, 31, 0x2335A8u);
    ctx->pc = 0x2335A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2335A0u;
            // 0x2335a4: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2335A8u; }
        if (ctx->pc != 0x2335A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2335A8u; }
        if (ctx->pc != 0x2335A8u) { return; }
    }
    ctx->pc = 0x2335A8u;
label_2335a8:
    // 0x2335a8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2335a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2335ac: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2335ACu;
    {
        const bool branch_taken_0x2335ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2335ACu;
            // 0x2335b0: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335ac) {
            ctx->pc = 0x233578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233578;
        }
    }
    ctx->pc = 0x2335B4u;
label_2335b4:
    // 0x2335b4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2335b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2335b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2335bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2335bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2335c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2335c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2335c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2335c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2335c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2335c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2335cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2335ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2335d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2335d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2335D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2335D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2335D4u;
            // 0x2335d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2335DCu;
    // 0x2335dc: 0x0  nop
    ctx->pc = 0x2335dcu;
    // NOP
    ctx->pc = 0x2335e0u;
}

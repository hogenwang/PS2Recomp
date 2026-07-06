#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A4E8
// Address: 0x25a4e8 - 0x25a5c8
void sub_0025A4E8_0x25a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A4E8_0x25a4e8");
#endif

    switch (ctx->pc) {
        case 0x25a51cu: goto label_25a51c;
        case 0x25a578u: goto label_25a578;
        case 0x25a584u: goto label_25a584;
        case 0x25a5b0u: goto label_25a5b0;
        default: break;
    }

    ctx->pc = 0x25a4e8u;

    // 0x25a4e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a4ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25a4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25a4f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a4f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25a4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25a4fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a504: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x25a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x25a508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A508u;
    {
        const bool branch_taken_0x25a508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A508u;
            // 0x25a50c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a508) {
            ctx->pc = 0x25A520u;
            goto label_25a520;
        }
    }
    ctx->pc = 0x25A510u;
    // 0x25a510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a514: 0xc0932e6  jal         func_24CB98
    ctx->pc = 0x25A514u;
    SET_GPR_U32(ctx, 31, 0x25A51Cu);
    ctx->pc = 0x25A518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A514u;
            // 0x25a518: 0x8c52001c  lw          $s2, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24CB98u;
    if (runtime->hasFunction(0x24CB98u)) {
        auto targetFn = runtime->lookupFunction(0x24CB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A51Cu; }
        if (ctx->pc != 0x25A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024CB98_0x24cb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A51Cu; }
        if (ctx->pc != 0x25A51Cu) { return; }
    }
    ctx->pc = 0x25A51Cu;
label_25a51c:
    // 0x25a51c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25a51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a520:
    // 0x25a520: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25a520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25a524: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25a524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25a528: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x25a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x25a52c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a530: 0x8ca31530  lw          $v1, 0x1530($a1)
    ctx->pc = 0x25a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5424)));
    // 0x25a534: 0xa6240018  sh          $a0, 0x18($s1)
    ctx->pc = 0x25a534u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a53c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A53Cu;
    {
        const bool branch_taken_0x25a53c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A53Cu;
            // 0x25a540: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a53c) {
            ctx->pc = 0x25A550u;
            goto label_25a550;
        }
    }
    ctx->pc = 0x25A544u;
    // 0x25a544: 0xdcc30078  ld          $v1, 0x78($a2)
    ctx->pc = 0x25a544u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x25a548: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A548u;
    {
        const bool branch_taken_0x25a548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a548) {
            ctx->pc = 0x25A54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25A548u;
            // 0x25a54c: 0x96300022  lhu         $s0, 0x22($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25A558u;
            goto label_25a558;
        }
    }
    ctx->pc = 0x25A550u;
label_25a550:
    // 0x25a550: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x25a550u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x25a554: 0x96300022  lhu         $s0, 0x22($s1)
    ctx->pc = 0x25a554u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_25a558:
    // 0x25a558: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x25a558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a55c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25A55Cu;
    {
        const bool branch_taken_0x25a55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A55Cu;
            // 0x25a560: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a55c) {
            ctx->pc = 0x25A5B0u;
            goto label_25a5b0;
        }
    }
    ctx->pc = 0x25A564u;
    // 0x25a564: 0x96240022  lhu         $a0, 0x22($s1)
    ctx->pc = 0x25a564u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x25a568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25a568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a56c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25a570: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x25A570u;
    SET_GPR_U32(ctx, 31, 0x25A578u);
    ctx->pc = 0x25A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A570u;
            // 0x25a574: 0x64202d  daddu       $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A578u; }
        if (ctx->pc != 0x25A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A578u; }
        if (ctx->pc != 0x25A578u) { return; }
    }
    ctx->pc = 0x25A578u;
label_25a578:
    // 0x25a578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a57c: 0xc048082  jal         func_120208
    ctx->pc = 0x25A57Cu;
    SET_GPR_U32(ctx, 31, 0x25A584u);
    ctx->pc = 0x25A580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A57Cu;
            // 0x25a580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A584u; }
        if (ctx->pc != 0x25A584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A584u; }
        if (ctx->pc != 0x25A584u) { return; }
    }
    ctx->pc = 0x25A584u;
label_25a584:
    // 0x25a584: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25a584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a588: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x25a588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x25a58c: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x25a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x25a590: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x25a590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a598: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x25a598u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x25a59c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25a59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a5a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a5a8: 0x808c284  j           func_230A10
    ctx->pc = 0x25A5A8u;
    ctx->pc = 0x25A5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A5A8u;
            // 0x25a5ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230A10u;
    if (runtime->hasFunction(0x230A10u)) {
        auto targetFn = runtime->lookupFunction(0x230A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00230A10_0x230a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x25A5B0u;
label_25a5b0:
    // 0x25a5b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25a5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a5b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A5BCu;
            // 0x25a5c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A5C4u;
    // 0x25a5c4: 0x0  nop
    ctx->pc = 0x25a5c4u;
    // NOP
    ctx->pc = 0x25a5c8u;
}

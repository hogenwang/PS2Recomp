#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A630
// Address: 0x18a630 - 0x18a7a0
void sub_0018A630_0x18a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A630_0x18a630");
#endif

    switch (ctx->pc) {
        case 0x18a698u: goto label_18a698;
        default: break;
    }

    ctx->pc = 0x18a630u;

    // 0x18a630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a634: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18a634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18a638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a63c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a648: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18a648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18a64c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A64Cu;
    {
        const bool branch_taken_0x18a64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A64Cu;
            // 0x18a650: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a64c) {
            ctx->pc = 0x18A65Cu;
            goto label_18a65c;
        }
    }
    ctx->pc = 0x18A654u;
    // 0x18a654: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x18A654u;
    {
        const bool branch_taken_0x18a654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A654u;
            // 0x18a658: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a654) {
            ctx->pc = 0x18A780u;
            goto label_18a780;
        }
    }
    ctx->pc = 0x18A65Cu;
label_18a65c:
    // 0x18a65c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18a660: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18a660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a664: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x18a664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x18a668: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A668u;
    {
        const bool branch_taken_0x18a668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a668) {
            ctx->pc = 0x18A66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A668u;
            // 0x18a66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A690u;
            goto label_18a690;
        }
    }
    ctx->pc = 0x18A670u;
    // 0x18a670: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18a670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18a674: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18a678: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x18a678u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x18a67c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A67Cu;
    {
        const bool branch_taken_0x18a67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a67c) {
            ctx->pc = 0x18A68Cu;
            goto label_18a68c;
        }
    }
    ctx->pc = 0x18A684u;
    // 0x18a684: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18A684u;
    {
        const bool branch_taken_0x18a684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A684u;
            // 0x18a688: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a684) {
            ctx->pc = 0x18A780u;
            goto label_18a780;
        }
    }
    ctx->pc = 0x18A68Cu;
label_18a68c:
    // 0x18a68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18a690:
    // 0x18a690: 0xc062948  jal         func_18A520
    ctx->pc = 0x18A690u;
    SET_GPR_U32(ctx, 31, 0x18A698u);
    ctx->pc = 0x18A520u;
    if (runtime->hasFunction(0x18A520u)) {
        auto targetFn = runtime->lookupFunction(0x18A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A698u; }
        if (ctx->pc != 0x18A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A520_0x18a520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A698u; }
        if (ctx->pc != 0x18A698u) { return; }
    }
    ctx->pc = 0x18A698u;
label_18a698:
    // 0x18a698: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18a698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18a69c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A69Cu;
    {
        const bool branch_taken_0x18a69c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a69c) {
            ctx->pc = 0x18A6A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A69Cu;
            // 0x18a6a0: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A6ACu;
            goto label_18a6ac;
        }
    }
    ctx->pc = 0x18A6A4u;
    // 0x18a6a4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18A6A4u;
    {
        const bool branch_taken_0x18a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6A4u;
            // 0x18a6a8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6a4) {
            ctx->pc = 0x18A780u;
            goto label_18a780;
        }
    }
    ctx->pc = 0x18A6ACu;
label_18a6ac:
    // 0x18a6ac: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x18A6ACu;
    {
        const bool branch_taken_0x18a6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a6ac) {
            ctx->pc = 0x18A6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6ACu;
            // 0x18a6b0: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A724u;
            goto label_18a724;
        }
    }
    ctx->pc = 0x18A6B4u;
    // 0x18a6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a6b8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A6B8u;
    {
        const bool branch_taken_0x18a6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a6b8) {
            ctx->pc = 0x18A6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6B8u;
            // 0x18a6bc: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A6C8u;
            goto label_18a6c8;
        }
    }
    ctx->pc = 0x18A6C0u;
    // 0x18a6c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x18A6C0u;
    {
        const bool branch_taken_0x18a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6C0u;
            // 0x18a6c4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6c0) {
            ctx->pc = 0x18A780u;
            goto label_18a780;
        }
    }
    ctx->pc = 0x18A6C8u;
label_18a6c8:
    // 0x18a6c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18a6cc: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x18a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18a6d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a6d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18a6d8: 0x2484db7a  addiu       $a0, $a0, -0x2486
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957946));
    // 0x18a6dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a6e0: 0x2463dbc8  addiu       $v1, $v1, -0x2438
    ctx->pc = 0x18a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958024));
    // 0x18a6e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18a6e8: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x18a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a6ec: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x18a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18a6f0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x18a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18a6f4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x18a6f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a6f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a6fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a700: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18a700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a704: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x18a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18a708: 0x906304f0  lbu         $v1, 0x4F0($v1)
    ctx->pc = 0x18a708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x18a70c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x18a70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18a710: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A710u;
    {
        const bool branch_taken_0x18a710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a710) {
            ctx->pc = 0x18A720u;
            goto label_18a720;
        }
    }
    ctx->pc = 0x18A718u;
    // 0x18a718: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18A718u;
    {
        const bool branch_taken_0x18a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A718u;
            // 0x18a71c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a718) {
            ctx->pc = 0x18A784u;
            goto label_18a784;
        }
    }
    ctx->pc = 0x18A720u;
label_18a720:
    // 0x18a720: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x18a720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_18a724:
    // 0x18a724: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a728: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a72c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18a730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a734: 0x2463db79  addiu       $v1, $v1, -0x2487
    ctx->pc = 0x18a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957945));
    // 0x18a738: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a73c: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x18a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x18a740: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a744: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x18a744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a748: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x18a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18a74c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x18a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18a750: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x18a750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a75c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a760: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18a764: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x18a764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x18a768: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x18a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x18a76c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A76Cu;
    {
        const bool branch_taken_0x18a76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a76c) {
            ctx->pc = 0x18A77Cu;
            goto label_18a77c;
        }
    }
    ctx->pc = 0x18A774u;
    // 0x18a774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A774u;
    {
        const bool branch_taken_0x18a774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A774u;
            // 0x18a778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a774) {
            ctx->pc = 0x18A780u;
            goto label_18a780;
        }
    }
    ctx->pc = 0x18A77Cu;
label_18a77c:
    // 0x18a77c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18a780:
    // 0x18a780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18a784:
    // 0x18a784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a78c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A78Cu;
            // 0x18a790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A794u;
    // 0x18a794: 0x0  nop
    ctx->pc = 0x18a794u;
    // NOP
    // 0x18a798: 0x0  nop
    ctx->pc = 0x18a798u;
    // NOP
    // 0x18a79c: 0x0  nop
    ctx->pc = 0x18a79cu;
    // NOP
    ctx->pc = 0x18a7a0u;
}

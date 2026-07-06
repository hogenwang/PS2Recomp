#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025E5E0
// Address: 0x25e5e0 - 0x25e910
void sub_0025E5E0_0x25e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E5E0_0x25e5e0");
#endif

    switch (ctx->pc) {
        case 0x25e628u: goto label_25e628;
        case 0x25e67cu: goto label_25e67c;
        case 0x25e694u: goto label_25e694;
        case 0x25e6acu: goto label_25e6ac;
        case 0x25e6c4u: goto label_25e6c4;
        case 0x25e6e0u: goto label_25e6e0;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e7b4u: goto label_25e7b4;
        case 0x25e7c0u: goto label_25e7c0;
        case 0x25e7c8u: goto label_25e7c8;
        case 0x25e7e8u: goto label_25e7e8;
        case 0x25e80cu: goto label_25e80c;
        case 0x25e81cu: goto label_25e81c;
        case 0x25e834u: goto label_25e834;
        case 0x25e840u: goto label_25e840;
        case 0x25e850u: goto label_25e850;
        case 0x25e860u: goto label_25e860;
        case 0x25e88cu: goto label_25e88c;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8d4u: goto label_25e8d4;
        default: break;
    }

    ctx->pc = 0x25e5e0u;

    // 0x25e5e0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x25e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x25e5e4: 0xffb70160  sd          $s7, 0x160($sp)
    ctx->pc = 0x25e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 23));
    // 0x25e5e8: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x25e5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x25e5ec: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25e5ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5f0: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x25e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x25e5f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25e5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5f8: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x25e5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x25e5fc: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x25e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x25e600: 0xffb50140  sd          $s5, 0x140($sp)
    ctx->pc = 0x25e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x25e604: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x25e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x25e608: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x25e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x25e60c: 0xffb10100  sd          $s1, 0x100($sp)
    ctx->pc = 0x25e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
    // 0x25e610: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x25e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x25e614: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x25e614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x25e618: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x25e618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x25e61c: 0xafa700dc  sw          $a3, 0xDC($sp)
    ctx->pc = 0x25e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 7));
    // 0x25e620: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25E620u;
    SET_GPR_U32(ctx, 31, 0x25E628u);
    ctx->pc = 0x25E624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E620u;
            // 0x25e624: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E628u; }
        if (ctx->pc != 0x25E628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E628u; }
        if (ctx->pc != 0x25E628u) { return; }
    }
    ctx->pc = 0x25E628u;
label_25e628:
    // 0x25e628: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25e628u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e62c: 0x13c000ac  beqz        $fp, . + 4 + (0xAC << 2)
    ctx->pc = 0x25E62Cu;
    {
        const bool branch_taken_0x25e62c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E62Cu;
            // 0x25e630: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e62c) {
            ctx->pc = 0x25E8E0u;
            goto label_25e8e0;
        }
    }
    ctx->pc = 0x25E634u;
    // 0x25e634: 0x6600040  bltz        $s3, . + 4 + (0x40 << 2)
    ctx->pc = 0x25E634u;
    {
        const bool branch_taken_0x25e634 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x25E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E634u;
            // 0x25e638: 0x2a640101  slti        $a0, $s3, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e634) {
            ctx->pc = 0x25E738u;
            goto label_25e738;
        }
    }
    ctx->pc = 0x25E63Cu;
    // 0x25e63c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x25e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x25e640: 0x44980a  movz        $s3, $v0, $a0
    ctx->pc = 0x25e640u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x25e644: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25e644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25e648: 0x2664001f  addiu       $a0, $s3, 0x1F
    ctx->pc = 0x25e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x25e64c: 0x2662003e  addiu       $v0, $s3, 0x3E
    ctx->pc = 0x25e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 62));
    // 0x25e650: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x25e650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25e654: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x25e654u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x25e658: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x25e658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x25e65c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x25e65cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e660: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x25e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x25e664: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E664u;
    {
        const bool branch_taken_0x25e664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E664u;
            // 0x25e668: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e664) {
            ctx->pc = 0x25E684u;
            goto label_25e684;
        }
    }
    ctx->pc = 0x25E66Cu;
    // 0x25e66c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25e66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e670: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25e670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e674: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25E674u;
    SET_GPR_U32(ctx, 31, 0x25E67Cu);
    ctx->pc = 0x25E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E674u;
            // 0x25e678: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E67Cu; }
        if (ctx->pc != 0x25E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E67Cu; }
        if (ctx->pc != 0x25E67Cu) { return; }
    }
    ctx->pc = 0x25E67Cu;
label_25e67c:
    // 0x25e67c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25E67Cu;
    {
        const bool branch_taken_0x25e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E67Cu;
            // 0x25e680: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e67c) {
            ctx->pc = 0x25E698u;
            goto label_25e698;
        }
    }
    ctx->pc = 0x25E684u;
label_25e684:
    // 0x25e684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e68c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x25E68Cu;
    SET_GPR_U32(ctx, 31, 0x25E694u);
    ctx->pc = 0x25E690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E68Cu;
            // 0x25e690: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E694u; }
        if (ctx->pc != 0x25E694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E694u; }
        if (ctx->pc != 0x25E694u) { return; }
    }
    ctx->pc = 0x25E694u;
label_25e694:
    // 0x25e694: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x25e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_25e698:
    // 0x25e698: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E698u;
    {
        const bool branch_taken_0x25e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E698u;
            // 0x25e69c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e698) {
            ctx->pc = 0x25E6B4u;
            goto label_25e6b4;
        }
    }
    ctx->pc = 0x25E6A0u;
    // 0x25e6a0: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x25e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x25e6a4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25E6A4u;
    SET_GPR_U32(ctx, 31, 0x25E6ACu);
    ctx->pc = 0x25E6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6A4u;
            // 0x25e6a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6ACu; }
        if (ctx->pc != 0x25E6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6ACu; }
        if (ctx->pc != 0x25E6ACu) { return; }
    }
    ctx->pc = 0x25E6ACu;
label_25e6ac:
    // 0x25e6ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25E6ACu;
    {
        const bool branch_taken_0x25e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6ACu;
            // 0x25e6b0: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6ac) {
            ctx->pc = 0x25E6C8u;
            goto label_25e6c8;
        }
    }
    ctx->pc = 0x25E6B4u;
label_25e6b4:
    // 0x25e6b4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x25e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x25e6b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x25E6BCu;
    SET_GPR_U32(ctx, 31, 0x25E6C4u);
    ctx->pc = 0x25E6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6BCu;
            // 0x25e6c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6C4u; }
        if (ctx->pc != 0x25E6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6C4u; }
        if (ctx->pc != 0x25E6C4u) { return; }
    }
    ctx->pc = 0x25E6C4u;
label_25e6c4:
    // 0x25e6c4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_25e6c8:
    // 0x25e6c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E6C8u;
    {
        const bool branch_taken_0x25e6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6C8u;
            // 0x25e6cc: 0x10b040  sll         $s6, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6c8) {
            ctx->pc = 0x25E6E8u;
            goto label_25e6e8;
        }
    }
    ctx->pc = 0x25E6D0u;
    // 0x25e6d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25e6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6d4: 0x2562821  addu        $a1, $s2, $s6
    ctx->pc = 0x25e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x25e6d8: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25E6D8u;
    SET_GPR_U32(ctx, 31, 0x25E6E0u);
    ctx->pc = 0x25E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6D8u;
            // 0x25e6dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6E0u; }
        if (ctx->pc != 0x25E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6E0u; }
        if (ctx->pc != 0x25E6E0u) { return; }
    }
    ctx->pc = 0x25E6E0u;
label_25e6e0:
    // 0x25e6e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25E6E0u;
    {
        const bool branch_taken_0x25e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e6e0) {
            ctx->pc = 0x25E6F8u;
            goto label_25e6f8;
        }
    }
    ctx->pc = 0x25E6E8u;
label_25e6e8:
    // 0x25e6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6ec: 0x2562021  addu        $a0, $s2, $s6
    ctx->pc = 0x25e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x25e6f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x25E6F0u;
    SET_GPR_U32(ctx, 31, 0x25E6F8u);
    ctx->pc = 0x25E6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6F0u;
            // 0x25e6f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6F8u; }
        if (ctx->pc != 0x25E6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6F8u; }
        if (ctx->pc != 0x25E6F8u) { return; }
    }
    ctx->pc = 0x25E6F8u;
label_25e6f8:
    // 0x25e6f8: 0x52e0002c  beql        $s7, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x25E6F8u;
    {
        const bool branch_taken_0x25e6f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e6f8) {
            ctx->pc = 0x25E6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6F8u;
            // 0x25e6fc: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25E7ACu;
            goto label_25e7ac;
        }
    }
    ctx->pc = 0x25E700u;
    // 0x25e700: 0xdee80000  ld          $t0, 0x0($s7)
    ctx->pc = 0x25e700u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x25e704: 0x3c0205f5  lui         $v0, 0x5F5
    ctx->pc = 0x25e704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1525 << 16));
    // 0x25e708: 0x3442e100  ori         $v0, $v0, 0xE100
    ctx->pc = 0x25e708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57600);
    // 0x25e70c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x25e70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x25e710: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x25E710u;
    {
        const bool branch_taken_0x25e710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E710u;
            // 0x25e714: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e710) {
            ctx->pc = 0x25E8C8u;
            goto label_25e8c8;
        }
    }
    ctx->pc = 0x25E718u;
    // 0x25e718: 0xdee70008  ld          $a3, 0x8($s7)
    ctx->pc = 0x25e718u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x25e71c: 0x4e0006b  bltz        $a3, . + 4 + (0x6B << 2)
    ctx->pc = 0x25E71Cu;
    {
        const bool branch_taken_0x25e71c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x25E720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E71Cu;
            // 0x25e720: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e71c) {
            ctx->pc = 0x25E8CCu;
            goto label_25e8cc;
        }
    }
    ctx->pc = 0x25E724u;
    // 0x25e724: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x25e724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x25e728: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x25e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x25e72c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x25e72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x25e730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E730u;
    {
        const bool branch_taken_0x25e730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e730) {
            ctx->pc = 0x25E740u;
            goto label_25e740;
        }
    }
    ctx->pc = 0x25E738u;
label_25e738:
    // 0x25e738: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x25E738u;
    {
        const bool branch_taken_0x25e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E738u;
            // 0x25e73c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e738) {
            ctx->pc = 0x25E8C8u;
            goto label_25e8c8;
        }
    }
    ctx->pc = 0x25E740u;
label_25e740:
    // 0x25e740: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25E740u;
    {
        const bool branch_taken_0x25e740 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E740u;
            // 0x25e744: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e740) {
            ctx->pc = 0x25E768u;
            goto label_25e768;
        }
    }
    ctx->pc = 0x25E748u;
    // 0x25e748: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E748u;
    {
        const bool branch_taken_0x25e748 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E748u;
            // 0x25e74c: 0x28e22710  slti        $v0, $a3, 0x2710 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e748) {
            ctx->pc = 0x25E760u;
            goto label_25e760;
        }
    }
    ctx->pc = 0x25E750u;
    // 0x25e750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E750u;
    {
        const bool branch_taken_0x25e750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E750u;
            // 0x25e754: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e750) {
            ctx->pc = 0x25E760u;
            goto label_25e760;
        }
    }
    ctx->pc = 0x25E758u;
    // 0x25e758: 0x24072710  addiu       $a3, $zero, 0x2710
    ctx->pc = 0x25e758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x25e75c: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x25e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
label_25e760:
    // 0x25e760: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25e760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25e764: 0x0  nop
    ctx->pc = 0x25e764u;
    // NOP
label_25e768:
    // 0x25e768: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x25e768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x25e76c: 0x34c6423f  ori         $a2, $a2, 0x423F
    ctx->pc = 0x25e76cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16959);
    // 0x25e770: 0x244317c0  addiu       $v1, $v0, 0x17C0
    ctx->pc = 0x25e770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
    // 0x25e774: 0xdc4417c0  ld          $a0, 0x17C0($v0)
    ctx->pc = 0x25e774u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x25e778: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x25e778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25e77c: 0x104182d  daddu       $v1, $t0, $a0
    ctx->pc = 0x25e77cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
    // 0x25e780: 0xe5202d  daddu       $a0, $a3, $a1
    ctx->pc = 0x25e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 5));
    // 0x25e784: 0xffa300c0  sd          $v1, 0xC0($sp)
    ctx->pc = 0x25e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 3));
    // 0x25e788: 0xc4302a  slt         $a2, $a2, $a0
    ctx->pc = 0x25e788u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25e78c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E78Cu;
    {
        const bool branch_taken_0x25e78c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E78Cu;
            // 0x25e790: 0xffa400c8  sd          $a0, 0xC8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e78c) {
            ctx->pc = 0x25E7ACu;
            goto label_25e7ac;
        }
    }
    ctx->pc = 0x25E794u;
    // 0x25e794: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x25e794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x25e798: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x25e798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x25e79c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x25e79cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25e7a0: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x25e7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x25e7a4: 0xffa300c0  sd          $v1, 0xC0($sp)
    ctx->pc = 0x25e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 3));
    // 0x25e7a8: 0xffa200c8  sd          $v0, 0xC8($sp)
    ctx->pc = 0x25e7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 2));
label_25e7ac:
    // 0x25e7ac: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x25e7acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25e7b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x25e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25e7b4:
    // 0x25e7b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7b8: 0xc097ab4  jal         func_25EAD0
    ctx->pc = 0x25E7B8u;
    SET_GPR_U32(ctx, 31, 0x25E7C0u);
    ctx->pc = 0x25E7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7B8u;
            // 0x25e7bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EAD0u;
    if (runtime->hasFunction(0x25EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x25EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7C0u; }
        if (ctx->pc != 0x25E7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EAD0_0x25ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7C0u; }
        if (ctx->pc != 0x25E7C0u) { return; }
    }
    ctx->pc = 0x25E7C0u;
label_25e7c0:
    // 0x25e7c0: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25E7C0u;
    SET_GPR_U32(ctx, 31, 0x25E7C8u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7C8u; }
        if (ctx->pc != 0x25E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7C8u; }
        if (ctx->pc != 0x25E7C8u) { return; }
    }
    ctx->pc = 0x25E7C8u;
label_25e7c8:
    // 0x25e7c8: 0x2d03021  addu        $a2, $s6, $s0
    ctx->pc = 0x25e7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x25e7cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25e7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7d0: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x25e7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x25e7d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x25e7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25e7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7e0: 0xc097a44  jal         func_25E910
    ctx->pc = 0x25E7E0u;
    SET_GPR_U32(ctx, 31, 0x25E7E8u);
    ctx->pc = 0x25E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7E0u;
            // 0x25e7e4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E910u;
    if (runtime->hasFunction(0x25E910u)) {
        auto targetFn = runtime->lookupFunction(0x25E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7E8u; }
        if (ctx->pc != 0x25E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E910_0x25e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7E8u; }
        if (ctx->pc != 0x25E7E8u) { return; }
    }
    ctx->pc = 0x25E7E8u;
label_25e7e8:
    // 0x25e7e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25e7e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7ec: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x25E7ECu;
    {
        const bool branch_taken_0x25e7ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7ECu;
            // 0x25e7f0: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7ec) {
            ctx->pc = 0x25E814u;
            goto label_25e814;
        }
    }
    ctx->pc = 0x25E7F4u;
    // 0x25e7f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E7F4u;
    {
        const bool branch_taken_0x25e7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e7f4) {
            ctx->pc = 0x25E814u;
            goto label_25e814;
        }
    }
    ctx->pc = 0x25E7FCu;
    // 0x25e7fc: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x25E7FCu;
    {
        const bool branch_taken_0x25e7fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7FCu;
            // 0x25e800: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7fc) {
            ctx->pc = 0x25E828u;
            goto label_25e828;
        }
    }
    ctx->pc = 0x25E804u;
    // 0x25e804: 0xc098012  jal         func_260048
    ctx->pc = 0x25E804u;
    SET_GPR_U32(ctx, 31, 0x25E80Cu);
    ctx->pc = 0x25E808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E804u;
            // 0x25e808: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260048u;
    if (runtime->hasFunction(0x260048u)) {
        auto targetFn = runtime->lookupFunction(0x260048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E80Cu; }
        if (ctx->pc != 0x25E80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260048_0x260048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E80Cu; }
        if (ctx->pc != 0x25E80Cu) { return; }
    }
    ctx->pc = 0x25E80Cu;
label_25e80c:
    // 0x25e80c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E80Cu;
    {
        const bool branch_taken_0x25e80c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E80Cu;
            // 0x25e810: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e80c) {
            ctx->pc = 0x25E824u;
            goto label_25e824;
        }
    }
    ctx->pc = 0x25E814u;
label_25e814:
    // 0x25e814: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25E814u;
    SET_GPR_U32(ctx, 31, 0x25E81Cu);
    ctx->pc = 0x25E818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E814u;
            // 0x25e818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E81Cu; }
        if (ctx->pc != 0x25E81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E81Cu; }
        if (ctx->pc != 0x25E81Cu) { return; }
    }
    ctx->pc = 0x25E81Cu;
label_25e81c:
    // 0x25e81c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25E81Cu;
    {
        const bool branch_taken_0x25e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e81c) {
            ctx->pc = 0x25E858u;
            goto label_25e858;
        }
    }
    ctx->pc = 0x25E824u;
label_25e824:
    // 0x25e824: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25e824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25e828:
    // 0x25e828: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x25e828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25e82c: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x25E82Cu;
    SET_GPR_U32(ctx, 31, 0x25E834u);
    ctx->pc = 0x25E830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E82Cu;
            // 0x25e830: 0x2484fa08  addiu       $a0, $a0, -0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (runtime->hasFunction(0x22D970u)) {
        auto targetFn = runtime->lookupFunction(0x22D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E834u; }
        if (ctx->pc != 0x25E834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D970_0x22d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E834u; }
        if (ctx->pc != 0x25E834u) { return; }
    }
    ctx->pc = 0x25E834u;
label_25e834:
    // 0x25e834: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25e834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e838: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25E838u;
    SET_GPR_U32(ctx, 31, 0x25E840u);
    ctx->pc = 0x25E83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E838u;
            // 0x25e83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E840u; }
        if (ctx->pc != 0x25E840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E840u; }
        if (ctx->pc != 0x25E840u) { return; }
    }
    ctx->pc = 0x25E840u;
label_25e840:
    // 0x25e840: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E840u;
    {
        const bool branch_taken_0x25e840 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e840) {
            ctx->pc = 0x25E858u;
            goto label_25e858;
        }
    }
    ctx->pc = 0x25E848u;
    // 0x25e848: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25E848u;
    SET_GPR_U32(ctx, 31, 0x25E850u);
    ctx->pc = 0x25E84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E848u;
            // 0x25e84c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (runtime->hasFunction(0x25CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x25CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E850u; }
        if (ctx->pc != 0x25E850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEB0_0x25ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E850u; }
        if (ctx->pc != 0x25E850u) { return; }
    }
    ctx->pc = 0x25E850u;
label_25e850:
    // 0x25e850: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x25E850u;
    {
        const bool branch_taken_0x25e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E850u;
            // 0x25e854: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e850) {
            ctx->pc = 0x25E7B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e7b4;
        }
    }
    ctx->pc = 0x25E858u;
label_25e858:
    // 0x25e858: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25E858u;
    SET_GPR_U32(ctx, 31, 0x25E860u);
    ctx->pc = 0x25E85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E858u;
            // 0x25e85c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (runtime->hasFunction(0x25CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x25CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E860u; }
        if (ctx->pc != 0x25E860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEB0_0x25ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E860u; }
        if (ctx->pc != 0x25E860u) { return; }
    }
    ctx->pc = 0x25E860u;
label_25e860:
    // 0x25e860: 0x3aa2000b  xori        $v0, $s5, 0xB
    ctx->pc = 0x25e860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)11);
    // 0x25e864: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x25e864u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x25e868: 0x56a00018  bnel        $s5, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x25E868u;
    {
        const bool branch_taken_0x25e868 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e868) {
            ctx->pc = 0x25E86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25E868u;
            // 0x25e86c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25E8CCu;
            goto label_25e8cc;
        }
    }
    ctx->pc = 0x25E870u;
    // 0x25e870: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x25e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x25e874: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E874u;
    {
        const bool branch_taken_0x25e874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E874u;
            // 0x25e878: 0x2d02021  addu        $a0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e874) {
            ctx->pc = 0x25E88Cu;
            goto label_25e88c;
        }
    }
    ctx->pc = 0x25E87Cu;
    // 0x25e87c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e880: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x25e884: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25E884u;
    SET_GPR_U32(ctx, 31, 0x25E88Cu);
    ctx->pc = 0x25E888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E884u;
            // 0x25e888: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E88Cu; }
        if (ctx->pc != 0x25E88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E88Cu; }
        if (ctx->pc != 0x25E88Cu) { return; }
    }
    ctx->pc = 0x25E88Cu;
label_25e88c:
    // 0x25e88c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x25e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25e890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E890u;
    {
        const bool branch_taken_0x25e890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E890u;
            // 0x25e894: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e890) {
            ctx->pc = 0x25E8A8u;
            goto label_25e8a8;
        }
    }
    ctx->pc = 0x25E898u;
    // 0x25e898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e89c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x25e8a0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25E8A0u;
    SET_GPR_U32(ctx, 31, 0x25E8A8u);
    ctx->pc = 0x25E8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8A0u;
            // 0x25e8a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8A8u; }
        if (ctx->pc != 0x25E8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8A8u; }
        if (ctx->pc != 0x25E8A8u) { return; }
    }
    ctx->pc = 0x25E8A8u;
label_25e8a8:
    // 0x25e8a8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x25e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x25e8ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E8ACu;
    {
        const bool branch_taken_0x25e8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8ACu;
            // 0x25e8b0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8ac) {
            ctx->pc = 0x25E8C8u;
            goto label_25e8c8;
        }
    }
    ctx->pc = 0x25E8B4u;
    // 0x25e8b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8b8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x25e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25e8bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8c0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25E8C0u;
    SET_GPR_U32(ctx, 31, 0x25E8C8u);
    ctx->pc = 0x25E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8C0u;
            // 0x25e8c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8C8u; }
        if (ctx->pc != 0x25E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8C8u; }
        if (ctx->pc != 0x25E8C8u) { return; }
    }
    ctx->pc = 0x25E8C8u;
label_25e8c8:
    // 0x25e8c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x25e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25e8cc:
    // 0x25e8cc: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25E8CCu;
    SET_GPR_U32(ctx, 31, 0x25E8D4u);
    ctx->pc = 0x25E8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8CCu;
            // 0x25e8d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8D4u; }
        if (ctx->pc != 0x25E8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E8D4u; }
        if (ctx->pc != 0x25E8D4u) { return; }
    }
    ctx->pc = 0x25E8D4u;
label_25e8d4:
    // 0x25e8d4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E8D4u;
    {
        const bool branch_taken_0x25e8d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E8D4u;
            // 0x25e8d8: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8d4) {
            ctx->pc = 0x25E8E0u;
            goto label_25e8e0;
        }
    }
    ctx->pc = 0x25E8DCu;
    // 0x25e8dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25e8e0:
    // 0x25e8e0: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x25e8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25e8e4: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x25e8e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x25e8e8: 0xdfb70160  ld          $s7, 0x160($sp)
    ctx->pc = 0x25e8e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x25e8ec: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x25e8ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25e8f0: 0xdfb50140  ld          $s5, 0x140($sp)
    ctx->pc = 0x25e8f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25e8f4: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x25e8f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25e8f8: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x25e8f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25e8fc: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x25e8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25e900: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x25e900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25e904: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x25e904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25e908: 0x3e00008  jr          $ra
    ctx->pc = 0x25E908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E908u;
            // 0x25e90c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E910u;
    ctx->pc = 0x25e910u;
}

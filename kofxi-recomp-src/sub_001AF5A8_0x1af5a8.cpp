#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF5A8
// Address: 0x1af5a8 - 0x1af858
void sub_001AF5A8_0x1af5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF5A8_0x1af5a8");
#endif

    switch (ctx->pc) {
        case 0x1af618u: goto label_1af618;
        case 0x1af63cu: goto label_1af63c;
        case 0x1af688u: goto label_1af688;
        case 0x1af6a0u: goto label_1af6a0;
        case 0x1af6e4u: goto label_1af6e4;
        case 0x1af708u: goto label_1af708;
        case 0x1af730u: goto label_1af730;
        case 0x1af764u: goto label_1af764;
        case 0x1af77cu: goto label_1af77c;
        case 0x1af7a0u: goto label_1af7a0;
        case 0x1af7f4u: goto label_1af7f4;
        case 0x1af808u: goto label_1af808;
        default: break;
    }

    ctx->pc = 0x1af5a8u;

    // 0x1af5a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1af5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1af5ac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af5b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1af5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1af5b4: 0x245401d0  addiu       $s4, $v0, 0x1D0
    ctx->pc = 0x1af5b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x1af5b8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1af5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1af5bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1af5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af5c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1af5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1af5c4: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x1af5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1af5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1af5cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1af5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5d0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1af5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1af5d4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1af5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1af5d8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1af5d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5dc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1af5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1af5e0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1af5e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5e4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1af5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1af5e8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1af5e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1af5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1af5f0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1af5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1af5f4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1af5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1af5f8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1af5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1af5fc: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1af5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1af600: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x1af600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x1af604: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF604u;
    {
        const bool branch_taken_0x1af604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AF608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF604u;
            // 0x1af608: 0x8fb30078  lw          $s3, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af604) {
            ctx->pc = 0x1AF620u;
            goto label_1af620;
        }
    }
    ctx->pc = 0x1AF60Cu;
    // 0x1af60c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1af60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1af610: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AF610u;
    SET_GPR_U32(ctx, 31, 0x1AF618u);
    ctx->pc = 0x1AF614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF610u;
            // 0x1af614: 0x24847440  addiu       $a0, $a0, 0x7440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF618u; }
        if (ctx->pc != 0x1AF618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF618u; }
        if (ctx->pc != 0x1AF618u) { return; }
    }
    ctx->pc = 0x1AF618u;
label_1af618:
    // 0x1af618: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1AF618u;
    {
        const bool branch_taken_0x1af618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF618u;
            // 0x1af61c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af618) {
            ctx->pc = 0x1AF824u;
            goto label_1af824;
        }
    }
    ctx->pc = 0x1AF620u;
label_1af620:
    // 0x1af620: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1af620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1af624: 0x251601c8  addiu       $s6, $t0, 0x1C8
    ctx->pc = 0x1af624u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 456));
    // 0x1af628: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1af628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1af62c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF62Cu;
    {
        const bool branch_taken_0x1af62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF62Cu;
            // 0x1af630: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af62c) {
            ctx->pc = 0x1AF644u;
            goto label_1af644;
        }
    }
    ctx->pc = 0x1AF634u;
    // 0x1af634: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1AF634u;
    SET_GPR_U32(ctx, 31, 0x1AF63Cu);
    ctx->pc = 0x1B04D0u;
    if (runtime->hasFunction(0x1B04D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF63Cu; }
        if (ctx->pc != 0x1AF63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04D0_0x1b04d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF63Cu; }
        if (ctx->pc != 0x1AF63Cu) { return; }
    }
    ctx->pc = 0x1AF63Cu;
label_1af63c:
    // 0x1af63c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1af63cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1af640: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af644:
    // 0x1af644: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1af644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af648: 0x245101cc  addiu       $s1, $v0, 0x1CC
    ctx->pc = 0x1af648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 460));
    // 0x1af64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af650: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1af650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1af654: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1af654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1af658: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1af658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af65c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF65Cu;
    {
        const bool branch_taken_0x1af65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF65Cu;
            // 0x1af660: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af65c) {
            ctx->pc = 0x1AF670u;
            goto label_1af670;
        }
    }
    ctx->pc = 0x1AF664u;
    // 0x1af664: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF664u;
    {
        const bool branch_taken_0x1af664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF664u;
            // 0x1af668: 0x24847480  addiu       $a0, $a0, 0x7480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af664) {
            ctx->pc = 0x1AF680u;
            goto label_1af680;
        }
    }
    ctx->pc = 0x1AF66Cu;
    // 0x1af66c: 0x0  nop
    ctx->pc = 0x1af66cu;
    // NOP
label_1af670:
    // 0x1af670: 0x1e600009  bgtz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF670u;
    {
        const bool branch_taken_0x1af670 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1AF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF670u;
            // 0x1af674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af670) {
            ctx->pc = 0x1AF698u;
            goto label_1af698;
        }
    }
    ctx->pc = 0x1AF678u;
    // 0x1af678: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1af678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1af67c: 0x248474b0  addiu       $a0, $a0, 0x74B0
    ctx->pc = 0x1af67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29872));
label_1af680:
    // 0x1af680: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AF680u;
    SET_GPR_U32(ctx, 31, 0x1AF688u);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF688u; }
        if (ctx->pc != 0x1AF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF688u; }
        if (ctx->pc != 0x1AF688u) { return; }
    }
    ctx->pc = 0x1AF688u;
label_1af688:
    // 0x1af688: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1af688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af68c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1af68cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1af690: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1AF690u;
    {
        const bool branch_taken_0x1af690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF690u;
            // 0x1af694: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af690) {
            ctx->pc = 0x1AF824u;
            goto label_1af824;
        }
    }
    ctx->pc = 0x1AF698u;
label_1af698:
    // 0x1af698: 0xc06bb5a  jal         func_1AED68
    ctx->pc = 0x1AF698u;
    SET_GPR_U32(ctx, 31, 0x1AF6A0u);
    ctx->pc = 0x1AF69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF698u;
            // 0x1af69c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AED68u;
    if (runtime->hasFunction(0x1AED68u)) {
        auto targetFn = runtime->lookupFunction(0x1AED68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6A0u; }
        if (ctx->pc != 0x1AF6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AED68_0x1aed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6A0u; }
        if (ctx->pc != 0x1AF6A0u) { return; }
    }
    ctx->pc = 0x1AF6A0u;
label_1af6a0:
    // 0x1af6a0: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1AF6A0u;
    {
        const bool branch_taken_0x1af6a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AF6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6A0u;
            // 0x1af6a4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6a0) {
            ctx->pc = 0x1AF73Cu;
            goto label_1af73c;
        }
    }
    ctx->pc = 0x1AF6A8u;
    // 0x1af6a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1af6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1af6ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF6ACu;
    {
        const bool branch_taken_0x1af6ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6ACu;
            // 0x1af6b0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6ac) {
            ctx->pc = 0x1AF6C0u;
            goto label_1af6c0;
        }
    }
    ctx->pc = 0x1AF6B4u;
    // 0x1af6b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AF6B4u;
    {
        const bool branch_taken_0x1af6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6B4u;
            // 0x1af6b8: 0x248474d8  addiu       $a0, $a0, 0x74D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6b4) {
            ctx->pc = 0x1AF774u;
            goto label_1af774;
        }
    }
    ctx->pc = 0x1AF6BCu;
    // 0x1af6bc: 0x0  nop
    ctx->pc = 0x1af6bcu;
    // NOP
label_1af6c0:
    // 0x1af6c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1af6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af6c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af6c8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1af6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1af6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6d0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1af6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1af6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6d8: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x1af6dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AF6DCu;
    SET_GPR_U32(ctx, 31, 0x1AF6E4u);
    ctx->pc = 0x1AF6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6DCu;
            // 0x1af6e0: 0xac4001c4  sw          $zero, 0x1C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6E4u; }
        if (ctx->pc != 0x1AF6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6E4u; }
        if (ctx->pc != 0x1AF6E4u) { return; }
    }
    ctx->pc = 0x1AF6E4u;
label_1af6e4:
    // 0x1af6e4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1af6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1af6e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1af6ec: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1af6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1af6f0: 0xac30fc98  sw          $s0, -0x368($at)
    ctx->pc = 0x1af6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966424), GPR_U32(ctx, 16));
    // 0x1af6f4: 0x16a00016  bnez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AF6F4u;
    {
        const bool branch_taken_0x1af6f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6F4u;
            // 0x1af6f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6f4) {
            ctx->pc = 0x1AF750u;
            goto label_1af750;
        }
    }
    ctx->pc = 0x1AF6FCu;
    // 0x1af6fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1af6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af700: 0xc06c0e4  jal         func_1B0390
    ctx->pc = 0x1AF700u;
    SET_GPR_U32(ctx, 31, 0x1AF708u);
    ctx->pc = 0x1AF704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF700u;
            // 0x1af704: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0390u;
    if (runtime->hasFunction(0x1B0390u)) {
        auto targetFn = runtime->lookupFunction(0x1B0390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF708u; }
        if (ctx->pc != 0x1AF708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0390_0x1b0390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF708u; }
        if (ctx->pc != 0x1AF708u) { return; }
    }
    ctx->pc = 0x1AF708u;
label_1af708:
    // 0x1af708: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AF708u;
    {
        const bool branch_taken_0x1af708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF708u;
            // 0x1af70c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af708) {
            ctx->pc = 0x1AF76Cu;
            goto label_1af76c;
        }
    }
    ctx->pc = 0x1AF710u;
    // 0x1af710: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1af710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af714: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1af714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af718: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1af718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1af71c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1af71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af720: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1af720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1af724: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x1af724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1af728: 0xc06c550  jal         func_1B1540
    ctx->pc = 0x1AF728u;
    SET_GPR_U32(ctx, 31, 0x1AF730u);
    ctx->pc = 0x1AF72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF728u;
            // 0x1af72c: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1540u;
    if (runtime->hasFunction(0x1B1540u)) {
        auto targetFn = runtime->lookupFunction(0x1B1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF730u; }
        if (ctx->pc != 0x1AF730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1540_0x1b1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF730u; }
        if (ctx->pc != 0x1AF730u) { return; }
    }
    ctx->pc = 0x1AF730u;
label_1af730:
    // 0x1af730: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF730u;
    {
        const bool branch_taken_0x1af730 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1af730) {
            ctx->pc = 0x1AF734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF730u;
            // 0x1af734: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF748u;
            goto label_1af748;
        }
    }
    ctx->pc = 0x1AF738u;
    // 0x1af738: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1af738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1af73c:
    // 0x1af73c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1AF73Cu;
    {
        const bool branch_taken_0x1af73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF73Cu;
            // 0x1af740: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af73c) {
            ctx->pc = 0x1AF824u;
            goto label_1af824;
        }
    }
    ctx->pc = 0x1AF744u;
    // 0x1af744: 0x0  nop
    ctx->pc = 0x1af744u;
    // NOP
label_1af748:
    // 0x1af748: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1AF748u;
    {
        const bool branch_taken_0x1af748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF748u;
            // 0x1af74c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af748) {
            ctx->pc = 0x1AF7A8u;
            goto label_1af7a8;
        }
    }
    ctx->pc = 0x1AF750u;
label_1af750:
    // 0x1af750: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1af750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af754: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af758: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x1af758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1af75c: 0xc06c06c  jal         func_1B01B0
    ctx->pc = 0x1AF75Cu;
    SET_GPR_U32(ctx, 31, 0x1AF764u);
    ctx->pc = 0x1AF760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF75Cu;
            // 0x1af760: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B01B0u;
    if (runtime->hasFunction(0x1B01B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B01B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF764u; }
        if (ctx->pc != 0x1AF764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01B0_0x1b01b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF764u; }
        if (ctx->pc != 0x1AF764u) { return; }
    }
    ctx->pc = 0x1AF764u;
label_1af764:
    // 0x1af764: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF764u;
    {
        const bool branch_taken_0x1af764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF764u;
            // 0x1af768: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af764) {
            ctx->pc = 0x1AF790u;
            goto label_1af790;
        }
    }
    ctx->pc = 0x1AF76Cu;
label_1af76c:
    // 0x1af76c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1af76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1af770: 0x24847508  addiu       $a0, $a0, 0x7508
    ctx->pc = 0x1af770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29960));
label_1af774:
    // 0x1af774: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AF774u;
    SET_GPR_U32(ctx, 31, 0x1AF77Cu);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF77Cu; }
        if (ctx->pc != 0x1AF77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF77Cu; }
        if (ctx->pc != 0x1AF77Cu) { return; }
    }
    ctx->pc = 0x1AF77Cu;
label_1af77c:
    // 0x1af77c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1af77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af780: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1af780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1af784: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1AF784u;
    {
        const bool branch_taken_0x1af784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF784u;
            // 0x1af788: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af784) {
            ctx->pc = 0x1AF824u;
            goto label_1af824;
        }
    }
    ctx->pc = 0x1AF78Cu;
    // 0x1af78c: 0x0  nop
    ctx->pc = 0x1af78cu;
    // NOP
label_1af790:
    // 0x1af790: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1af790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af794: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1af794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1af798: 0xc04a966  jal         func_12A598
    ctx->pc = 0x1AF798u;
    SET_GPR_U32(ctx, 31, 0x1AF7A0u);
    ctx->pc = 0x1AF79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF798u;
            // 0x1af79c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7A0u; }
        if (ctx->pc != 0x1AF7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7A0u; }
        if (ctx->pc != 0x1AF7A0u) { return; }
    }
    ctx->pc = 0x1AF7A0u;
label_1af7a0:
    // 0x1af7a0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x1af7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af7a4: 0xae080114  sw          $t0, 0x114($s0)
    ctx->pc = 0x1af7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 8));
label_1af7a8:
    // 0x1af7a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1af7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af7ac: 0x266307ff  addiu       $v1, $s3, 0x7FF
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2047));
    // 0x1af7b0: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x1af7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af7b4: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x1af7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1af7b8: 0x2a620000  slti        $v0, $s3, 0x0
    ctx->pc = 0x1af7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1af7bc: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1af7bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1af7c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af7c4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1af7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af7c8: 0x245201c8  addiu       $s2, $v0, 0x1C8
    ctx->pc = 0x1af7c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x1af7cc: 0x133ac3  sra         $a3, $s3, 11
    ctx->pc = 0x1af7ccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), 11));
    // 0x1af7d0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1af7d4: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x1af7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
    // 0x1af7d8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af7dc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1af7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1af7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1af7e4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af7e8: 0xac6701dc  sw          $a3, 0x1DC($v1)
    ctx->pc = 0x1af7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 476), GPR_U32(ctx, 7));
    // 0x1af7ec: 0xc06c2ae  jal         func_1B0AB8
    ctx->pc = 0x1AF7ECu;
    SET_GPR_U32(ctx, 31, 0x1AF7F4u);
    ctx->pc = 0x1AF7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7ECu;
            // 0x1af7f0: 0xac4601d8  sw          $a2, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AB8u;
    if (runtime->hasFunction(0x1B0AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7F4u; }
        if (ctx->pc != 0x1AF7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AB8_0x1b0ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7F4u; }
        if (ctx->pc != 0x1AF7F4u) { return; }
    }
    ctx->pc = 0x1AF7F4u;
label_1af7f4:
    // 0x1af7f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7f8: 0x6230009  bgezl       $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF7F8u;
    {
        const bool branch_taken_0x1af7f8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1af7f8) {
            ctx->pc = 0x1AF7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7F8u;
            // 0x1af7fc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF820u;
            goto label_1af820;
        }
    }
    ctx->pc = 0x1AF800u;
    // 0x1af800: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1AF800u;
    SET_GPR_U32(ctx, 31, 0x1AF808u);
    ctx->pc = 0x1AF804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF800u;
            // 0x1af804: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B04D0u;
    if (runtime->hasFunction(0x1B04D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF808u; }
        if (ctx->pc != 0x1AF808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04D0_0x1b04d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF808u; }
        if (ctx->pc != 0x1AF808u) { return; }
    }
    ctx->pc = 0x1AF808u;
label_1af808:
    // 0x1af808: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af80c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1af810: 0xac6201d0  sw          $v0, 0x1D0($v1)
    ctx->pc = 0x1af810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 2));
    // 0x1af814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF814u;
    {
        const bool branch_taken_0x1af814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF814u;
            // 0x1af818: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af814) {
            ctx->pc = 0x1AF824u;
            goto label_1af824;
        }
    }
    ctx->pc = 0x1AF81Cu;
    // 0x1af81c: 0x0  nop
    ctx->pc = 0x1af81cu;
    // NOP
label_1af820:
    // 0x1af820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af824:
    // 0x1af824: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1af824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af828: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1af828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af82c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1af82cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af830: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1af830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1af834: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1af834u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af838: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1af838u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1af83c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1af83cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af840: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1af840u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1af844: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1af844u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af848: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1af848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1af84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF84Cu;
            // 0x1af850: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF854u;
    // 0x1af854: 0x0  nop
    ctx->pc = 0x1af854u;
    // NOP
    ctx->pc = 0x1af858u;
}

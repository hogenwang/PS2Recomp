#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291308
// Address: 0x291308 - 0x291670
void sub_00291308_0x291308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291308_0x291308");
#endif

    switch (ctx->pc) {
        case 0x291364u: goto label_291364;
        case 0x2913d8u: goto label_2913d8;
        case 0x291414u: goto label_291414;
        case 0x291430u: goto label_291430;
        case 0x29145cu: goto label_29145c;
        case 0x291498u: goto label_291498;
        case 0x2914b8u: goto label_2914b8;
        case 0x2914f4u: goto label_2914f4;
        case 0x291514u: goto label_291514;
        case 0x291550u: goto label_291550;
        case 0x291570u: goto label_291570;
        case 0x2915acu: goto label_2915ac;
        case 0x2915c4u: goto label_2915c4;
        case 0x2915d0u: goto label_2915d0;
        case 0x291614u: goto label_291614;
        case 0x291638u: goto label_291638;
        case 0x29164cu: goto label_29164c;
        default: break;
    }

    ctx->pc = 0x291308u;

    // 0x291308: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x291308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29130c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x291310: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x291310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x291314: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x291314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x291318: 0x24140082  addiu       $s4, $zero, 0x82
    ctx->pc = 0x291318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x29131c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x29131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x291320: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x291320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291324: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x291324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x291328: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x291328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29132c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x29132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x291330: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x291330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x291334: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x291334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x291338: 0xffa60038  sd          $a2, 0x38($sp)
    ctx->pc = 0x291338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 6));
    // 0x29133c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x29133cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x291340: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x291340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x291344: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x291344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x291348: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x291348u;
    {
        const bool branch_taken_0x291348 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291348u;
            // 0x29134c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291348) {
            ctx->pc = 0x29135Cu;
            goto label_29135c;
        }
    }
    ctx->pc = 0x291350u;
    // 0x291350: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x291350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x291354: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x291354u;
    {
        const bool branch_taken_0x291354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291354u;
            // 0x291358: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291354) {
            ctx->pc = 0x29137Cu;
            goto label_29137c;
        }
    }
    ctx->pc = 0x29135Cu;
label_29135c:
    // 0x29135c: 0xc0a5160  jal         func_294580
    ctx->pc = 0x29135Cu;
    SET_GPR_U32(ctx, 31, 0x291364u);
    ctx->pc = 0x294580u;
    if (runtime->hasFunction(0x294580u)) {
        auto targetFn = runtime->lookupFunction(0x294580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291364u; }
        if (ctx->pc != 0x291364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294580_0x294580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291364u; }
        if (ctx->pc != 0x291364u) { return; }
    }
    ctx->pc = 0x291364u;
label_291364:
    // 0x291364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291368: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x291368u;
    {
        const bool branch_taken_0x291368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x291368) {
            ctx->pc = 0x29136Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x291368u;
            // 0x29136c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29137Cu;
            goto label_29137c;
        }
    }
    ctx->pc = 0x291370u;
    // 0x291370: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x291370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x291374: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x291374u;
    {
        const bool branch_taken_0x291374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291374u;
            // 0x291378: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291374) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x29137Cu;
label_29137c:
    // 0x29137c: 0xdfa40038  ld          $a0, 0x38($sp)
    ctx->pc = 0x29137cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x291380: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x291380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x291384: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291384u;
    {
        const bool branch_taken_0x291384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291384u;
            // 0x291388: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291384) {
            ctx->pc = 0x29139Cu;
            goto label_29139c;
        }
    }
    ctx->pc = 0x29138Cu;
    // 0x29138c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x29138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x291390: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x291390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x291394u;
    {
        const bool branch_taken_0x291394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291394u;
            // 0x291398: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291394) {
            ctx->pc = 0x2913A0u;
            goto label_2913a0;
        }
    }
    ctx->pc = 0x29139Cu;
label_29139c:
    // 0x29139c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29139cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2913a0:
    // 0x2913a0: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2913A0u;
    {
        const bool branch_taken_0x2913a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913A0u;
            // 0x2913a4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913a0) {
            ctx->pc = 0x291424u;
            goto label_291424;
        }
    }
    ctx->pc = 0x2913A8u;
    // 0x2913a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2913a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2913ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2913acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2913b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2913b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2913b4: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x2913b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x2913b8: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2913B8u;
    {
        const bool branch_taken_0x2913b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2913b8) {
            ctx->pc = 0x2913BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2913B8u;
            // 0x2913bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x291428u;
            goto label_291428;
        }
    }
    ctx->pc = 0x2913C0u;
    // 0x2913c0: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2913c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x2913c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2913c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2913c8: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x2913c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x2913cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2913ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2913d0: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2913D0u;
    SET_GPR_U32(ctx, 31, 0x2913D8u);
    ctx->pc = 0x2913D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2913D0u;
            // 0x2913d4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2913D8u; }
        if (ctx->pc != 0x2913D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2913D8u; }
        if (ctx->pc != 0x2913D8u) { return; }
    }
    ctx->pc = 0x2913D8u;
label_2913d8:
    // 0x2913d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2913D8u;
    {
        const bool branch_taken_0x2913d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2913DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913D8u;
            // 0x2913dc: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913d8) {
            ctx->pc = 0x2913ECu;
            goto label_2913ec;
        }
    }
    ctx->pc = 0x2913E0u;
    // 0x2913e0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2913e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2913e4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2913E4u;
    {
        const bool branch_taken_0x2913e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913E4u;
            // 0x2913e8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913e4) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x2913ECu;
label_2913ec:
    // 0x2913ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2913ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2913f0: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2913f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2913f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2913f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2913f8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2913f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2913fc: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2913fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x291400: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x291400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x291404: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x291404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x291408: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x291408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x29140c: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x29140Cu;
    SET_GPR_U32(ctx, 31, 0x291414u);
    ctx->pc = 0x291410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29140Cu;
            // 0x291410: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291414u; }
        if (ctx->pc != 0x291414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291414u; }
        if (ctx->pc != 0x291414u) { return; }
    }
    ctx->pc = 0x291414u;
label_291414:
    // 0x291414: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x291414u;
    {
        const bool branch_taken_0x291414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291414u;
            // 0x291418: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291414) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x29141Cu;
    // 0x29141c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x29141Cu;
    {
        const bool branch_taken_0x29141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29141Cu;
            // 0x291420: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29141c) {
            ctx->pc = 0x2915BCu;
            goto label_2915bc;
        }
    }
    ctx->pc = 0x291424u;
label_291424:
    // 0x291424: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_291428:
    // 0x291428: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x291428u;
    SET_GPR_U32(ctx, 31, 0x291430u);
    ctx->pc = 0x29142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291428u;
            // 0x29142c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (runtime->hasFunction(0x2819F0u)) {
        auto targetFn = runtime->lookupFunction(0x2819F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291430u; }
        if (ctx->pc != 0x291430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002819F0_0x2819f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291430u; }
        if (ctx->pc != 0x291430u) { return; }
    }
    ctx->pc = 0x291430u;
label_291430:
    // 0x291430: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291430u;
    {
        const bool branch_taken_0x291430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291430u;
            // 0x291434: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291430) {
            ctx->pc = 0x291444u;
            goto label_291444;
        }
    }
    ctx->pc = 0x291438u;
    // 0x291438: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x291438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x29143c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x29143Cu;
    {
        const bool branch_taken_0x29143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29143Cu;
            // 0x291440: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29143c) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x291444u;
label_291444:
    // 0x291444: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x291444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291448: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x291448u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29144c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291450: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x291450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x291454: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x291454u;
    SET_GPR_U32(ctx, 31, 0x29145Cu);
    ctx->pc = 0x291458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291454u;
            // 0x291458: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29145Cu; }
        if (ctx->pc != 0x29145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29145Cu; }
        if (ctx->pc != 0x29145Cu) { return; }
    }
    ctx->pc = 0x29145Cu;
label_29145c:
    // 0x29145c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29145Cu;
    {
        const bool branch_taken_0x29145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29145Cu;
            // 0x291460: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29145c) {
            ctx->pc = 0x291470u;
            goto label_291470;
        }
    }
    ctx->pc = 0x291464u;
    // 0x291464: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x291464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x291468: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x291468u;
    {
        const bool branch_taken_0x291468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291468u;
            // 0x29146c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291468) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x291470u;
label_291470:
    // 0x291470: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291474: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x291474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291478: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x291478u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29147c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x29147cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291480: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x291480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x291484: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x291484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x291488: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x291488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29148c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x29148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x291490: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x291490u;
    SET_GPR_U32(ctx, 31, 0x291498u);
    ctx->pc = 0x291494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291490u;
            // 0x291494: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291498u; }
        if (ctx->pc != 0x291498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291498u; }
        if (ctx->pc != 0x291498u) { return; }
    }
    ctx->pc = 0x291498u;
label_291498:
    // 0x291498: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x291498u;
    {
        const bool branch_taken_0x291498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291498u;
            // 0x29149c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291498) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2914A0u;
    // 0x2914a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2914a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2914a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2914a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914a8: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2914a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2914ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2914acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914b0: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2914B0u;
    SET_GPR_U32(ctx, 31, 0x2914B8u);
    ctx->pc = 0x2914B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2914B0u;
            // 0x2914b4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914B8u; }
        if (ctx->pc != 0x2914B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914B8u; }
        if (ctx->pc != 0x2914B8u) { return; }
    }
    ctx->pc = 0x2914B8u;
label_2914b8:
    // 0x2914b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2914B8u;
    {
        const bool branch_taken_0x2914b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2914BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914B8u;
            // 0x2914bc: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914b8) {
            ctx->pc = 0x2914CCu;
            goto label_2914cc;
        }
    }
    ctx->pc = 0x2914C0u;
    // 0x2914c0: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2914c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2914c4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2914C4u;
    {
        const bool branch_taken_0x2914c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914C4u;
            // 0x2914c8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914c4) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x2914CCu;
label_2914cc:
    // 0x2914cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2914ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2914d0: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2914d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2914d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2914d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2914d8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2914d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2914dc: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2914dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2914e0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2914e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2914e4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2914e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2914e8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2914ec: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2914ECu;
    SET_GPR_U32(ctx, 31, 0x2914F4u);
    ctx->pc = 0x2914F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2914ECu;
            // 0x2914f0: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914F4u; }
        if (ctx->pc != 0x2914F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914F4u; }
        if (ctx->pc != 0x2914F4u) { return; }
    }
    ctx->pc = 0x2914F4u;
label_2914f4:
    // 0x2914f4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2914F4u;
    {
        const bool branch_taken_0x2914f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914F4u;
            // 0x2914f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914f4) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2914FCu;
    // 0x2914fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2914fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291504: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x291504u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x291508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29150c: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x29150Cu;
    SET_GPR_U32(ctx, 31, 0x291514u);
    ctx->pc = 0x291510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29150Cu;
            // 0x291510: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291514u; }
        if (ctx->pc != 0x291514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291514u; }
        if (ctx->pc != 0x291514u) { return; }
    }
    ctx->pc = 0x291514u;
label_291514:
    // 0x291514: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291514u;
    {
        const bool branch_taken_0x291514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291514u;
            // 0x291518: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291514) {
            ctx->pc = 0x291528u;
            goto label_291528;
        }
    }
    ctx->pc = 0x29151Cu;
    // 0x29151c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x29151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x291520: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x291520u;
    {
        const bool branch_taken_0x291520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291520u;
            // 0x291524: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291520) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x291528u;
label_291528:
    // 0x291528: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29152c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x29152cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291530: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x291530u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291534: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x291534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291538: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x291538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x29153c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x29153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x291540: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x291540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x291544: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x291544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x291548: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x291548u;
    SET_GPR_U32(ctx, 31, 0x291550u);
    ctx->pc = 0x29154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291548u;
            // 0x29154c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291550u; }
        if (ctx->pc != 0x291550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291550u; }
        if (ctx->pc != 0x291550u) { return; }
    }
    ctx->pc = 0x291550u;
label_291550:
    // 0x291550: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x291550u;
    {
        const bool branch_taken_0x291550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291550u;
            // 0x291554: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291550) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x291558u;
    // 0x291558: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x291558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29155c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291560: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x291560u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291564: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x291564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291568: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x291568u;
    SET_GPR_U32(ctx, 31, 0x291570u);
    ctx->pc = 0x29156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291568u;
            // 0x29156c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291570u; }
        if (ctx->pc != 0x291570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291570u; }
        if (ctx->pc != 0x291570u) { return; }
    }
    ctx->pc = 0x291570u;
label_291570:
    // 0x291570: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291570u;
    {
        const bool branch_taken_0x291570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291570u;
            // 0x291574: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291570) {
            ctx->pc = 0x291584u;
            goto label_291584;
        }
    }
    ctx->pc = 0x291578u;
    // 0x291578: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x291578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x29157c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x29157Cu;
    {
        const bool branch_taken_0x29157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29157Cu;
            // 0x291580: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29157c) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x291584u;
label_291584:
    // 0x291584: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291588: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x291588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29158c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x29158cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291590: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x291590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291594: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x291594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x291598: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x291598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x29159c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29159cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2915a0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2915a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2915a4: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2915A4u;
    SET_GPR_U32(ctx, 31, 0x2915ACu);
    ctx->pc = 0x2915A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2915A4u;
            // 0x2915a8: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915ACu; }
        if (ctx->pc != 0x2915ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915ACu; }
        if (ctx->pc != 0x2915ACu) { return; }
    }
    ctx->pc = 0x2915ACu;
label_2915ac:
    // 0x2915ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2915ACu;
    {
        const bool branch_taken_0x2915ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915ACu;
            // 0x2915b0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915ac) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2915B4u;
    // 0x2915b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2915b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2915b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2915b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2915bc:
    // 0x2915bc: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2915BCu;
    SET_GPR_U32(ctx, 31, 0x2915C4u);
    ctx->pc = 0x2915C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2915BCu;
            // 0x2915c0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915C4u; }
        if (ctx->pc != 0x2915C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915C4u; }
        if (ctx->pc != 0x2915C4u) { return; }
    }
    ctx->pc = 0x2915C4u;
label_2915c4:
    // 0x2915c4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2915c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2915c8: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2915C8u;
    SET_GPR_U32(ctx, 31, 0x2915D0u);
    ctx->pc = 0x2915CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2915C8u;
            // 0x2915cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915D0u; }
        if (ctx->pc != 0x2915D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915D0u; }
        if (ctx->pc != 0x2915D0u) { return; }
    }
    ctx->pc = 0x2915D0u;
label_2915d0:
    // 0x2915d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2915D0u;
    {
        const bool branch_taken_0x2915d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2915D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915D0u;
            // 0x2915d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915d0) {
            ctx->pc = 0x2915E4u;
            goto label_2915e4;
        }
    }
    ctx->pc = 0x2915D8u;
    // 0x2915d8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2915d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2915dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2915DCu;
    {
        const bool branch_taken_0x2915dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915DCu;
            // 0x2915e0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915dc) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x2915E4u;
label_2915e4:
    // 0x2915e4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2915E4u;
    {
        const bool branch_taken_0x2915e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915E4u;
            // 0x2915e8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915e4) {
            ctx->pc = 0x2915F0u;
            goto label_2915f0;
        }
    }
    ctx->pc = 0x2915ECu;
    // 0x2915ec: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2915ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_2915f0:
    // 0x2915f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2915F0u;
    {
        const bool branch_taken_0x2915f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915F0u;
            // 0x2915f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915f0) {
            ctx->pc = 0x291650u;
            goto label_291650;
        }
    }
    ctx->pc = 0x2915F8u;
label_2915f8:
    // 0x2915f8: 0x24140803  addiu       $s4, $zero, 0x803
    ctx->pc = 0x2915f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2915fc:
    // 0x2915fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2915fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291600: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x291604: 0x2405008b  addiu       $a1, $zero, 0x8B
    ctx->pc = 0x291604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x291608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29160c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29160Cu;
    SET_GPR_U32(ctx, 31, 0x291614u);
    ctx->pc = 0x291610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29160Cu;
            // 0x291610: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291614u; }
        if (ctx->pc != 0x291614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291614u; }
        if (ctx->pc != 0x291614u) { return; }
    }
    ctx->pc = 0x291614u;
label_291614:
    // 0x291614: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x291614u;
    {
        const bool branch_taken_0x291614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291614u;
            // 0x291618: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291614) {
            ctx->pc = 0x29163Cu;
            goto label_29163c;
        }
    }
    ctx->pc = 0x29161Cu;
    // 0x29161c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29161Cu;
    {
        const bool branch_taken_0x29161c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29161c) {
            ctx->pc = 0x291630u;
            goto label_291630;
        }
    }
    ctx->pc = 0x291624u;
    // 0x291624: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x291624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x291628: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291628u;
    {
        const bool branch_taken_0x291628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x291628) {
            ctx->pc = 0x29163Cu;
            goto label_29163c;
        }
    }
    ctx->pc = 0x291630u;
label_291630:
    // 0x291630: 0xc0a5200  jal         func_294800
    ctx->pc = 0x291630u;
    SET_GPR_U32(ctx, 31, 0x291638u);
    ctx->pc = 0x291634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291630u;
            // 0x291634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294800u;
    if (runtime->hasFunction(0x294800u)) {
        auto targetFn = runtime->lookupFunction(0x294800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291638u; }
        if (ctx->pc != 0x291638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294800_0x294800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291638u; }
        if (ctx->pc != 0x291638u) { return; }
    }
    ctx->pc = 0x291638u;
label_291638:
    // 0x291638: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x291638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29163c:
    // 0x29163c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29163Cu;
    {
        const bool branch_taken_0x29163c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29163Cu;
            // 0x291640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29163c) {
            ctx->pc = 0x291650u;
            goto label_291650;
        }
    }
    ctx->pc = 0x291644u;
    // 0x291644: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x291644u;
    SET_GPR_U32(ctx, 31, 0x29164Cu);
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29164Cu; }
        if (ctx->pc != 0x29164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29164Cu; }
        if (ctx->pc != 0x29164Cu) { return; }
    }
    ctx->pc = 0x29164Cu;
label_29164c:
    // 0x29164c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29164cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291650:
    // 0x291650: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x291650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x291654: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x291654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x291658: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x291658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29165c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x29165cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291660: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x291660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291664: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x291664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291668: 0x3e00008  jr          $ra
    ctx->pc = 0x291668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291668u;
            // 0x29166c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291670u;
    ctx->pc = 0x291670u;
}

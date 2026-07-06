#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177350
// Address: 0x177350 - 0x1775a0
void sub_00177350_0x177350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177350_0x177350");
#endif

    switch (ctx->pc) {
        case 0x177420u: goto label_177420;
        case 0x177448u: goto label_177448;
        case 0x177450u: goto label_177450;
        case 0x17747cu: goto label_17747c;
        case 0x177494u: goto label_177494;
        case 0x1774bcu: goto label_1774bc;
        case 0x1774e0u: goto label_1774e0;
        case 0x17753cu: goto label_17753c;
        default: break;
    }

    ctx->pc = 0x177350u;

label_177350:
    // 0x177350: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177354: 0x844537f0  lh          $a1, 0x37F0($v0)
    ctx->pc = 0x177354u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14320)));
    // 0x177358: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17735c: 0x8442a7d0  lh          $v0, -0x5830($v0)
    ctx->pc = 0x17735cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944720)));
    // 0x177360: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x177360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x177364: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x177364u;
    {
        const bool branch_taken_0x177364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x177364) {
            ctx->pc = 0x177374u;
            goto label_177374;
        }
    }
    ctx->pc = 0x17736Cu;
    // 0x17736c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17736Cu;
    {
        const bool branch_taken_0x17736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17736Cu;
            // 0x177370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17736c) {
            ctx->pc = 0x17740Cu;
            goto label_17740c;
        }
    }
    ctx->pc = 0x177374u;
label_177374:
    // 0x177374: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177378: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x177378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17737c: 0x8c43a7b0  lw          $v1, -0x5850($v0)
    ctx->pc = 0x17737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944688)));
    // 0x177380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x177384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177388: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x177388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17738c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17738Cu;
    {
        const bool branch_taken_0x17738c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17738c) {
            ctx->pc = 0x17739Cu;
            goto label_17739c;
        }
    }
    ctx->pc = 0x177394u;
    // 0x177394: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x177394u;
    {
        const bool branch_taken_0x177394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177394) {
            ctx->pc = 0x17740Cu;
            goto label_17740c;
        }
    }
    ctx->pc = 0x17739Cu;
label_17739c:
    // 0x17739c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17739cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1773a0: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x1773a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x1773a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1773a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1773a8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1773a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1773ac: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1773acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1773b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1773B0u;
    {
        const bool branch_taken_0x1773b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1773b0) {
            ctx->pc = 0x1773C8u;
            goto label_1773c8;
        }
    }
    ctx->pc = 0x1773B8u;
    // 0x1773b8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1773bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1773bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1773c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1773C0u;
    {
        const bool branch_taken_0x1773c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1773C0u;
            // 0x1773c4: 0xa46437f0  sh          $a0, 0x37F0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14320), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773c0) {
            ctx->pc = 0x17740Cu;
            goto label_17740c;
        }
    }
    ctx->pc = 0x1773C8u;
label_1773c8:
    // 0x1773c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1773c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1773cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1773ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1773d0: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x1773d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x1773d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1773d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1773d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1773d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1773dc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1773DCu;
    {
        const bool branch_taken_0x1773dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1773dc) {
            ctx->pc = 0x1773E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1773DCu;
            // 0x1773e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17740Cu;
            goto label_17740c;
        }
    }
    ctx->pc = 0x1773E4u;
    // 0x1773e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1773e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1773e8: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x1773e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
    // 0x1773ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1773ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1773f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1773f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1773f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1773F4u;
    {
        const bool branch_taken_0x1773f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1773f4) {
            ctx->pc = 0x1773F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1773F4u;
            // 0x1773f8: 0x4143c  dsll32      $v0, $a0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177408u;
            goto label_177408;
        }
    }
    ctx->pc = 0x1773FCu;
    // 0x1773fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177400u;
    {
        const bool branch_taken_0x177400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177400) {
            ctx->pc = 0x17740Cu;
            goto label_17740c;
        }
    }
    ctx->pc = 0x177408u;
label_177408:
    // 0x177408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x177408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_17740c:
    // 0x17740c: 0x3e00008  jr          $ra
    ctx->pc = 0x17740Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177414u;
    // 0x177414: 0x0  nop
    ctx->pc = 0x177414u;
    // NOP
    // 0x177418: 0x0  nop
    ctx->pc = 0x177418u;
    // NOP
    // 0x17741c: 0x0  nop
    ctx->pc = 0x17741cu;
    // NOP
label_177420:
    // 0x177420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177424: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177428: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17742c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177438: 0x8c63af68  lw          $v1, -0x5098($v1)
    ctx->pc = 0x177438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946664)));
    // 0x17743c: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x17743Cu;
    {
        const bool branch_taken_0x17743c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17743c) {
            ctx->pc = 0x177440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17743Cu;
            // 0x177440: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1774CCu;
            goto label_1774cc;
        }
    }
    ctx->pc = 0x177444u;
    // 0x177444: 0x84700004  lh          $s0, 0x4($v1)
    ctx->pc = 0x177444u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_177448:
    // 0x177448: 0xc05dcd4  jal         func_177350
    ctx->pc = 0x177448u;
    SET_GPR_U32(ctx, 31, 0x177450u);
    ctx->pc = 0x17744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177448u;
            // 0x17744c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177350u;
    goto label_177350;
    ctx->pc = 0x177450u;
label_177450:
    // 0x177450: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x177450u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x177454: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x177454u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x177458: 0x620001b  bltz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x177458u;
    {
        const bool branch_taken_0x177458 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x177458) {
            ctx->pc = 0x1774C8u;
            goto label_1774c8;
        }
    }
    ctx->pc = 0x177460u;
    // 0x177460: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177464: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x177464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x177468: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x17746c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x17746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x177470: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177474: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x177474u;
    SET_GPR_U32(ctx, 31, 0x17747Cu);
    ctx->pc = 0x177478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177474u;
            // 0x177478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17747Cu; }
        if (ctx->pc != 0x17747Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17747Cu; }
        if (ctx->pc != 0x17747Cu) { return; }
    }
    ctx->pc = 0x17747Cu;
label_17747c:
    // 0x17747c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17747cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177480: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x177480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x177484: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x177484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x177488: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x177488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x17748c: 0xc06947c  jal         func_1A51F0
    ctx->pc = 0x17748Cu;
    SET_GPR_U32(ctx, 31, 0x177494u);
    ctx->pc = 0x177490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17748Cu;
            // 0x177490: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A51F0u;
    if (runtime->hasFunction(0x1A51F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A51F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177494u; }
        if (ctx->pc != 0x177494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A51F0_0x1a51f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177494u; }
        if (ctx->pc != 0x177494u) { return; }
    }
    ctx->pc = 0x177494u;
label_177494:
    // 0x177494: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x177494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177498: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x177498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17749c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1774a0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1774a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1774a4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1774A4u;
    {
        const bool branch_taken_0x1774a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1774a4) {
            ctx->pc = 0x1774A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1774A4u;
            // 0x1774a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1774B4u;
            goto label_1774b4;
        }
    }
    ctx->pc = 0x1774ACu;
    // 0x1774ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1774ACu;
    {
        const bool branch_taken_0x1774ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774ACu;
            // 0x1774b0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774ac) {
            ctx->pc = 0x1774C8u;
            goto label_1774c8;
        }
    }
    ctx->pc = 0x1774B4u;
label_1774b4:
    // 0x1774b4: 0xc05dd68  jal         func_1775A0
    ctx->pc = 0x1774B4u;
    SET_GPR_U32(ctx, 31, 0x1774BCu);
    ctx->pc = 0x1775A0u;
    if (runtime->hasFunction(0x1775A0u)) {
        auto targetFn = runtime->lookupFunction(0x1775A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774BCu; }
        if (ctx->pc != 0x1774BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001775A0_0x1775a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774BCu; }
        if (ctx->pc != 0x1774BCu) { return; }
    }
    ctx->pc = 0x1774BCu;
label_1774bc:
    // 0x1774bc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1774BCu;
    {
        const bool branch_taken_0x1774bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1774bc) {
            ctx->pc = 0x177448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177448;
        }
    }
    ctx->pc = 0x1774C4u;
    // 0x1774c4: 0x0  nop
    ctx->pc = 0x1774c4u;
    // NOP
label_1774c8:
    // 0x1774c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1774c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1774cc:
    // 0x1774cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1774ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1774d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1774d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1774d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1774d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1774d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1774D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1774DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774D8u;
            // 0x1774dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1774E0u;
label_1774e0:
    // 0x1774e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1774e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1774e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1774e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1774e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1774e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1774ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1774ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1774f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1774f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1774f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1774f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1774f8: 0x847037d8  lh          $s0, 0x37D8($v1)
    ctx->pc = 0x1774f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14296)));
    // 0x1774fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1774fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177500: 0x2463acf0  addiu       $v1, $v1, -0x5310
    ctx->pc = 0x177500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946032));
    // 0x177504: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x177504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177508: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x177508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17750c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x17750Cu;
    {
        const bool branch_taken_0x17750c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17750c) {
            ctx->pc = 0x177574u;
            goto label_177574;
        }
    }
    ctx->pc = 0x177514u;
    // 0x177514: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177518: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x177518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17751c: 0x2463a380  addiu       $v1, $v1, -0x5C80
    ctx->pc = 0x17751cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943616));
    // 0x177520: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x177520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177524: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x177524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177528: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177528u;
    {
        const bool branch_taken_0x177528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x177528) {
            ctx->pc = 0x177540u;
            goto label_177540;
        }
    }
    ctx->pc = 0x177530u;
    // 0x177530: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177534: 0xc0694e4  jal         func_1A5390
    ctx->pc = 0x177534u;
    SET_GPR_U32(ctx, 31, 0x17753Cu);
    ctx->pc = 0x177538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177534u;
            // 0x177538: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5390u;
    if (runtime->hasFunction(0x1A5390u)) {
        auto targetFn = runtime->lookupFunction(0x1A5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17753Cu; }
        if (ctx->pc != 0x17753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5390_0x1a5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17753Cu; }
        if (ctx->pc != 0x17753Cu) { return; }
    }
    ctx->pc = 0x17753Cu;
label_17753c:
    // 0x17753c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17753cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_177540:
    // 0x177540: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177544: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177548: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x177548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x17754c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x17754cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x177550: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x177550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177554: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x177554u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x177558: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x177558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x17755c: 0xa46437d8  sh          $a0, 0x37D8($v1)
    ctx->pc = 0x17755cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14296), (uint16_t)GPR_U32(ctx, 4));
    // 0x177560: 0x34a30040  ori         $v1, $a1, 0x40
    ctx->pc = 0x177560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x177564: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x177564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x177568: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x177568u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17756c: 0x306300ef  andi        $v1, $v1, 0xEF
    ctx->pc = 0x17756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)239);
    // 0x177570: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x177570u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_177574:
    // 0x177574: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x177574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x177578: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x177578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x17757c: 0x848437f0  lh          $a0, 0x37F0($a0)
    ctx->pc = 0x17757cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14320)));
    // 0x177580: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x177580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x177584: 0xa46437f0  sh          $a0, 0x37F0($v1)
    ctx->pc = 0x177584u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14320), (uint16_t)GPR_U32(ctx, 4));
    // 0x177588: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17758c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17758cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177598: 0x3e00008  jr          $ra
    ctx->pc = 0x177598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177598u;
            // 0x17759c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1775A0u;
    ctx->pc = 0x1775a0u;
}

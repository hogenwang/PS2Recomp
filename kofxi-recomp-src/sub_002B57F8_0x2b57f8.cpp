#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B57F8
// Address: 0x2b57f8 - 0x2b5ab8
void sub_002B57F8_0x2b57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B57F8_0x2b57f8");
#endif

    switch (ctx->pc) {
        case 0x2b5848u: goto label_2b5848;
        case 0x2b5868u: goto label_2b5868;
        case 0x2b58c4u: goto label_2b58c4;
        case 0x2b58d0u: goto label_2b58d0;
        case 0x2b58dcu: goto label_2b58dc;
        case 0x2b5a08u: goto label_2b5a08;
        case 0x2b5a44u: goto label_2b5a44;
        case 0x2b5a7cu: goto label_2b5a7c;
        case 0x2b5a8cu: goto label_2b5a8c;
        default: break;
    }

    ctx->pc = 0x2b57f8u;

    // 0x2b57f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b57f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b57fc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b57fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b5800: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b5800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b5804: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b5804u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5808: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b5808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b580c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b5810: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b5810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b5814: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b5814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b5818: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b5818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b581c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5820: 0x8ec200b0  lw          $v0, 0xB0($s6)
    ctx->pc = 0x2b5820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x2b5824: 0x8c500090  lw          $s0, 0x90($v0)
    ctx->pc = 0x2b5824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b5828: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5828u;
    {
        const bool branch_taken_0x2b5828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B582Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5828u;
            // 0x2b582c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5828) {
            ctx->pc = 0x2B5850u;
            goto label_2b5850;
        }
    }
    ctx->pc = 0x2B5830u;
    // 0x2b5830: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5834: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2b5834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2b5838: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x2b5838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2b583c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b583cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5840: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B5840u;
    SET_GPR_U32(ctx, 31, 0x2B5848u);
    ctx->pc = 0x2B5844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5840u;
            // 0x2b5844: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5848u; }
        if (ctx->pc != 0x2B5848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5848u; }
        if (ctx->pc != 0x2B5848u) { return; }
    }
    ctx->pc = 0x2B5848u;
label_2b5848:
    // 0x2b5848: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2B5848u;
    {
        const bool branch_taken_0x2b5848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5848u;
            // 0x2b584c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5848) {
            ctx->pc = 0x2B5A90u;
            goto label_2b5a90;
        }
    }
    ctx->pc = 0x2B5850u;
label_2b5850:
    // 0x2b5850: 0x8ec20054  lw          $v0, 0x54($s6)
    ctx->pc = 0x2b5850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2b5854: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x2b5854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2b5858: 0xdc720010  ld          $s2, 0x10($v1)
    ctx->pc = 0x2b5858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b585c: 0x32420300  andi        $v0, $s2, 0x300
    ctx->pc = 0x2b585cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)768);
    // 0x2b5860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5860u;
    {
        const bool branch_taken_0x2b5860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5860u;
            // 0x2b5864: 0xdc750018  ld          $s5, 0x18($v1) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5860) {
            ctx->pc = 0x2B5870u;
            goto label_2b5870;
        }
    }
    ctx->pc = 0x2B5868u;
label_2b5868:
    // 0x2b5868: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2B5868u;
    {
        const bool branch_taken_0x2b5868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5868u;
            // 0x2b586c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5868) {
            ctx->pc = 0x2B5A90u;
            goto label_2b5a90;
        }
    }
    ctx->pc = 0x2B5870u;
label_2b5870:
    // 0x2b5870: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b5870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2b5874: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b5874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b5878: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5878u;
    {
        const bool branch_taken_0x2b5878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5878u;
            // 0x2b587c: 0x32a2ff00  andi        $v0, $s5, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5878) {
            ctx->pc = 0x2B58A4u;
            goto label_2b58a4;
        }
    }
    ctx->pc = 0x2B5880u;
    // 0x2b5880: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x2b5880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2b5884: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b5884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b5888: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b5888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b588c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B588Cu;
    {
        const bool branch_taken_0x2b588c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b588c) {
            ctx->pc = 0x2B5890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B588Cu;
            // 0x2b5890: 0x8e140028  lw          $s4, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5894u;
            goto label_2b5894;
        }
    }
    ctx->pc = 0x2B5894u;
label_2b5894:
    // 0x2b5894: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B5894u;
    {
        const bool branch_taken_0x2b5894 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5894) {
            ctx->pc = 0x2B5898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5894u;
            // 0x2b5898: 0x8e140024  lw          $s4, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B589Cu;
            goto label_2b589c;
        }
    }
    ctx->pc = 0x2B589Cu;
label_2b589c:
    // 0x2b589c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B589Cu;
    {
        const bool branch_taken_0x2b589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B58A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B589Cu;
            // 0x2b58a0: 0x8e130030  lw          $s3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b589c) {
            ctx->pc = 0x2B58ACu;
            goto label_2b58ac;
        }
    }
    ctx->pc = 0x2B58A4u;
label_2b58a4:
    // 0x2b58a4: 0x8e140020  lw          $s4, 0x20($s0)
    ctx->pc = 0x2b58a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b58a8: 0x8e13002c  lw          $s3, 0x2C($s0)
    ctx->pc = 0x2b58a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2b58ac:
    // 0x2b58ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b58acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b58b0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2b58b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b58b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b58b8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b58b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b58bc: 0xc0a3978  jal         func_28E5E0
    ctx->pc = 0x2B58BCu;
    SET_GPR_U32(ctx, 31, 0x2B58C4u);
    ctx->pc = 0x2B58C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58BCu;
            // 0x2b58c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E5E0u;
    if (runtime->hasFunction(0x28E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x28E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58C4u; }
        if (ctx->pc != 0x2B58C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E5E0_0x28e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58C4u; }
        if (ctx->pc != 0x2B58C4u) { return; }
    }
    ctx->pc = 0x2B58C4u;
label_2b58c4:
    // 0x2b58c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b58c8: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2B58C8u;
    SET_GPR_U32(ctx, 31, 0x2B58D0u);
    ctx->pc = 0x2B58CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58C8u;
            // 0x2b58cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58D0u; }
        if (ctx->pc != 0x2B58D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58D0u; }
        if (ctx->pc != 0x2B58D0u) { return; }
    }
    ctx->pc = 0x2B58D0u;
label_2b58d0:
    // 0x2b58d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b58d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58d4: 0xc0aef8c  jal         func_2BBE30
    ctx->pc = 0x2B58D4u;
    SET_GPR_U32(ctx, 31, 0x2B58DCu);
    ctx->pc = 0x2B58D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58D4u;
            // 0x2b58d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBE30u;
    if (runtime->hasFunction(0x2BBE30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58DCu; }
        if (ctx->pc != 0x2B58DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBE30_0x2bbe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58DCu; }
        if (ctx->pc != 0x2B58DCu) { return; }
    }
    ctx->pc = 0x2B58DCu;
label_2b58dc:
    // 0x2b58dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b58dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58e0: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x2b58e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x2b58e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B58E4u;
    {
        const bool branch_taken_0x2b58e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B58E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58E4u;
            // 0x2b58e8: 0x30830011  andi        $v1, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58e4) {
            ctx->pc = 0x2B5904u;
            goto label_2b5904;
        }
    }
    ctx->pc = 0x2B58ECu;
    // 0x2b58ec: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2b58ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2b58f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B58F0u;
    {
        const bool branch_taken_0x2b58f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B58F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58F0u;
            // 0x2b58f4: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58f0) {
            ctx->pc = 0x2B5904u;
            goto label_2b5904;
        }
    }
    ctx->pc = 0x2B58F8u;
    // 0x2b58f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b58fc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2B58FCu;
    {
        const bool branch_taken_0x2b58fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58FCu;
            // 0x2b5900: 0x240600aa  addiu       $a2, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58fc) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B5904u;
label_2b5904:
    // 0x2b5904: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x2b5904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x2b5908: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5908u;
    {
        const bool branch_taken_0x2b5908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B590Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5908u;
            // 0x2b590c: 0x30830012  andi        $v1, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5908) {
            ctx->pc = 0x2B5928u;
            goto label_2b5928;
        }
    }
    ctx->pc = 0x2B5910u;
    // 0x2b5910: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b5914: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5914u;
    {
        const bool branch_taken_0x2b5914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B5918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5914u;
            // 0x2b5918: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5914) {
            ctx->pc = 0x2B5928u;
            goto label_2b5928;
        }
    }
    ctx->pc = 0x2B591Cu;
    // 0x2b591c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b591cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5920: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2B5920u;
    {
        const bool branch_taken_0x2b5920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5920u;
            // 0x2b5924: 0x240600a5  addiu       $a2, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5920) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B5928u;
label_2b5928:
    // 0x2b5928: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x2b5928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2b592c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2b592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b5930: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b5930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b5934: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5934u;
    {
        const bool branch_taken_0x2b5934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5934u;
            // 0x2b5938: 0x30830021  andi        $v1, $a0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5934) {
            ctx->pc = 0x2B595Cu;
            goto label_2b595c;
        }
    }
    ctx->pc = 0x2B593Cu;
    // 0x2b593c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2b593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2b5940: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5940u;
    {
        const bool branch_taken_0x2b5940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B5944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5940u;
            // 0x2b5944: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5940) {
            ctx->pc = 0x2B5960u;
            goto label_2b5960;
        }
    }
    ctx->pc = 0x2B5948u;
    // 0x2b5948: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5948u;
    {
        const bool branch_taken_0x2b5948 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5948u;
            // 0x2b594c: 0x240600a9  addiu       $a2, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5948) {
            ctx->pc = 0x2B5960u;
            goto label_2b5960;
        }
    }
    ctx->pc = 0x2B5950u;
    // 0x2b5950: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5954: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2B5954u;
    {
        const bool branch_taken_0x2b5954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5954u;
            // 0x2b5958: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5954) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B595Cu;
label_2b595c:
    // 0x2b595c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x2b595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_2b5960:
    // 0x2b5960: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5960u;
    {
        const bool branch_taken_0x2b5960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5960u;
            // 0x2b5964: 0x30830044  andi        $v1, $a0, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)68);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5960) {
            ctx->pc = 0x2B5988u;
            goto label_2b5988;
        }
    }
    ctx->pc = 0x2B5968u;
    // 0x2b5968: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2b5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2b596c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B596Cu;
    {
        const bool branch_taken_0x2b596c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B5970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B596Cu;
            // 0x2b5970: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b596c) {
            ctx->pc = 0x2B598Cu;
            goto label_2b598c;
        }
    }
    ctx->pc = 0x2B5974u;
    // 0x2b5974: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5974u;
    {
        const bool branch_taken_0x2b5974 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5974u;
            // 0x2b5978: 0x240600a3  addiu       $a2, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5974) {
            ctx->pc = 0x2B598Cu;
            goto label_2b598c;
        }
    }
    ctx->pc = 0x2B597Cu;
    // 0x2b597c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5980: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2B5980u;
    {
        const bool branch_taken_0x2b5980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5980u;
            // 0x2b5984: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5980) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B5988u;
label_2b5988:
    // 0x2b5988: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x2b5988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_2b598c:
    // 0x2b598c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B598Cu;
    {
        const bool branch_taken_0x2b598c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B598Cu;
            // 0x2b5990: 0x30830104  andi        $v1, $a0, 0x104 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)260);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b598c) {
            ctx->pc = 0x2B59ACu;
            goto label_2b59ac;
        }
    }
    ctx->pc = 0x2B5994u;
    // 0x2b5994: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x2b5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x2b5998: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5998u;
    {
        const bool branch_taken_0x2b5998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5998u;
            // 0x2b599c: 0x240600a4  addiu       $a2, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5998) {
            ctx->pc = 0x2B59ACu;
            goto label_2b59ac;
        }
    }
    ctx->pc = 0x2B59A0u;
    // 0x2b59a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b59a4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B59A4u;
    {
        const bool branch_taken_0x2b59a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59A4u;
            // 0x2b59a8: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59a4) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B59ACu;
label_2b59ac:
    // 0x2b59ac: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x2b59acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x2b59b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B59B0u;
    {
        const bool branch_taken_0x2b59b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59B0u;
            // 0x2b59b4: 0x30830204  andi        $v1, $a0, 0x204 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)516);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59b0) {
            ctx->pc = 0x2B59D0u;
            goto label_2b59d0;
        }
    }
    ctx->pc = 0x2B59B8u;
    // 0x2b59b8: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x2b59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x2b59bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B59BCu;
    {
        const bool branch_taken_0x2b59bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B59C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59BCu;
            // 0x2b59c0: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59bc) {
            ctx->pc = 0x2B59D0u;
            goto label_2b59d0;
        }
    }
    ctx->pc = 0x2B59C4u;
    // 0x2b59c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b59c8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2B59C8u;
    {
        const bool branch_taken_0x2b59c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59C8u;
            // 0x2b59cc: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59c8) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B59D0u;
label_2b59d0:
    // 0x2b59d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2b59d4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b59d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b59d8: 0x1040ffa3  beqz        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2B59D8u;
    {
        const bool branch_taken_0x2b59d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59D8u;
            // 0x2b59dc: 0x30821000  andi        $v0, $a0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59d8) {
            ctx->pc = 0x2B5868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5868;
        }
    }
    ctx->pc = 0x2B59E0u;
    // 0x2b59e0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B59E0u;
    {
        const bool branch_taken_0x2b59e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B59E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59E0u;
            // 0x2b59e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59e0) {
            ctx->pc = 0x2B5A90u;
            goto label_2b5a90;
        }
    }
    ctx->pc = 0x2B59E8u;
    // 0x2b59e8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2b59e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b59ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b59ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b59f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B59F0u;
    {
        const bool branch_taken_0x2b59f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59F0u;
            // 0x2b59f4: 0x32420016  andi        $v0, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59f0) {
            ctx->pc = 0x2B5A2Cu;
            goto label_2b5a2c;
        }
    }
    ctx->pc = 0x2B59F8u;
    // 0x2b59f8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B59F8u;
    {
        const bool branch_taken_0x2b59f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59F8u;
            // 0x2b59fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59f8) {
            ctx->pc = 0x2B5A20u;
            goto label_2b5a20;
        }
    }
    ctx->pc = 0x2B5A00u;
    // 0x2b5a00: 0xc0aa39c  jal         func_2A8E70
    ctx->pc = 0x2B5A00u;
    SET_GPR_U32(ctx, 31, 0x2B5A08u);
    ctx->pc = 0x2B5A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A00u;
            // 0x2b5a04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (runtime->hasFunction(0x2A8E70u)) {
        auto targetFn = runtime->lookupFunction(0x2A8E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A08u; }
        if (ctx->pc != 0x2B5A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8E70_0x2a8e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A08u; }
        if (ctx->pc != 0x2B5A08u) { return; }
    }
    ctx->pc = 0x2B5A08u;
label_2b5a08:
    // 0x2b5a08: 0x32a3ff00  andi        $v1, $s5, 0xFF00
    ctx->pc = 0x2b5a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x2b5a0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b5a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b5a10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b5a10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b5a14: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b5a14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b5a18: 0x1060ff93  beqz        $v1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x2B5A18u;
    {
        const bool branch_taken_0x2b5a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A18u;
            // 0x2b5a1c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a18) {
            ctx->pc = 0x2B5868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5868;
        }
    }
    ctx->pc = 0x2B5A20u;
label_2b5a20:
    // 0x2b5a20: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2b5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2b5a24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B5A24u;
    {
        const bool branch_taken_0x2b5a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A24u;
            // 0x2b5a28: 0x240600a7  addiu       $a2, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a24) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B5A2Cu;
label_2b5a2c:
    // 0x2b5a2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B5A2Cu;
    {
        const bool branch_taken_0x2b5a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A2Cu;
            // 0x2b5a30: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a2c) {
            ctx->pc = 0x2B5A68u;
            goto label_2b5a68;
        }
    }
    ctx->pc = 0x2B5A34u;
    // 0x2b5a34: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5A34u;
    {
        const bool branch_taken_0x2b5a34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A34u;
            // 0x2b5a38: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a34) {
            ctx->pc = 0x2B5A60u;
            goto label_2b5a60;
        }
    }
    ctx->pc = 0x2B5A3Cu;
    // 0x2b5a3c: 0xc0a5014  jal         func_294050
    ctx->pc = 0x2B5A3Cu;
    SET_GPR_U32(ctx, 31, 0x2B5A44u);
    ctx->pc = 0x2B5A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A3Cu;
            // 0x2b5a40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294050u;
    if (runtime->hasFunction(0x294050u)) {
        auto targetFn = runtime->lookupFunction(0x294050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A44u; }
        if (ctx->pc != 0x2B5A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294050_0x294050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A44u; }
        if (ctx->pc != 0x2B5A44u) { return; }
    }
    ctx->pc = 0x2B5A44u;
label_2b5a44:
    // 0x2b5a44: 0x32a3ff00  andi        $v1, $s5, 0xFF00
    ctx->pc = 0x2b5a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x2b5a48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b5a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b5a4c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b5a4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b5a50: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b5a50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b5a54: 0x1060ff84  beqz        $v1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x2B5A54u;
    {
        const bool branch_taken_0x2b5a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A54u;
            // 0x2b5a58: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a54) {
            ctx->pc = 0x2B5868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5868;
        }
    }
    ctx->pc = 0x2B5A5Cu;
    // 0x2b5a5c: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2b5a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_2b5a60:
    // 0x2b5a60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5A60u;
    {
        const bool branch_taken_0x2b5a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A60u;
            // 0x2b5a64: 0x240600a6  addiu       $a2, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a60) {
            ctx->pc = 0x2B5A70u;
            goto label_2b5a70;
        }
    }
    ctx->pc = 0x2B5A68u;
label_2b5a68:
    // 0x2b5a68: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2b5a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2b5a6c: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x2b5a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_2b5a70:
    // 0x2b5a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a74: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B5A74u;
    SET_GPR_U32(ctx, 31, 0x2B5A7Cu);
    ctx->pc = 0x2B5A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A74u;
            // 0x2b5a78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A7Cu; }
        if (ctx->pc != 0x2B5A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A7Cu; }
        if (ctx->pc != 0x2B5A7Cu) { return; }
    }
    ctx->pc = 0x2B5A7Cu;
label_2b5a7c:
    // 0x2b5a7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b5a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b5a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5a84: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B5A84u;
    SET_GPR_U32(ctx, 31, 0x2B5A8Cu);
    ctx->pc = 0x2B5A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A84u;
            // 0x2b5a88: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A8Cu; }
        if (ctx->pc != 0x2B5A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A8Cu; }
        if (ctx->pc != 0x2B5A8Cu) { return; }
    }
    ctx->pc = 0x2B5A8Cu;
label_2b5a8c:
    // 0x2b5a8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a90:
    // 0x2b5a90: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b5a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b5a94: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b5a94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5a98: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b5a98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5a9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b5a9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5aa0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b5aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5aa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b5aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5aa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b5aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AB0u;
            // 0x2b5ab4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5AB8u;
    ctx->pc = 0x2b5ab8u;
}

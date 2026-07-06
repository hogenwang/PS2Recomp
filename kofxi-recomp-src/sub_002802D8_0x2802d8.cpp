#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002802D8
// Address: 0x2802d8 - 0x280510
void sub_002802D8_0x2802d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002802D8_0x2802d8");
#endif

    switch (ctx->pc) {
        case 0x280318u: goto label_280318;
        case 0x28034cu: goto label_28034c;
        case 0x280390u: goto label_280390;
        case 0x2803f8u: goto label_2803f8;
        case 0x280468u: goto label_280468;
        case 0x280488u: goto label_280488;
        case 0x28048cu: goto label_28048c;
        case 0x2804c4u: goto label_2804c4;
        case 0x2804e8u: goto label_2804e8;
        default: break;
    }

    ctx->pc = 0x2802d8u;

    // 0x2802d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2802d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2802dc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2802dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2802e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2802e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2802e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2802e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2802e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2802ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2802ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802f0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2802f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2802f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2802f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2802f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2802fc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2802FCu;
    {
        const bool branch_taken_0x2802fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x280300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2802FCu;
            // 0x280300: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802fc) {
            ctx->pc = 0x280310u;
            goto label_280310;
        }
    }
    ctx->pc = 0x280304u;
    // 0x280304: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x280304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x280308: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280308u;
    {
        const bool branch_taken_0x280308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280308u;
            // 0x28030c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280308) {
            ctx->pc = 0x28032Cu;
            goto label_28032c;
        }
    }
    ctx->pc = 0x280310u;
label_280310:
    // 0x280310: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x280310u;
    SET_GPR_U32(ctx, 31, 0x280318u);
    ctx->pc = 0x280314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280310u;
            // 0x280314: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280318u; }
        if (ctx->pc != 0x280318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280318u; }
        if (ctx->pc != 0x280318u) { return; }
    }
    ctx->pc = 0x280318u;
label_280318:
    // 0x280318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28031c: 0x12000073  beqz        $s0, . + 4 + (0x73 << 2)
    ctx->pc = 0x28031Cu;
    {
        const bool branch_taken_0x28031c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28031Cu;
            // 0x280320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28031c) {
            ctx->pc = 0x2804ECu;
            goto label_2804ec;
        }
    }
    ctx->pc = 0x280324u;
    // 0x280324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x280324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280328: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x280328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_28032c:
    // 0x28032c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x280330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280334: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x280334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x280338: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28033c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28033cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x280340: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x280340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x280344: 0xc0a0554  jal         func_281550
    ctx->pc = 0x280344u;
    SET_GPR_U32(ctx, 31, 0x28034Cu);
    ctx->pc = 0x280348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280344u;
            // 0x280348: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (runtime->hasFunction(0x281550u)) {
        auto targetFn = runtime->lookupFunction(0x281550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28034Cu; }
        if (ctx->pc != 0x28034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281550_0x281550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28034Cu; }
        if (ctx->pc != 0x28034Cu) { return; }
    }
    ctx->pc = 0x28034Cu;
label_28034c:
    // 0x28034c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x28034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x280350: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x280350u;
    {
        const bool branch_taken_0x280350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280350u;
            // 0x280354: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280350) {
            ctx->pc = 0x2804B0u;
            goto label_2804b0;
        }
    }
    ctx->pc = 0x280358u;
    // 0x280358: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x280358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28035c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x280360: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x280360u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280364: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x280364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280368: 0x222102f  dsubu       $v0, $s1, $v0
    ctx->pc = 0x280368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    // 0x28036c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x28036cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x280370: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x280370u;
    {
        const bool branch_taken_0x280370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280370u;
            // 0x280374: 0x8fb10010  lw          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280370) {
            ctx->pc = 0x2804B0u;
            goto label_2804b0;
        }
    }
    ctx->pc = 0x280378u;
    // 0x280378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x280378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28037c: 0x1622004c  bne         $s1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x28037Cu;
    {
        const bool branch_taken_0x28037c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x280380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28037Cu;
            // 0x280380: 0x24060071  addiu       $a2, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28037c) {
            ctx->pc = 0x2804B0u;
            goto label_2804b0;
        }
    }
    ctx->pc = 0x280384u;
    // 0x280384: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x280384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280388: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x280388u;
    SET_GPR_U32(ctx, 31, 0x280390u);
    ctx->pc = 0x28038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280388u;
            // 0x28038c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280390u; }
        if (ctx->pc != 0x280390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280390u; }
        if (ctx->pc != 0x280390u) { return; }
    }
    ctx->pc = 0x280390u;
label_280390:
    // 0x280390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x280390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280394: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x280394u;
    {
        const bool branch_taken_0x280394 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x280398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280394u;
            // 0x280398: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280394) {
            ctx->pc = 0x2803A4u;
            goto label_2803a4;
        }
    }
    ctx->pc = 0x28039Cu;
    // 0x28039c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x28039Cu;
    {
        const bool branch_taken_0x28039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28039Cu;
            // 0x2803a0: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28039c) {
            ctx->pc = 0x2804B0u;
            goto label_2804b0;
        }
    }
    ctx->pc = 0x2803A4u;
label_2803a4:
    // 0x2803a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2803a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2803a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2803a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2803ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2803ACu;
    {
        const bool branch_taken_0x2803ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2803ACu;
            // 0x2803b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803ac) {
            ctx->pc = 0x280428u;
            goto label_280428;
        }
    }
    ctx->pc = 0x2803B4u;
    // 0x2803b4: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x2803b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2803b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2803b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2803bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2803bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2803c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2803c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2803c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2803c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2803c8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2803C8u;
    {
        const bool branch_taken_0x2803c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2803CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2803C8u;
            // 0x2803cc: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803c8) {
            ctx->pc = 0x2803E4u;
            goto label_2803e4;
        }
    }
    ctx->pc = 0x2803D0u;
    // 0x2803d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2803d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2803d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2803d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2803d8: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x2803d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x2803dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2803dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2803e0: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2803e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2803e4:
    // 0x2803e4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2803e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2803e8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2803e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2803ec: 0x58c00023  blezl       $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2803ECu;
    {
        const bool branch_taken_0x2803ec = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2803ec) {
            ctx->pc = 0x2803F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2803ECu;
            // 0x2803f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28047Cu;
            goto label_28047c;
        }
    }
    ctx->pc = 0x2803F4u;
    // 0x2803f4: 0x0  nop
    ctx->pc = 0x2803f4u;
    // NOP
label_2803f8:
    // 0x2803f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2803f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2803fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2803fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x280400: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x280400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x280404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x280408: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x280408u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28040c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280410: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x280410u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x280414: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x280414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x280418: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x280418u;
    {
        const bool branch_taken_0x280418 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280418u;
            // 0x28041c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280418) {
            ctx->pc = 0x2803F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2803f8;
        }
    }
    ctx->pc = 0x280420u;
    // 0x280420: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x280420u;
    {
        const bool branch_taken_0x280420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280420u;
            // 0x280424: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280420) {
            ctx->pc = 0x28047Cu;
            goto label_28047c;
        }
    }
    ctx->pc = 0x280428u;
label_280428:
    // 0x280428: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x280428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x28042c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x28042cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280430: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x280430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x280434: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280434u;
    {
        const bool branch_taken_0x280434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280434u;
            // 0x280438: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280434) {
            ctx->pc = 0x280460u;
            goto label_280460;
        }
    }
    ctx->pc = 0x28043Cu;
    // 0x28043c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x28043cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280444: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280444u;
    {
        const bool branch_taken_0x280444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x280448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280444u;
            // 0x280448: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280444) {
            ctx->pc = 0x280460u;
            goto label_280460;
        }
    }
    ctx->pc = 0x28044Cu;
    // 0x28044c: 0x6482ffff  daddiu      $v0, $a0, -0x1
    ctx->pc = 0x28044cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x280450: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x280450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x280454: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x280454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280458: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x280458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x28045c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x28045cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_280460:
    // 0x280460: 0xc049c48  jal         func_127120
    ctx->pc = 0x280460u;
    SET_GPR_U32(ctx, 31, 0x280468u);
    ctx->pc = 0x280464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280460u;
            // 0x280464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280468u; }
        if (ctx->pc != 0x280468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280468u; }
        if (ctx->pc != 0x280468u) { return; }
    }
    ctx->pc = 0x280468u;
label_280468:
    // 0x280468: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x280468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28046c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x28046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x280470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x280474: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x280474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x280478: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x280478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28047c:
    // 0x28047c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28047Cu;
    {
        const bool branch_taken_0x28047c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28047c) {
            ctx->pc = 0x280480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28047Cu;
            // 0x280480: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x280490u;
            goto label_280490;
        }
    }
    ctx->pc = 0x280484u;
    // 0x280484: 0xc0a8c0a  jal         func_2A3028
label_280488:
    if (ctx->pc == 0x280488u) {
        ctx->pc = 0x28048Cu;
        goto label_28048c;
    }
    ctx->pc = 0x280484u;
    SET_GPR_U32(ctx, 31, 0x28048Cu);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28048Cu; }
        if (ctx->pc != 0x28048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28048Cu; }
        if (ctx->pc != 0x28048Cu) { return; }
    }
    ctx->pc = 0x28048Cu;
label_28048c:
    // 0x28048c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x28048cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_280490:
    // 0x280490: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x280490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280494: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x280494u;
    {
        const bool branch_taken_0x280494 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x280498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280494u;
            // 0x280498: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280494) {
            ctx->pc = 0x2804A0u;
            goto label_2804a0;
        }
    }
    ctx->pc = 0x28049Cu;
    // 0x28049c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x28049cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_2804a0:
    // 0x2804a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2804a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2804a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2804a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2804A8u;
    {
        const bool branch_taken_0x2804a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2804A8u;
            // 0x2804ac: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804a8) {
            ctx->pc = 0x2804ECu;
            goto label_2804ec;
        }
    }
    ctx->pc = 0x2804B0u;
label_2804b0:
    // 0x2804b0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2804b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2804b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2804b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2804b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2804b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804bc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2804BCu;
    SET_GPR_U32(ctx, 31, 0x2804C4u);
    ctx->pc = 0x2804C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804BCu;
            // 0x2804c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804C4u; }
        if (ctx->pc != 0x2804C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804C4u; }
        if (ctx->pc != 0x2804C4u) { return; }
    }
    ctx->pc = 0x2804C4u;
label_2804c4:
    // 0x2804c4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2804C4u;
    {
        const bool branch_taken_0x2804c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2804C4u;
            // 0x2804c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804c4) {
            ctx->pc = 0x2804ECu;
            goto label_2804ec;
        }
    }
    ctx->pc = 0x2804CCu;
    // 0x2804cc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2804CCu;
    {
        const bool branch_taken_0x2804cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2804cc) {
            ctx->pc = 0x2804E0u;
            goto label_2804e0;
        }
    }
    ctx->pc = 0x2804D4u;
    // 0x2804d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2804d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2804d8: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2804D8u;
    {
        const bool branch_taken_0x2804d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2804DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2804D8u;
            // 0x2804dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804d8) {
            ctx->pc = 0x2804ECu;
            goto label_2804ec;
        }
    }
    ctx->pc = 0x2804E0u;
label_2804e0:
    // 0x2804e0: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2804E0u;
    SET_GPR_U32(ctx, 31, 0x2804E8u);
    ctx->pc = 0x2804E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804E0u;
            // 0x2804e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804E8u; }
        if (ctx->pc != 0x2804E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804E8u; }
        if (ctx->pc != 0x2804E8u) { return; }
    }
    ctx->pc = 0x2804E8u;
label_2804e8:
    // 0x2804e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2804e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2804ec:
    // 0x2804ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2804ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2804f0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2804f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2804f4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2804f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2804f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2804f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2804fc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2804fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280500: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x280500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280504: 0x3e00008  jr          $ra
    ctx->pc = 0x280504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280504u;
            // 0x280508: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28050Cu;
    // 0x28050c: 0x0  nop
    ctx->pc = 0x28050cu;
    // NOP
    ctx->pc = 0x280510u;
}

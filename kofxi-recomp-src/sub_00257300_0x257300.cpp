#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00257300
// Address: 0x257300 - 0x2574a8
void sub_00257300_0x257300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257300_0x257300");
#endif

    switch (ctx->pc) {
        case 0x257328u: goto label_257328;
        case 0x25733cu: goto label_25733c;
        case 0x257374u: goto label_257374;
        case 0x25742cu: goto label_25742c;
        case 0x257454u: goto label_257454;
        case 0x257478u: goto label_257478;
        case 0x25748cu: goto label_25748c;
        default: break;
    }

    ctx->pc = 0x257300u;

    // 0x257300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x257300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x257304: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x257304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x257308: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x257308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25730c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25730cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257310: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x257310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x257314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x257314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257318: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x257318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25731c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x257320: 0xc08c682  jal         func_231A08
    ctx->pc = 0x257320u;
    SET_GPR_U32(ctx, 31, 0x257328u);
    ctx->pc = 0x257324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257320u;
            // 0x257324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257328u; }
        if (ctx->pc != 0x257328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257328u; }
        if (ctx->pc != 0x257328u) { return; }
    }
    ctx->pc = 0x257328u;
label_257328:
    // 0x257328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25732c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25732cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x257330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257334: 0xc095b06  jal         func_256C18
    ctx->pc = 0x257334u;
    SET_GPR_U32(ctx, 31, 0x25733Cu);
    ctx->pc = 0x257338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257334u;
            // 0x257338: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256C18u;
    if (runtime->hasFunction(0x256C18u)) {
        auto targetFn = runtime->lookupFunction(0x256C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25733Cu; }
        if (ctx->pc != 0x25733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00256C18_0x256c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25733Cu; }
        if (ctx->pc != 0x25733Cu) { return; }
    }
    ctx->pc = 0x25733Cu;
label_25733c:
    // 0x25733c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25733cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257340: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x257340u;
    {
        const bool branch_taken_0x257340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x257340) {
            ctx->pc = 0x25736Cu;
            goto label_25736c;
        }
    }
    ctx->pc = 0x257348u;
    // 0x257348: 0x8a460007  lwl         $a2, 0x7($s2)
    ctx->pc = 0x257348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x25734c: 0x9a460004  lwr         $a2, 0x4($s2)
    ctx->pc = 0x25734cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x257350: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x257354: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x257358: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257358u;
    {
        const bool branch_taken_0x257358 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257358u;
            // 0x25735c: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257358) {
            ctx->pc = 0x25736Cu;
            goto label_25736c;
        }
    }
    ctx->pc = 0x257360u;
    // 0x257360: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257364: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257364u;
    {
        const bool branch_taken_0x257364 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x257364) {
            ctx->pc = 0x257368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257364u;
            // 0x257368: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25737Cu;
            goto label_25737c;
        }
    }
    ctx->pc = 0x25736Cu;
label_25736c:
    // 0x25736c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25736Cu;
    SET_GPR_U32(ctx, 31, 0x257374u);
    ctx->pc = 0x257370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25736Cu;
            // 0x257370: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257374u; }
        if (ctx->pc != 0x257374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257374u; }
        if (ctx->pc != 0x257374u) { return; }
    }
    ctx->pc = 0x257374u;
label_257374:
    // 0x257374: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x257374u;
    {
        const bool branch_taken_0x257374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257374u;
            // 0x257378: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257374) {
            ctx->pc = 0x257490u;
            goto label_257490;
        }
    }
    ctx->pc = 0x25737Cu;
label_25737c:
    // 0x25737c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25737Cu;
    {
        const bool branch_taken_0x25737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25737Cu;
            // 0x257380: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25737c) {
            ctx->pc = 0x257390u;
            goto label_257390;
        }
    }
    ctx->pc = 0x257384u;
    // 0x257384: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x257384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x257388: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x257388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25738c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_257390:
    // 0x257390: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x257390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x257394: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x257394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x257398: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x257398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x25739c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25739Cu;
    {
        const bool branch_taken_0x25739c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25739Cu;
            // 0x2573a0: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25739c) {
            ctx->pc = 0x2573B0u;
            goto label_2573b0;
        }
    }
    ctx->pc = 0x2573A4u;
    // 0x2573a4: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x2573a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x2573a8: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2573a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2573ac: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2573acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2573b0:
    // 0x2573b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2573b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2573b4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2573b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2573b8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2573b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2573bc: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x2573bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x2573c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2573c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2573c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2573c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2573c8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2573c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2573cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2573ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2573d0: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2573d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2573d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2573d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2573d8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2573D8u;
    {
        const bool branch_taken_0x2573d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2573d8) {
            ctx->pc = 0x2573DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2573D8u;
            // 0x2573dc: 0x96020088  lhu         $v0, 0x88($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2573F0u;
            goto label_2573f0;
        }
    }
    ctx->pc = 0x2573E0u;
    // 0x2573e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2573e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2573e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2573E4u;
    {
        const bool branch_taken_0x2573e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2573E4u;
            // 0x2573e8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573e4) {
            ctx->pc = 0x257408u;
            goto label_257408;
        }
    }
    ctx->pc = 0x2573ECu;
    // 0x2573ec: 0x0  nop
    ctx->pc = 0x2573ecu;
    // NOP
label_2573f0:
    // 0x2573f0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2573f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2573f4: 0x24631228  addiu       $v1, $v1, 0x1228
    ctx->pc = 0x2573f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
    // 0x2573f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2573f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2573fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2573fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x257400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257404: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x257404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_257408:
    // 0x257408: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x257408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25740c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x257410: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x257410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x257414: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x257414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x257418: 0xdc821218  ld          $v0, 0x1218($a0)
    ctx->pc = 0x257418u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4632)));
    // 0x25741c: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x25741cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x257420: 0xfc821218  sd          $v0, 0x1218($a0)
    ctx->pc = 0x257420u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4632), GPR_U64(ctx, 2));
    // 0x257424: 0xc08c698  jal         func_231A60
    ctx->pc = 0x257424u;
    SET_GPR_U32(ctx, 31, 0x25742Cu);
    ctx->pc = 0x257428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257424u;
            // 0x257428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25742Cu; }
        if (ctx->pc != 0x25742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25742Cu; }
        if (ctx->pc != 0x25742Cu) { return; }
    }
    ctx->pc = 0x25742Cu;
label_25742c:
    // 0x25742c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25742cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x257430: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x257430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x257434: 0xdc6201e0  ld          $v0, 0x1E0($v1)
    ctx->pc = 0x257434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x257438: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x257438u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25743c: 0xfc6201e0  sd          $v0, 0x1E0($v1)
    ctx->pc = 0x25743cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 480), GPR_U64(ctx, 2));
    // 0x257440: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x257440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x257444: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257444u;
    {
        const bool branch_taken_0x257444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257444) {
            ctx->pc = 0x257448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257444u;
            // 0x257448: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257458u;
            goto label_257458;
        }
    }
    ctx->pc = 0x25744Cu;
    // 0x25744c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x25744Cu;
    SET_GPR_U32(ctx, 31, 0x257454u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257454u; }
        if (ctx->pc != 0x257454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257454u; }
        if (ctx->pc != 0x257454u) { return; }
    }
    ctx->pc = 0x257454u;
label_257454:
    // 0x257454: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x257454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_257458:
    // 0x257458: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x257458u;
    {
        const bool branch_taken_0x257458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257458) {
            ctx->pc = 0x257484u;
            goto label_257484;
        }
    }
    ctx->pc = 0x257460u;
    // 0x257460: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x257460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x257464: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x257464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257468u;
    {
        const bool branch_taken_0x257468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257468u;
            // 0x25746c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257468) {
            ctx->pc = 0x257480u;
            goto label_257480;
        }
    }
    ctx->pc = 0x257470u;
    // 0x257470: 0xc090c4c  jal         func_243130
    ctx->pc = 0x257470u;
    SET_GPR_U32(ctx, 31, 0x257478u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257478u; }
        if (ctx->pc != 0x257478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257478u; }
        if (ctx->pc != 0x257478u) { return; }
    }
    ctx->pc = 0x257478u;
label_257478:
    // 0x257478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257478u;
    {
        const bool branch_taken_0x257478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257478) {
            ctx->pc = 0x257484u;
            goto label_257484;
        }
    }
    ctx->pc = 0x257480u;
label_257480:
    // 0x257480: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x257480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_257484:
    // 0x257484: 0xc098560  jal         func_261580
    ctx->pc = 0x257484u;
    SET_GPR_U32(ctx, 31, 0x25748Cu);
    ctx->pc = 0x257488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257484u;
            // 0x257488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25748Cu; }
        if (ctx->pc != 0x25748Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25748Cu; }
        if (ctx->pc != 0x25748Cu) { return; }
    }
    ctx->pc = 0x25748Cu;
label_25748c:
    // 0x25748c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25748cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_257490:
    // 0x257490: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x257490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257494: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x257494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257498: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x257498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25749c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25749cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2574a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2574A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2574A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2574A0u;
            // 0x2574a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2574A8u;
    ctx->pc = 0x2574a8u;
}

#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024B110
// Address: 0x24b110 - 0x24b1e0
void sub_0024B110_0x24b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B110_0x24b110");
#endif

    switch (ctx->pc) {
        case 0x24b110u: goto label_24b110;
        case 0x24b114u: goto label_24b114;
        case 0x24b118u: goto label_24b118;
        case 0x24b11cu: goto label_24b11c;
        case 0x24b120u: goto label_24b120;
        case 0x24b124u: goto label_24b124;
        case 0x24b128u: goto label_24b128;
        case 0x24b12cu: goto label_24b12c;
        case 0x24b130u: goto label_24b130;
        case 0x24b134u: goto label_24b134;
        case 0x24b138u: goto label_24b138;
        case 0x24b13cu: goto label_24b13c;
        case 0x24b140u: goto label_24b140;
        case 0x24b144u: goto label_24b144;
        case 0x24b148u: goto label_24b148;
        case 0x24b14cu: goto label_24b14c;
        case 0x24b150u: goto label_24b150;
        case 0x24b154u: goto label_24b154;
        case 0x24b158u: goto label_24b158;
        case 0x24b15cu: goto label_24b15c;
        case 0x24b160u: goto label_24b160;
        case 0x24b164u: goto label_24b164;
        case 0x24b168u: goto label_24b168;
        case 0x24b16cu: goto label_24b16c;
        case 0x24b170u: goto label_24b170;
        case 0x24b174u: goto label_24b174;
        case 0x24b178u: goto label_24b178;
        case 0x24b17cu: goto label_24b17c;
        case 0x24b180u: goto label_24b180;
        case 0x24b184u: goto label_24b184;
        case 0x24b188u: goto label_24b188;
        case 0x24b18cu: goto label_24b18c;
        case 0x24b190u: goto label_24b190;
        case 0x24b194u: goto label_24b194;
        case 0x24b198u: goto label_24b198;
        case 0x24b19cu: goto label_24b19c;
        case 0x24b1a0u: goto label_24b1a0;
        case 0x24b1a4u: goto label_24b1a4;
        case 0x24b1a8u: goto label_24b1a8;
        case 0x24b1acu: goto label_24b1ac;
        case 0x24b1b0u: goto label_24b1b0;
        case 0x24b1b4u: goto label_24b1b4;
        case 0x24b1b8u: goto label_24b1b8;
        case 0x24b1bcu: goto label_24b1bc;
        case 0x24b1c0u: goto label_24b1c0;
        case 0x24b1c4u: goto label_24b1c4;
        case 0x24b1c8u: goto label_24b1c8;
        case 0x24b1ccu: goto label_24b1cc;
        case 0x24b1d0u: goto label_24b1d0;
        case 0x24b1d4u: goto label_24b1d4;
        case 0x24b1d8u: goto label_24b1d8;
        case 0x24b1dcu: goto label_24b1dc;
        default: break;
    }

    ctx->pc = 0x24b110u;

label_24b110:
    // 0x24b110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24b110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24b114:
    // 0x24b114: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_24b118:
    // 0x24b118: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24b118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_24b11c:
    // 0x24b11c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_24b120:
    // 0x24b120: 0xc08c682  jal         func_231A08
label_24b124:
    if (ctx->pc == 0x24B124u) {
        ctx->pc = 0x24B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B120u;
        // 0x24b124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B128u;
        goto label_24b128;
    }
    ctx->pc = 0x24B120u;
    SET_GPR_U32(ctx, 31, 0x24B128u);
    ctx->pc = 0x24B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B120u;
    // 0x24b124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24B120u, 0x24B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B128u;
label_24b128:
    // 0x24b128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24b128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b12c:
    // 0x24b12c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24b130:
    // 0x24b130: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24b134:
    // 0x24b134: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_24b138:
    if (ctx->pc == 0x24B138u) {
        ctx->pc = 0x24B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B134u;
        // 0x24b138: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B13Cu;
        goto label_24b13c;
    }
    ctx->pc = 0x24B134u;
    {
        const bool branch_taken_0x24b134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B134u;
        // 0x24b138: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b134) {
            ctx->pc = 0x24B1C0u;
            goto label_24b1c0;
        }
    }
    ctx->pc = 0x24B13Cu;
label_24b13c:
    // 0x24b13c: 0xc09241c  jal         func_249070
label_24b140:
    if (ctx->pc == 0x24B140u) {
        ctx->pc = 0x24B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B13Cu;
        // 0x24b140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B144u;
        goto label_24b144;
    }
    ctx->pc = 0x24B13Cu;
    SET_GPR_U32(ctx, 31, 0x24B144u);
    ctx->pc = 0x24B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B13Cu;
    // 0x24b140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249070u, 0x24B13Cu, 0x24B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B144u;
label_24b144:
    // 0x24b144: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24b148:
    // 0x24b148: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24b14c:
    if (ctx->pc == 0x24B14Cu) {
        ctx->pc = 0x24B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B148u;
        // 0x24b14c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B150u;
        goto label_24b150;
    }
    ctx->pc = 0x24B148u;
    {
        const bool branch_taken_0x24b148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B148u;
        // 0x24b14c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b148) {
            ctx->pc = 0x24B160u;
            goto label_24b160;
        }
    }
    ctx->pc = 0x24B150u;
label_24b150:
    // 0x24b150: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x24b150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_24b154:
    // 0x24b154: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24b154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24b158:
    // 0x24b158: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_24b15c:
    // 0x24b15c: 0x0  nop
    ctx->pc = 0x24b15cu;
    // NOP
label_24b160:
    // 0x24b160: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24b160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24b164:
    // 0x24b164: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x24b164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24b168:
    // 0x24b168: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x24b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_24b16c:
    // 0x24b16c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24b170:
    // 0x24b170: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24b174:
    if (ctx->pc == 0x24B174u) {
        ctx->pc = 0x24B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B170u;
        // 0x24b174: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B178u;
        goto label_24b178;
    }
    ctx->pc = 0x24B170u;
    {
        const bool branch_taken_0x24b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B170u;
        // 0x24b174: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b170) {
            ctx->pc = 0x24B180u;
            goto label_24b180;
        }
    }
    ctx->pc = 0x24B178u;
label_24b178:
    // 0x24b178: 0xc090c82  jal         func_243208
label_24b17c:
    if (ctx->pc == 0x24B17Cu) {
        ctx->pc = 0x24B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B178u;
        // 0x24b17c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B180u;
        goto label_24b180;
    }
    ctx->pc = 0x24B178u;
    SET_GPR_U32(ctx, 31, 0x24B180u);
    ctx->pc = 0x24B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B178u;
    // 0x24b17c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x24B178u, 0x24B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B180u;
label_24b180:
    // 0x24b180: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24b184:
    // 0x24b184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24b188:
    // 0x24b188: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x24b188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_24b18c:
    // 0x24b18c: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x24b18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_24b190:
    // 0x24b190: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x24b190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_24b194:
    // 0x24b194: 0x34a56932  ori         $a1, $a1, 0x6932
    ctx->pc = 0x24b194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26930);
label_24b198:
    // 0x24b198: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x24b198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_24b19c:
    // 0x24b19c: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x24b19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_24b1a0:
    // 0x24b1a0: 0xaba20017  swl         $v0, 0x17($sp)
    ctx->pc = 0x24b1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24b1a4:
    // 0x24b1a4: 0xbba20014  swr         $v0, 0x14($sp)
    ctx->pc = 0x24b1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24b1a8:
    // 0x24b1a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24b1ac:
    // 0x24b1ac: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x24b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_24b1b0:
    // 0x24b1b0: 0x40f809  jalr        $v0
label_24b1b4:
    if (ctx->pc == 0x24B1B4u) {
        ctx->pc = 0x24B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1B0u;
        // 0x24b1b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B1B8u;
        goto label_24b1b8;
    }
    ctx->pc = 0x24B1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B1B8u);
        ctx->pc = 0x24B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1B0u;
        // 0x24b1b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B1B0u, 0x24B1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B1B8u;
label_24b1b8:
    // 0x24b1b8: 0xc098560  jal         func_261580
label_24b1bc:
    if (ctx->pc == 0x24B1BCu) {
        ctx->pc = 0x24B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1B8u;
        // 0x24b1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B1C0u;
        goto label_24b1c0;
    }
    ctx->pc = 0x24B1B8u;
    SET_GPR_U32(ctx, 31, 0x24B1C0u);
    ctx->pc = 0x24B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1B8u;
    // 0x24b1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24B1B8u, 0x24B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1C0u;
label_24b1c0:
    // 0x24b1c0: 0xc08c698  jal         func_231A60
label_24b1c4:
    if (ctx->pc == 0x24B1C4u) {
        ctx->pc = 0x24B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1C0u;
        // 0x24b1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B1C8u;
        goto label_24b1c8;
    }
    ctx->pc = 0x24B1C0u;
    SET_GPR_U32(ctx, 31, 0x24B1C8u);
    ctx->pc = 0x24B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1C0u;
    // 0x24b1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24B1C0u, 0x24B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1C8u;
label_24b1c8:
    // 0x24b1c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24b1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24b1cc:
    // 0x24b1cc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24b1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24b1d0:
    // 0x24b1d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24b1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24b1d4:
    // 0x24b1d4: 0x3e00008  jr          $ra
label_24b1d8:
    if (ctx->pc == 0x24B1D8u) {
        ctx->pc = 0x24B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1D4u;
        // 0x24b1d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B1DCu;
        goto label_24b1dc;
    }
    ctx->pc = 0x24B1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1D4u;
        // 0x24b1d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B1DCu;
label_24b1dc:
    // 0x24b1dc: 0x0  nop
    ctx->pc = 0x24b1dcu;
    // NOP
    if (ctx->pc == 0x24b1dcu) { ctx->pc = 0x24b1e0u; }
}

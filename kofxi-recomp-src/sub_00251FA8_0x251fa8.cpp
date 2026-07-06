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

// Function: sub_00251FA8
// Address: 0x251fa8 - 0x252508
void sub_00251FA8_0x251fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251FA8_0x251fa8");
#endif

    switch (ctx->pc) {
        case 0x251fecu: goto label_251fec;
        case 0x25206cu: goto label_25206c;
        case 0x2520a8u: goto label_2520a8;
        case 0x25216cu: goto label_25216c;
        case 0x252180u: goto label_252180;
        case 0x252198u: goto label_252198;
        case 0x2521b0u: goto label_2521b0;
        case 0x2521dcu: goto label_2521dc;
        case 0x2521f0u: goto label_2521f0;
        case 0x252220u: goto label_252220;
        case 0x2522a0u: goto label_2522a0;
        case 0x252304u: goto label_252304;
        case 0x25234cu: goto label_25234c;
        case 0x252360u: goto label_252360;
        case 0x252380u: goto label_252380;
        case 0x2523b8u: goto label_2523b8;
        case 0x2523f8u: goto label_2523f8;
        case 0x252468u: goto label_252468;
        case 0x252480u: goto label_252480;
        case 0x2524d8u: goto label_2524d8;
        default: break;
    }

    ctx->pc = 0x251fa8u;

    // 0x251fa8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x251fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x251fac: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x251facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x251fb0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x251fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x251fb4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x251fb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fb8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x251fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x251fbc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x251fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fc0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x251fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x251fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x251fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fc8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x251fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x251fcc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x251fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x251fd0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x251fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x251fd4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x251fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x251fd8: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x251fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x251fdc: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x251FDCu;
    {
        const bool branch_taken_0x251fdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x251FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FDCu;
        // 0x251fe0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fdc) {
            ctx->pc = 0x252014u;
            goto label_252014;
        }
    }
    ctx->pc = 0x251FE4u;
    // 0x251fe4: 0xc098552  jal         func_261548
    ctx->pc = 0x251FE4u;
    SET_GPR_U32(ctx, 31, 0x251FECu);
    ctx->pc = 0x251FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FE4u;
    // 0x251fe8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x251FE4u, 0x251FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FECu;
label_251fec:
    // 0x251fec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ff0: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x251FF0u;
    {
        const bool branch_taken_0x251ff0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ff0) {
            ctx->pc = 0x251FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251FF0u;
            // 0x251ff4: 0xaed20000  sw          $s2, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252000u;
            goto label_252000;
        }
    }
    ctx->pc = 0x251FF8u;
    // 0x251ff8: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x251FF8u;
    {
        const bool branch_taken_0x251ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FF8u;
        // 0x251ffc: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ff8) {
            ctx->pc = 0x2524E0u;
            goto label_2524e0;
        }
    }
    ctx->pc = 0x252000u;
label_252000:
    // 0x252000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252004: 0xa2420005  sb          $v0, 0x5($s2)
    ctx->pc = 0x252004u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x252008: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x252008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x25200c: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x25200cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x252010: 0xa6400006  sh          $zero, 0x6($s2)
    ctx->pc = 0x252010u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
label_252014:
    // 0x252014: 0x2623fff7  addiu       $v1, $s1, -0x9
    ctx->pc = 0x252014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x252018: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x252018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x25201c: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x25201Cu;
    {
        const bool branch_taken_0x25201c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25201Cu;
        // 0x252020: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25201c) {
            ctx->pc = 0x2524B0u;
            goto label_2524b0;
        }
    }
    ctx->pc = 0x252024u;
    // 0x252024: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252028: 0x24426e30  addiu       $v0, $v0, 0x6E30
    ctx->pc = 0x252028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
    // 0x25202c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252030: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252034: 0x800008  jr          $a0
    ctx->pc = 0x252034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25203Cu: goto label_25203c;
            case 0x2520F8u: goto label_2520f8;
            case 0x25211Cu: goto label_25211c;
            case 0x25214Cu: goto label_25214c;
            case 0x25232Cu: goto label_25232c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252034u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25203Cu;
label_25203c:
    // 0x25203c: 0x120000ca  beqz        $s0, . + 4 + (0xCA << 2)
    ctx->pc = 0x25203Cu;
    {
        const bool branch_taken_0x25203c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x252040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25203Cu;
        // 0x252040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25203c) {
            ctx->pc = 0x252368u;
            goto label_252368;
        }
    }
    ctx->pc = 0x252044u;
    // 0x252044: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x252044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x252048: 0x5462011a  bnel        $v1, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x252048u;
    {
        const bool branch_taken_0x252048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252048) {
            ctx->pc = 0x25204Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252048u;
            // 0x25204c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252050u;
    // 0x252050: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x252050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x252054: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252058: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x252058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x25205c: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x25205cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x252060: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x252060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252064: 0xc08a254  jal         func_228950
    ctx->pc = 0x252064u;
    SET_GPR_U32(ctx, 31, 0x25206Cu);
    ctx->pc = 0x252068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252064u;
    // 0x252068: 0xbba30000  swr         $v1, 0x0($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252064u, 0x25206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25206Cu;
label_25206c:
    // 0x25206c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x25206cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252070: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252070u;
    {
        const bool branch_taken_0x252070 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x252074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252070u;
        // 0x252074: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252070) {
            ctx->pc = 0x252080u;
            goto label_252080;
        }
    }
    ctx->pc = 0x252078u;
    // 0x252078: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x252078u;
    {
        const bool branch_taken_0x252078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252078u;
        // 0x25207c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252078) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252080u;
label_252080:
    // 0x252080: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x252080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x252084: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x252084u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x252088: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252088u;
    {
        const bool branch_taken_0x252088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252088) {
            ctx->pc = 0x25208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252088u;
            // 0x25208c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252090u;
            goto label_252090;
        }
    }
    ctx->pc = 0x252090u;
label_252090:
    // 0x252090: 0x8ca41198  lw          $a0, 0x1198($a1)
    ctx->pc = 0x252090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4504)));
    // 0x252094: 0x1810  mfhi        $v1
    ctx->pc = 0x252094u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x252098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25209c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2520a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2520a4: 0x0  nop
    ctx->pc = 0x2520a4u;
    // NOP
label_2520a8:
    // 0x2520a8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2520A8u;
    {
        const bool branch_taken_0x2520a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520A8u;
        // 0x2520ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520a8) {
            ctx->pc = 0x2520D8u;
            goto label_2520d8;
        }
    }
    ctx->pc = 0x2520B0u;
    // 0x2520b0: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2520b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2520b4: 0x5446fffc  bnel        $v0, $a2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2520B4u;
    {
        const bool branch_taken_0x2520b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2520b4) {
            ctx->pc = 0x2520B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520B4u;
            // 0x2520b8: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2520A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2520a8;
        }
    }
    ctx->pc = 0x2520BCu;
    // 0x2520bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2520bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2520c0: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x2520c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2520c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2520c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2520c8: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2520C8u;
    {
        const bool branch_taken_0x2520c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2520c8) {
            ctx->pc = 0x2520CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520C8u;
            // 0x2520cc: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2520A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2520a8;
        }
    }
    ctx->pc = 0x2520D0u;
    // 0x2520d0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2520D0u;
    {
        const bool branch_taken_0x2520d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2520d0) {
            ctx->pc = 0x2520D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520D0u;
            // 0x2520d4: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2520D8u;
            goto label_2520d8;
        }
    }
    ctx->pc = 0x2520D8u;
label_2520d8:
    // 0x2520d8: 0x522000f6  beql        $s1, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2520D8u;
    {
        const bool branch_taken_0x2520d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2520d8) {
            ctx->pc = 0x2520DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520D8u;
            // 0x2520dc: 0x2415007d  addiu       $s5, $zero, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x2520E0u;
    // 0x2520e0: 0x86220030  lh          $v0, 0x30($s1)
    ctx->pc = 0x2520e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2520e4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2520e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2520e8: 0x504000f2  beql        $v0, $zero, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2520E8u;
    {
        const bool branch_taken_0x2520e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2520e8) {
            ctx->pc = 0x2520ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520E8u;
            // 0x2520ec: 0x2415007d  addiu       $s5, $zero, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x2520F0u;
    // 0x2520f0: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2520F0u;
    {
        const bool branch_taken_0x2520f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520F0u;
        // 0x2520f4: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520f0) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x2520F8u;
label_2520f8:
    // 0x2520f8: 0x1200009b  beqz        $s0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2520F8u;
    {
        const bool branch_taken_0x2520f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520F8u;
        // 0x2520fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520f8) {
            ctx->pc = 0x252368u;
            goto label_252368;
        }
    }
    ctx->pc = 0x252100u;
    // 0x252100: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x252100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x252104: 0x546200eb  bnel        $v1, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x252104u;
    {
        const bool branch_taken_0x252104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252104) {
            ctx->pc = 0x252108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252104u;
            // 0x252108: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x25210Cu;
    // 0x25210c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x252110: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x252110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252114: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x252114u;
    {
        const bool branch_taken_0x252114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252114u;
        // 0x252118: 0xa2430004  sb          $v1, 0x4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252114) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x25211Cu;
label_25211c:
    // 0x25211c: 0x12000092  beqz        $s0, . + 4 + (0x92 << 2)
    ctx->pc = 0x25211Cu;
    {
        const bool branch_taken_0x25211c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x252120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25211Cu;
        // 0x252120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25211c) {
            ctx->pc = 0x252368u;
            goto label_252368;
        }
    }
    ctx->pc = 0x252124u;
    // 0x252124: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x252124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x252128: 0x546200e2  bnel        $v1, $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x252128u;
    {
        const bool branch_taken_0x252128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252128) {
            ctx->pc = 0x25212Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252128u;
            // 0x25212c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252130u;
    // 0x252130: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x252130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x252134: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x252134u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252138: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x252138u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25213c: 0x506000dd  beql        $v1, $zero, . + 4 + (0xDD << 2)
    ctx->pc = 0x25213Cu;
    {
        const bool branch_taken_0x25213c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25213c) {
            ctx->pc = 0x252140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25213Cu;
            // 0x252140: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252144u;
    // 0x252144: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x252144u;
    {
        const bool branch_taken_0x252144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252144u;
        // 0x252148: 0xa2460005  sb          $a2, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252144) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x25214Cu;
label_25214c:
    // 0x25214c: 0x12000086  beqz        $s0, . + 4 + (0x86 << 2)
    ctx->pc = 0x25214Cu;
    {
        const bool branch_taken_0x25214c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x252150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25214Cu;
        // 0x252150: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25214c) {
            ctx->pc = 0x252368u;
            goto label_252368;
        }
    }
    ctx->pc = 0x252154u;
    // 0x252154: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x252154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x252158: 0x546200d6  bnel        $v1, $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x252158u;
    {
        const bool branch_taken_0x252158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252158) {
            ctx->pc = 0x25215Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252158u;
            // 0x25215c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252160u;
    // 0x252160: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x252160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x252164: 0xc08a254  jal         func_228950
    ctx->pc = 0x252164u;
    SET_GPR_U32(ctx, 31, 0x25216Cu);
    ctx->pc = 0x252168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252164u;
    // 0x252168: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252164u, 0x25216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25216Cu;
label_25216c:
    // 0x25216c: 0x8a700003  lwl         $s0, 0x3($s3)
    ctx->pc = 0x25216cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x252170: 0x9a700000  lwr         $s0, 0x0($s3)
    ctx->pc = 0x252170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x252174: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x252174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x252178: 0xc08a254  jal         func_228950
    ctx->pc = 0x252178u;
    SET_GPR_U32(ctx, 31, 0x252180u);
    ctx->pc = 0x25217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252178u;
    // 0x25217c: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252178u, 0x252180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252180u;
label_252180:
    // 0x252180: 0x560200cc  bnel        $s0, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x252180u;
    {
        const bool branch_taken_0x252180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x252180) {
            ctx->pc = 0x252184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252180u;
            // 0x252184: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252188u;
    // 0x252188: 0x8a700007  lwl         $s0, 0x7($s3)
    ctx->pc = 0x252188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x25218c: 0x9a700004  lwr         $s0, 0x4($s3)
    ctx->pc = 0x25218cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x252190: 0xc08a254  jal         func_228950
    ctx->pc = 0x252190u;
    SET_GPR_U32(ctx, 31, 0x252198u);
    ctx->pc = 0x252194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252190u;
    // 0x252194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252190u, 0x252198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252198u;
label_252198:
    // 0x252198: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x252198u;
    {
        const bool branch_taken_0x252198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x25219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252198u;
        // 0x25219c: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252198) {
            ctx->pc = 0x2521F8u;
            goto label_2521f8;
        }
    }
    ctx->pc = 0x2521A0u;
    // 0x2521a0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2521a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2521a4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2521a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2521a8: 0xc048c96  jal         func_123258
    ctx->pc = 0x2521A8u;
    SET_GPR_U32(ctx, 31, 0x2521B0u);
    ctx->pc = 0x2521ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2521A8u;
    // 0x2521ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x2521A8u, 0x2521B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521B0u;
label_2521b0:
    // 0x2521b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2521b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2521b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2521b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2521b8: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x2521b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2521bc: 0xa3a30015  sb          $v1, 0x15($sp)
    ctx->pc = 0x2521bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x2521c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2521c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2521c4: 0x8a620003  lwl         $v0, 0x3($s3)
    ctx->pc = 0x2521c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2521c8: 0x9a620000  lwr         $v0, 0x0($s3)
    ctx->pc = 0x2521c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2521cc: 0xaba2001b  swl         $v0, 0x1B($sp)
    ctx->pc = 0x2521ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2521d0: 0xbba20018  swr         $v0, 0x18($sp)
    ctx->pc = 0x2521d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2521d4: 0xc090bda  jal         func_242F68
    ctx->pc = 0x2521D4u;
    SET_GPR_U32(ctx, 31, 0x2521DCu);
    ctx->pc = 0x2521D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2521D4u;
    // 0x2521d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242F68u, 0x2521D4u, 0x2521DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521DCu;
label_2521dc:
    // 0x2521dc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2521dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2521e0: 0x10a0009a  beqz        $a1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2521E0u;
    {
        const bool branch_taken_0x2521e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2521E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2521E0u;
        // 0x2521e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521e0) {
            ctx->pc = 0x25244Cu;
            goto label_25244c;
        }
    }
    ctx->pc = 0x2521E8u;
    // 0x2521e8: 0xc090c4c  jal         func_243130
    ctx->pc = 0x2521E8u;
    SET_GPR_U32(ctx, 31, 0x2521F0u);
    ctx->pc = 0x2521ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2521E8u;
    // 0x2521ec: 0x8cb10048  lw          $s1, 0x48($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x2521E8u, 0x2521F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521F0u;
label_2521f0:
    // 0x2521f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2521F0u;
    {
        const bool branch_taken_0x2521f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2521f0) {
            ctx->pc = 0x252250u;
            goto label_252250;
        }
    }
    ctx->pc = 0x2521F8u;
label_2521f8:
    // 0x2521f8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2521f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2521fc: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x2521fcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x252200: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252200u;
    {
        const bool branch_taken_0x252200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252200) {
            ctx->pc = 0x252204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252200u;
            // 0x252204: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252208u;
            goto label_252208;
        }
    }
    ctx->pc = 0x252208u;
label_252208:
    // 0x252208: 0x8ca41198  lw          $a0, 0x1198($a1)
    ctx->pc = 0x252208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4504)));
    // 0x25220c: 0x1810  mfhi        $v1
    ctx->pc = 0x25220cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x252210: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252218: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25221c: 0x0  nop
    ctx->pc = 0x25221cu;
    // NOP
label_252220:
    // 0x252220: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x252220u;
    {
        const bool branch_taken_0x252220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252220u;
        // 0x252224: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252220) {
            ctx->pc = 0x252250u;
            goto label_252250;
        }
    }
    ctx->pc = 0x252228u;
    // 0x252228: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x252228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x25222c: 0x5450fffc  bnel        $v0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x25222Cu;
    {
        const bool branch_taken_0x25222c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x25222c) {
            ctx->pc = 0x252230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25222Cu;
            // 0x252230: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252220;
        }
    }
    ctx->pc = 0x252234u;
    // 0x252234: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x252234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x252238: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x252238u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x25223c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x252240: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x252240u;
    {
        const bool branch_taken_0x252240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252240) {
            ctx->pc = 0x252244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252240u;
            // 0x252244: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252220;
        }
    }
    ctx->pc = 0x252248u;
    // 0x252248: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252248u;
    {
        const bool branch_taken_0x252248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x252248) {
            ctx->pc = 0x25224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252248u;
            // 0x25224c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252250u;
            goto label_252250;
        }
    }
    ctx->pc = 0x252250u;
label_252250:
    // 0x252250: 0x52200098  beql        $s1, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x252250u;
    {
        const bool branch_taken_0x252250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x252250) {
            ctx->pc = 0x252254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252250u;
            // 0x252254: 0x2415007d  addiu       $s5, $zero, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252258u;
    // 0x252258: 0x86220030  lh          $v0, 0x30($s1)
    ctx->pc = 0x252258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x25225c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x25225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x252260: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x252260u;
    {
        const bool branch_taken_0x252260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252260u;
        // 0x252264: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252260) {
            ctx->pc = 0x25244Cu;
            goto label_25244c;
        }
    }
    ctx->pc = 0x252268u;
    // 0x252268: 0x96470006  lhu         $a3, 0x6($s2)
    ctx->pc = 0x252268u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x25226c: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x25226Cu;
    {
        const bool branch_taken_0x25226c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x252270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25226Cu;
        // 0x252270: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25226c) {
            ctx->pc = 0x2522E8u;
            goto label_2522e8;
        }
    }
    ctx->pc = 0x252274u;
    // 0x252274: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x252274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x252278: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x252278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25227c: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25227Cu;
    {
        const bool branch_taken_0x25227c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x25227c) {
            ctx->pc = 0x252280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25227Cu;
            // 0x252280: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522A0u;
            goto label_2522a0;
        }
    }
    ctx->pc = 0x252284u;
    // 0x252284: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252288: 0x8a620003  lwl         $v0, 0x3($s3)
    ctx->pc = 0x252288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25228c: 0x9a620000  lwr         $v0, 0x0($s3)
    ctx->pc = 0x25228cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x252290: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x252290u;
    {
        const bool branch_taken_0x252290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x252294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252290u;
        // 0x252294: 0x204102a  slt         $v0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252290) {
            ctx->pc = 0x2522D8u;
            goto label_2522d8;
        }
    }
    ctx->pc = 0x252298u;
    // 0x252298: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x252298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25229c: 0x0  nop
    ctx->pc = 0x25229cu;
    // NOP
label_2522a0:
    // 0x2522a0: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x2522a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2522a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2522A4u;
    {
        const bool branch_taken_0x2522a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522A4u;
        // 0x2522a8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522a4) {
            ctx->pc = 0x2522E8u;
            goto label_2522e8;
        }
    }
    ctx->pc = 0x2522ACu;
    // 0x2522ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2522acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2522b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2522b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2522b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2522b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2522b8: 0x5471fff9  bnel        $v1, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2522B8u;
    {
        const bool branch_taken_0x2522b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2522b8) {
            ctx->pc = 0x2522BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2522B8u;
            // 0x2522bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2522a0;
        }
    }
    ctx->pc = 0x2522C0u;
    // 0x2522c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2522c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2522c4: 0x8a620003  lwl         $v0, 0x3($s3)
    ctx->pc = 0x2522c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2522c8: 0x9a620000  lwr         $v0, 0x0($s3)
    ctx->pc = 0x2522c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2522cc: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2522CCu;
    {
        const bool branch_taken_0x2522cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2522cc) {
            ctx->pc = 0x2522D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2522CCu;
            // 0x2522d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2522a0;
        }
    }
    ctx->pc = 0x2522D4u;
    // 0x2522d4: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x2522d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2522d8:
    // 0x2522d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2522D8u;
    {
        const bool branch_taken_0x2522d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522D8u;
        // 0x2522dc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522d8) {
            ctx->pc = 0x2522ECu;
            goto label_2522ec;
        }
    }
    ctx->pc = 0x2522E0u;
    // 0x2522e0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2522E0u;
    {
        const bool branch_taken_0x2522e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522E0u;
        // 0x2522e4: 0x24150070  addiu       $s5, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522e0) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x2522E8u;
label_2522e8:
    // 0x2522e8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2522e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2522ec:
    // 0x2522ec: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2522ECu;
    {
        const bool branch_taken_0x2522ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2522F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522ECu;
        // 0x2522f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522ec) {
            ctx->pc = 0x2522FCu;
            goto label_2522fc;
        }
    }
    ctx->pc = 0x2522F4u;
    // 0x2522f4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2522F4u;
    {
        const bool branch_taken_0x2522f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522F4u;
        // 0x2522f8: 0x24150081  addiu       $s5, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522f4) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x2522FCu;
label_2522fc:
    // 0x2522fc: 0xc092bbe  jal         func_24AEF8
    ctx->pc = 0x2522FCu;
    SET_GPR_U32(ctx, 31, 0x252304u);
    ctx->pc = 0x252300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2522FCu;
    // 0x252300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AEF8u, 0x2522FCu, 0x252304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252304u;
label_252304:
    // 0x252304: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x252304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x252308: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x252308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25230c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25230Cu;
    {
        const bool branch_taken_0x25230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25230Cu;
        // 0x252310: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25230c) {
            ctx->pc = 0x25231Cu;
            goto label_25231c;
        }
    }
    ctx->pc = 0x252314u;
    // 0x252314: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x252314u;
    {
        const bool branch_taken_0x252314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252314u;
        // 0x252318: 0x24150069  addiu       $s5, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252314) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x25231Cu;
label_25231c:
    // 0x25231c: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x25231cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x252320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x252324: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x252324u;
    {
        const bool branch_taken_0x252324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252324u;
        // 0x252328: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252324) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x25232Cu;
label_25232c:
    // 0x25232c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x25232Cu;
    {
        const bool branch_taken_0x25232c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x252330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25232Cu;
        // 0x252330: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25232c) {
            ctx->pc = 0x252368u;
            goto label_252368;
        }
    }
    ctx->pc = 0x252334u;
    // 0x252334: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x252334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x252338: 0x5462005e  bnel        $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x252338u;
    {
        const bool branch_taken_0x252338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252338) {
            ctx->pc = 0x25233Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252338u;
            // 0x25233c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252340u;
    // 0x252340: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x252340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x252344: 0xc08a254  jal         func_228950
    ctx->pc = 0x252344u;
    SET_GPR_U32(ctx, 31, 0x25234Cu);
    ctx->pc = 0x252348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252344u;
    // 0x252348: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252344u, 0x25234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25234Cu;
label_25234c:
    // 0x25234c: 0x8a740003  lwl         $s4, 0x3($s3)
    ctx->pc = 0x25234cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 20) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 20, (int32_t)merged); }
    // 0x252350: 0x9a740000  lwr         $s4, 0x0($s3)
    ctx->pc = 0x252350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 20) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 20) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 20, merged64); }
    // 0x252354: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x252354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x252358: 0xc08a254  jal         func_228950
    ctx->pc = 0x252358u;
    SET_GPR_U32(ctx, 31, 0x252360u);
    ctx->pc = 0x25235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252358u;
    // 0x25235c: 0x2828024  and         $s0, $s4, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252358u, 0x252360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252360u;
label_252360:
    // 0x252360: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252360u;
    {
        const bool branch_taken_0x252360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x252360) {
            ctx->pc = 0x252370u;
            goto label_252370;
        }
    }
    ctx->pc = 0x252368u;
label_252368:
    // 0x252368: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x252368u;
    {
        const bool branch_taken_0x252368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252368u;
        // 0x25236c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252368) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252370u;
label_252370:
    // 0x252370: 0x8a700007  lwl         $s0, 0x7($s3)
    ctx->pc = 0x252370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x252374: 0x9a700004  lwr         $s0, 0x4($s3)
    ctx->pc = 0x252374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x252378: 0xc08a254  jal         func_228950
    ctx->pc = 0x252378u;
    SET_GPR_U32(ctx, 31, 0x252380u);
    ctx->pc = 0x25237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252378u;
    // 0x25237c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252378u, 0x252380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252380u;
label_252380:
    // 0x252380: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252380u;
    {
        const bool branch_taken_0x252380 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x252384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252380u;
        // 0x252384: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252380) {
            ctx->pc = 0x252390u;
            goto label_252390;
        }
    }
    ctx->pc = 0x252388u;
    // 0x252388: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x252388u;
    {
        const bool branch_taken_0x252388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252388u;
        // 0x25238c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252388) {
            ctx->pc = 0x2523F0u;
            goto label_2523f0;
        }
    }
    ctx->pc = 0x252390u;
label_252390:
    // 0x252390: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x252390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x252394: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x252394u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x252398: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252398u;
    {
        const bool branch_taken_0x252398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252398) {
            ctx->pc = 0x25239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252398u;
            // 0x25239c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523A0u;
            goto label_2523a0;
        }
    }
    ctx->pc = 0x2523A0u;
label_2523a0:
    // 0x2523a0: 0x8ca41198  lw          $a0, 0x1198($a1)
    ctx->pc = 0x2523a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4504)));
    // 0x2523a4: 0x1810  mfhi        $v1
    ctx->pc = 0x2523a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2523a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2523a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2523ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2523acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2523b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2523b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2523b4: 0x0  nop
    ctx->pc = 0x2523b4u;
    // NOP
label_2523b8:
    // 0x2523b8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2523B8u;
    {
        const bool branch_taken_0x2523b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523B8u;
        // 0x2523bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523b8) {
            ctx->pc = 0x2523E8u;
            goto label_2523e8;
        }
    }
    ctx->pc = 0x2523C0u;
    // 0x2523c0: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2523c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2523c4: 0x5450fffc  bnel        $v0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2523C4u;
    {
        const bool branch_taken_0x2523c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2523c4) {
            ctx->pc = 0x2523C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2523C4u;
            // 0x2523c8: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2523b8;
        }
    }
    ctx->pc = 0x2523CCu;
    // 0x2523cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2523ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2523d0: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x2523d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2523d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2523d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2523d8: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2523D8u;
    {
        const bool branch_taken_0x2523d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2523d8) {
            ctx->pc = 0x2523DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2523D8u;
            // 0x2523dc: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2523b8;
        }
    }
    ctx->pc = 0x2523E0u;
    // 0x2523e0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2523E0u;
    {
        const bool branch_taken_0x2523e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2523e0) {
            ctx->pc = 0x2523E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2523E0u;
            // 0x2523e4: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523E8u;
            goto label_2523e8;
        }
    }
    ctx->pc = 0x2523E8u;
label_2523e8:
    // 0x2523e8: 0x52200032  beql        $s1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2523E8u;
    {
        const bool branch_taken_0x2523e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2523e8) {
            ctx->pc = 0x2523ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2523E8u;
            // 0x2523ec: 0x2415007d  addiu       $s5, $zero, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x2523F0u;
label_2523f0:
    // 0x2523f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2523f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523f4: 0x96470006  lhu         $a3, 0x6($s2)
    ctx->pc = 0x2523f4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_2523f8:
    // 0x2523f8: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x2523f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2523fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2523FCu;
    {
        const bool branch_taken_0x2523fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2523fc) {
            ctx->pc = 0x252444u;
            goto label_252444;
        }
    }
    ctx->pc = 0x252404u;
    // 0x252404: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x252404u;
    {
        const bool branch_taken_0x252404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252404u;
        // 0x252408: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252404) {
            ctx->pc = 0x25242Cu;
            goto label_25242c;
        }
    }
    ctx->pc = 0x25240Cu;
    // 0x25240c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x25240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x252410: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x252410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x252414: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252418: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x252418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25241c: 0x5491fff6  bnel        $a0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x25241Cu;
    {
        const bool branch_taken_0x25241c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x25241c) {
            ctx->pc = 0x252420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25241Cu;
            // 0x252420: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2523f8;
        }
    }
    ctx->pc = 0x252424u;
    // 0x252424: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252424u;
    {
        const bool branch_taken_0x252424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252424u;
        // 0x252428: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252424) {
            ctx->pc = 0x25243Cu;
            goto label_25243c;
        }
    }
    ctx->pc = 0x25242Cu;
label_25242c:
    // 0x25242c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x25242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x252430: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x252430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x252434: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252438: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25243c:
    // 0x25243c: 0x5494ffee  bnel        $a0, $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x25243Cu;
    {
        const bool branch_taken_0x25243c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x25243c) {
            ctx->pc = 0x252440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25243Cu;
            // 0x252440: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2523f8;
        }
    }
    ctx->pc = 0x252444u;
label_252444:
    // 0x252444: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x252444u;
    {
        const bool branch_taken_0x252444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x252448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252444u;
        // 0x252448: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252444) {
            ctx->pc = 0x252454u;
            goto label_252454;
        }
    }
    ctx->pc = 0x25244Cu;
label_25244c:
    // 0x25244c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25244Cu;
    {
        const bool branch_taken_0x25244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25244Cu;
        // 0x252450: 0x2415007d  addiu       $s5, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25244c) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x252454u;
label_252454:
    // 0x252454: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x252454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x252458: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x252458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25245c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25245cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x252460: 0xc092c44  jal         func_24B110
    ctx->pc = 0x252460u;
    SET_GPR_U32(ctx, 31, 0x252468u);
    ctx->pc = 0x252464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252460u;
    // 0x252464: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B110u, 0x252460u, 0x252468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252468u;
label_252468:
    // 0x252468: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x252468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x25246c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x25246cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252470: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x252470u;
    {
        const bool branch_taken_0x252470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252470u;
        // 0x252474: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252470) {
            ctx->pc = 0x2524A0u;
            goto label_2524a0;
        }
    }
    ctx->pc = 0x252478u;
    // 0x252478: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x252478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25247c: 0x0  nop
    ctx->pc = 0x25247cu;
    // NOP
label_252480:
    // 0x252480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252484: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x252484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x252488: 0xac62fffc  sw          $v0, -0x4($v1)
    ctx->pc = 0x252488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
    // 0x25248c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x252490: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x252490u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x252494: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x252494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252498: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x252498u;
    {
        const bool branch_taken_0x252498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252498) {
            ctx->pc = 0x252480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252480;
        }
    }
    ctx->pc = 0x2524A0u;
label_2524a0:
    // 0x2524a0: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2524a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2524a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2524a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2524a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2524A8u;
    {
        const bool branch_taken_0x2524a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524A8u;
        // 0x2524ac: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524a8) {
            ctx->pc = 0x2524B4u;
            goto label_2524b4;
        }
    }
    ctx->pc = 0x2524B0u;
label_2524b0:
    // 0x2524b0: 0x2415005f  addiu       $s5, $zero, 0x5F
    ctx->pc = 0x2524b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_2524b4:
    // 0x2524b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2524b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2524b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2524B8u;
    {
        const bool branch_taken_0x2524b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2524BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524B8u;
        // 0x2524bc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524b8) {
            ctx->pc = 0x2524E0u;
            goto label_2524e0;
        }
    }
    ctx->pc = 0x2524C0u;
    // 0x2524c0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2524c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2524c4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x2524c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2524c8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2524C8u;
    {
        const bool branch_taken_0x2524c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2524CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524C8u;
        // 0x2524cc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524c8) {
            ctx->pc = 0x2524E0u;
            goto label_2524e0;
        }
    }
    ctx->pc = 0x2524D0u;
    // 0x2524d0: 0xc098560  jal         func_261580
    ctx->pc = 0x2524D0u;
    SET_GPR_U32(ctx, 31, 0x2524D8u);
    ctx->pc = 0x2524D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524D0u;
    // 0x2524d4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2524D0u, 0x2524D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524D8u;
label_2524d8:
    // 0x2524d8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2524d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x2524dc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2524dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2524e0:
    // 0x2524e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2524e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2524e4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2524e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2524e8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2524e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2524ec: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2524ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2524f0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2524f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2524f4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2524f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2524f8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2524f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2524fc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2524fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252500: 0x3e00008  jr          $ra
    ctx->pc = 0x252500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252500u;
        // 0x252504: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252508u;
}

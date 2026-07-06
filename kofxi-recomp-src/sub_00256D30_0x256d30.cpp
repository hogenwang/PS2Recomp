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

// Function: sub_00256D30
// Address: 0x256d30 - 0x257300
void sub_00256D30_0x256d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256D30_0x256d30");
#endif

    switch (ctx->pc) {
        case 0x256d7cu: goto label_256d7c;
        case 0x256d90u: goto label_256d90;
        case 0x256da4u: goto label_256da4;
        case 0x256df8u: goto label_256df8;
        case 0x256e00u: goto label_256e00;
        case 0x256ec4u: goto label_256ec4;
        case 0x256ed0u: goto label_256ed0;
        case 0x256f20u: goto label_256f20;
        case 0x256f30u: goto label_256f30;
        case 0x256f88u: goto label_256f88;
        case 0x256fa8u: goto label_256fa8;
        case 0x256fb8u: goto label_256fb8;
        case 0x256fc8u: goto label_256fc8;
        case 0x256fd8u: goto label_256fd8;
        case 0x257064u: goto label_257064;
        case 0x257078u: goto label_257078;
        case 0x257084u: goto label_257084;
        case 0x2570fcu: goto label_2570fc;
        case 0x257158u: goto label_257158;
        case 0x2571e8u: goto label_2571e8;
        case 0x257210u: goto label_257210;
        case 0x257224u: goto label_257224;
        case 0x257254u: goto label_257254;
        case 0x257264u: goto label_257264;
        case 0x257278u: goto label_257278;
        case 0x25729cu: goto label_25729c;
        case 0x2572b4u: goto label_2572b4;
        default: break;
    }

    ctx->pc = 0x256d30u;

    // 0x256d30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x256d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x256d34: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x256d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x256d38: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x256d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x256d3c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x256d3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d40: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x256d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x256d44: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x256d44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d48: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x256d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x256d4c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x256d4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d50: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x256d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x256d54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x256d54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d58: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x256d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x256d5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x256d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x256d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x256d64: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x256d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d68: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x256d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x256d6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x256d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x256d70: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x256d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x256d74: 0xc08c682  jal         func_231A08
    ctx->pc = 0x256D74u;
    SET_GPR_U32(ctx, 31, 0x256D7Cu);
    ctx->pc = 0x256D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D74u;
    // 0x256d78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x256D74u, 0x256D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D7Cu;
label_256d7c:
    // 0x256d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x256d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x256d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x256d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d88: 0xc095b06  jal         func_256C18
    ctx->pc = 0x256D88u;
    SET_GPR_U32(ctx, 31, 0x256D90u);
    ctx->pc = 0x256D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D88u;
    // 0x256d8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256C18u, 0x256D88u, 0x256D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D90u;
label_256d90:
    // 0x256d90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x256d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d94: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256D94u;
    {
        const bool branch_taken_0x256d94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x256d94) {
            ctx->pc = 0x256D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256D94u;
            // 0x256d98: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256DACu;
            goto label_256dac;
        }
    }
    ctx->pc = 0x256D9Cu;
    // 0x256d9c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x256D9Cu;
    SET_GPR_U32(ctx, 31, 0x256DA4u);
    ctx->pc = 0x256DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D9Cu;
    // 0x256da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x256D9Cu, 0x256DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DA4u;
label_256da4:
    // 0x256da4: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x256DA4u;
    {
        const bool branch_taken_0x256da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DA4u;
        // 0x256da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256da4) {
            ctx->pc = 0x2572D0u;
            goto label_2572d0;
        }
    }
    ctx->pc = 0x256DACu;
label_256dac:
    // 0x256dac: 0x8ac3000b  lwl         $v1, 0xB($s6)
    ctx->pc = 0x256dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x256db0: 0x9ac30008  lwr         $v1, 0x8($s6)
    ctx->pc = 0x256db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x256db4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x256db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x256db8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x256DB8u;
    {
        const bool branch_taken_0x256db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x256DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DB8u;
        // 0x256dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256db8) {
            ctx->pc = 0x256DF0u;
            goto label_256df0;
        }
    }
    ctx->pc = 0x256DC0u;
    // 0x256dc0: 0x8ac50007  lwl         $a1, 0x7($s6)
    ctx->pc = 0x256dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x256dc4: 0x9ac50004  lwr         $a1, 0x4($s6)
    ctx->pc = 0x256dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x256dc8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x256dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x256dcc: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x256dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x256dd0: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256DD0u;
    {
        const bool branch_taken_0x256dd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x256dd0) {
            ctx->pc = 0x256DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256DD0u;
            // 0x256dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256DF0u;
            goto label_256df0;
        }
    }
    ctx->pc = 0x256DD8u;
    // 0x256dd8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x256dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x256ddc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x256ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x256de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256de4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x256de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x256de8: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256DE8u;
    {
        const bool branch_taken_0x256de8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x256DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DE8u;
        // 0x256dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256de8) {
            ctx->pc = 0x256E0Cu;
            goto label_256e0c;
        }
    }
    ctx->pc = 0x256DF0u;
label_256df0:
    // 0x256df0: 0xc095eac  jal         func_257AB0
    ctx->pc = 0x256DF0u;
    SET_GPR_U32(ctx, 31, 0x256DF8u);
    ctx->pc = 0x256DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DF0u;
    // 0x256df4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AB0u, 0x256DF0u, 0x256DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DF8u;
label_256df8:
    // 0x256df8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x256DF8u;
    SET_GPR_U32(ctx, 31, 0x256E00u);
    ctx->pc = 0x256DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DF8u;
    // 0x256dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x256DF8u, 0x256E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E00u;
label_256e00:
    // 0x256e00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x256e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x256e04: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x256E04u;
    {
        const bool branch_taken_0x256e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E04u;
        // 0x256e08: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e04) {
            ctx->pc = 0x2572D0u;
            goto label_2572d0;
        }
    }
    ctx->pc = 0x256E0Cu;
label_256e0c:
    // 0x256e0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x256e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256e10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x256E10u;
    {
        const bool branch_taken_0x256e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E10u;
        // 0x256e14: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e10) {
            ctx->pc = 0x256E28u;
            goto label_256e28;
        }
    }
    ctx->pc = 0x256E18u;
    // 0x256e18: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x256e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x256e1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x256e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256e20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x256e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x256e24: 0x0  nop
    ctx->pc = 0x256e24u;
    // NOP
label_256e28:
    // 0x256e28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x256e2c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x256e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x256e30: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x256e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x256e34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256E34u;
    {
        const bool branch_taken_0x256e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E34u;
        // 0x256e38: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e34) {
            ctx->pc = 0x256E48u;
            goto label_256e48;
        }
    }
    ctx->pc = 0x256E3Cu;
    // 0x256e3c: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x256e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x256e40: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x256e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x256e44: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x256e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_256e48:
    // 0x256e48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x256e4c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x256e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x256e50: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x256e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x256e54: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x256e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x256e58: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x256e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256e60: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x256e60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x256e64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256e68: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x256e68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x256e6c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x256e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256e70: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256E70u;
    {
        const bool branch_taken_0x256e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256e70) {
            ctx->pc = 0x256E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E70u;
            // 0x256e74: 0x96220088  lhu         $v0, 0x88($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E88u;
            goto label_256e88;
        }
    }
    ctx->pc = 0x256E78u;
    // 0x256e78: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x256e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256e7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x256E7Cu;
    {
        const bool branch_taken_0x256e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E7Cu;
        // 0x256e80: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e7c) {
            ctx->pc = 0x256EA0u;
            goto label_256ea0;
        }
    }
    ctx->pc = 0x256E84u;
    // 0x256e84: 0x0  nop
    ctx->pc = 0x256e84u;
    // NOP
label_256e88:
    // 0x256e88: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x256e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x256e8c: 0x24631228  addiu       $v1, $v1, 0x1228
    ctx->pc = 0x256e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
    // 0x256e90: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x256e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256e94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256e9c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x256e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_256ea0:
    // 0x256ea0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256ea4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x256ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256ea8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x256ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x256eac: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x256eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x256eb0: 0xdc821218  ld          $v0, 0x1218($a0)
    ctx->pc = 0x256eb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4632)));
    // 0x256eb4: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x256eb4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x256eb8: 0xfc821218  sd          $v0, 0x1218($a0)
    ctx->pc = 0x256eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4632), GPR_U64(ctx, 2));
    // 0x256ebc: 0xc08c698  jal         func_231A60
    ctx->pc = 0x256EBCu;
    SET_GPR_U32(ctx, 31, 0x256EC4u);
    ctx->pc = 0x256EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256EBCu;
    // 0x256ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x256EBCu, 0x256EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EC4u;
label_256ec4:
    // 0x256ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x256ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ec8: 0xc08c156  jal         func_230558
    ctx->pc = 0x256EC8u;
    SET_GPR_U32(ctx, 31, 0x256ED0u);
    ctx->pc = 0x256ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256EC8u;
    // 0x256ecc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230558u, 0x256EC8u, 0x256ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256ED0u;
label_256ed0:
    // 0x256ed0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x256ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ed4: 0x126000d5  beqz        $s3, . + 4 + (0xD5 << 2)
    ctx->pc = 0x256ED4u;
    {
        const bool branch_taken_0x256ed4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x256ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256ED4u;
        // 0x256ed8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ed4) {
            ctx->pc = 0x25722Cu;
            goto label_25722c;
        }
    }
    ctx->pc = 0x256EDCu;
    // 0x256edc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x256edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x256ee0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x256ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256ee4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256ee8: 0x50850001  beql        $a0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x256EE8u;
    {
        const bool branch_taken_0x256ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x256ee8) {
            ctx->pc = 0x256EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256EE8u;
            // 0x256eec: 0x8e720008  lw          $s2, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256EF0u;
            goto label_256ef0;
        }
    }
    ctx->pc = 0x256EF0u;
label_256ef0:
    // 0x256ef0: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x256ef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x256ef4: 0x14450014  bne         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x256EF4u;
    {
        const bool branch_taken_0x256ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x256ef4) {
            ctx->pc = 0x256F48u;
            goto label_256f48;
        }
    }
    ctx->pc = 0x256EFCu;
    // 0x256efc: 0x5240001f  beql        $s2, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x256EFCu;
    {
        const bool branch_taken_0x256efc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x256efc) {
            ctx->pc = 0x256F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256EFCu;
            // 0x256f00: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256F7Cu;
            goto label_256f7c;
        }
    }
    ctx->pc = 0x256F04u;
    // 0x256f04: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x256f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x256f08: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x256f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x256f0c: 0xaa420047  swl         $v0, 0x47($s2)
    ctx->pc = 0x256f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x256f10: 0xba420044  swr         $v0, 0x44($s2)
    ctx->pc = 0x256f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x256f14: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x256f14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x256f18: 0xc094006  jal         func_250018
    ctx->pc = 0x256F18u;
    SET_GPR_U32(ctx, 31, 0x256F20u);
    ctx->pc = 0x256F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F18u;
    // 0x256f1c: 0xa642001a  sh          $v0, 0x1A($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250018u, 0x256F18u, 0x256F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F20u;
label_256f20:
    // 0x256f20: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x256f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x256f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f28: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x256F28u;
    SET_GPR_U32(ctx, 31, 0x256F30u);
    ctx->pc = 0x256F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F28u;
    // 0x256f2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C8D0u, 0x256F28u, 0x256F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F30u;
label_256f30:
    // 0x256f30: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x256f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x256f34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256F34u;
    {
        const bool branch_taken_0x256f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f34) {
            ctx->pc = 0x256F48u;
            goto label_256f48;
        }
    }
    ctx->pc = 0x256F3Cu;
    // 0x256f3c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x256f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x256f40: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x256f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x256f44: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x256f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_256f48:
    // 0x256f48: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x256F48u;
    {
        const bool branch_taken_0x256f48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f48) {
            ctx->pc = 0x256F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F48u;
            // 0x256f4c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256F7Cu;
            goto label_256f7c;
        }
    }
    ctx->pc = 0x256F50u;
    // 0x256f50: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x256f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x256f54: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x256f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x256f58: 0x6a23001f  ldl         $v1, 0x1F($s1)
    ctx->pc = 0x256f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x256f5c: 0x6e230018  ldr         $v1, 0x18($s1)
    ctx->pc = 0x256f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x256f60: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x256f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x256f64: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x256f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f68: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x256f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f6c: 0xb243002f  sdl         $v1, 0x2F($s2)
    ctx->pc = 0x256f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f70: 0xb6430028  sdr         $v1, 0x28($s2)
    ctx->pc = 0x256f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256f74: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x256f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x256f78: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x256f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_256f7c:
    // 0x256f7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256f80: 0xc08a922  jal         func_22A488
    ctx->pc = 0x256F80u;
    SET_GPR_U32(ctx, 31, 0x256F88u);
    ctx->pc = 0x256F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F80u;
    // 0x256f84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x256F80u, 0x256F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F88u;
label_256f88:
    // 0x256f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x256f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f8c: 0x120000a7  beqz        $s0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x256F8Cu;
    {
        const bool branch_taken_0x256f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F8Cu;
        // 0x256f90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f8c) {
            ctx->pc = 0x25722Cu;
            goto label_25722c;
        }
    }
    ctx->pc = 0x256F94u;
    // 0x256f94: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x256f94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x256f98: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x256f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256f9c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x256f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x256fa0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x256FA0u;
    SET_GPR_U32(ctx, 31, 0x256FA8u);
    ctx->pc = 0x256FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FA0u;
    // 0x256fa4: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x256FA0u, 0x256FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FA8u;
label_256fa8:
    // 0x256fa8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x256FA8u;
    {
        const bool branch_taken_0x256fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FA8u;
        // 0x256fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fa8) {
            ctx->pc = 0x256FC0u;
            goto label_256fc0;
        }
    }
    ctx->pc = 0x256FB0u;
    // 0x256fb0: 0xc092f2e  jal         func_24BCB8
    ctx->pc = 0x256FB0u;
    SET_GPR_U32(ctx, 31, 0x256FB8u);
    ctx->pc = 0x256FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FB0u;
    // 0x256fb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BCB8u, 0x256FB0u, 0x256FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FB8u;
label_256fb8:
    // 0x256fb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256FB8u;
    {
        const bool branch_taken_0x256fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fb8) {
            ctx->pc = 0x256FD0u;
            goto label_256fd0;
        }
    }
    ctx->pc = 0x256FC0u;
label_256fc0:
    // 0x256fc0: 0xc08a996  jal         func_22A658
    ctx->pc = 0x256FC0u;
    SET_GPR_U32(ctx, 31, 0x256FC8u);
    ctx->pc = 0x256FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FC0u;
    // 0x256fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x256FC0u, 0x256FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FC8u;
label_256fc8:
    // 0x256fc8: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x256FC8u;
    {
        const bool branch_taken_0x256fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fc8) {
            ctx->pc = 0x25722Cu;
            goto label_25722c;
        }
    }
    ctx->pc = 0x256FD0u;
label_256fd0:
    // 0x256fd0: 0xc08a996  jal         func_22A658
    ctx->pc = 0x256FD0u;
    SET_GPR_U32(ctx, 31, 0x256FD8u);
    ctx->pc = 0x256FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FD0u;
    // 0x256fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x256FD0u, 0x256FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FD8u;
label_256fd8:
    // 0x256fd8: 0xde240090  ld          $a0, 0x90($s1)
    ctx->pc = 0x256fd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x256fdc: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x256fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x256fe0: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x256fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x256fe4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x256fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x256fe8: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x256FE8u;
    {
        const bool branch_taken_0x256fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x256FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FE8u;
        // 0x256fec: 0x8e500010  lw          $s0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fe8) {
            ctx->pc = 0x257040u;
            goto label_257040;
        }
    }
    ctx->pc = 0x256FF0u;
    // 0x256ff0: 0x4113e  dsrl32      $v0, $a0, 4
    ctx->pc = 0x256ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x256ff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256ff8: 0x96040028  lhu         $a0, 0x28($s0)
    ctx->pc = 0x256ff8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x256ffc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x256ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x257000: 0xa20200b7  sb          $v0, 0xB7($s0)
    ctx->pc = 0x257000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 183), (uint8_t)GPR_U32(ctx, 2));
    // 0x257004: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x257004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x257008: 0x9e230094  lwu         $v1, 0x94($s1)
    ctx->pc = 0x257008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x25700c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257010: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x257010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x257014: 0xa20300b6  sb          $v1, 0xB6($s0)
    ctx->pc = 0x257014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 3));
    // 0x257018: 0xde220090  ld          $v0, 0x90($s1)
    ctx->pc = 0x257018u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x25701c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x25701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x257020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x257020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257024: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x257024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x257028: 0xa20200b4  sb          $v0, 0xB4($s0)
    ctx->pc = 0x257028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x25702c: 0x9e230094  lwu         $v1, 0x94($s1)
    ctx->pc = 0x25702cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x257030: 0xa6040028  sh          $a0, 0x28($s0)
    ctx->pc = 0x257030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x257034: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257038: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x257038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x25703c: 0xa20300b5  sb          $v1, 0xB5($s0)
    ctx->pc = 0x25703cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 3));
label_257040:
    // 0x257040: 0x9622008a  lhu         $v0, 0x8A($s1)
    ctx->pc = 0x257040u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x257044: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x257044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x257048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257048u;
    {
        const bool branch_taken_0x257048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257048) {
            ctx->pc = 0x25705Cu;
            goto label_25705c;
        }
    }
    ctx->pc = 0x257050u;
    // 0x257050: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x257050u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x257054: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x257054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x257058: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x257058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_25705c:
    // 0x25705c: 0xc096418  jal         func_259060
    ctx->pc = 0x25705Cu;
    SET_GPR_U32(ctx, 31, 0x257064u);
    ctx->pc = 0x257060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25705Cu;
    // 0x257060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259060u, 0x25705Cu, 0x257064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257064u;
label_257064:
    // 0x257064: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x257064u;
    {
        const bool branch_taken_0x257064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257064u;
        // 0x257068: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257064) {
            ctx->pc = 0x25708Cu;
            goto label_25708c;
        }
    }
    ctx->pc = 0x25706Cu;
    // 0x25706c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257070: 0xc096678  jal         func_2599E0
    ctx->pc = 0x257070u;
    SET_GPR_U32(ctx, 31, 0x257078u);
    ctx->pc = 0x257074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257070u;
    // 0x257074: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2599E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2599E0u, 0x257070u, 0x257078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257078u;
label_257078:
    // 0x257078: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x257078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25707c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25707Cu;
    SET_GPR_U32(ctx, 31, 0x257084u);
    ctx->pc = 0x257080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25707Cu;
    // 0x257080: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25707Cu, 0x257084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257084u;
label_257084:
    // 0x257084: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x257084u;
    {
        const bool branch_taken_0x257084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257084) {
            ctx->pc = 0x257254u;
            goto label_257254;
        }
    }
    ctx->pc = 0x25708Cu;
label_25708c:
    // 0x25708c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x25708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x257090: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x257090u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x257094: 0x8e43f990  lw          $v1, -0x670($s2)
    ctx->pc = 0x257094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965648)));
    // 0x257098: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x257098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25709c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x25709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2570a0: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2570a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2570a4: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x2570a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x2570a8: 0x26881308  addiu       $t0, $s4, 0x1308
    ctx->pc = 0x2570a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4872));
    // 0x2570ac: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x2570acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2570b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2570b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570b4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2570b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2570b8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x2570b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2570bc: 0xa6070018  sh          $a3, 0x18($s0)
    ctx->pc = 0x2570bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 7));
    // 0x2570c0: 0xae06007c  sw          $a2, 0x7C($s0)
    ctx->pc = 0x2570c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 6));
    // 0x2570c4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2570c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2570c8: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x2570c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
    // 0x2570cc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2570ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2570d0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2570d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2570d4: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2570d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x2570d8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2570d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2570dc: 0xae060070  sw          $a2, 0x70($s0)
    ctx->pc = 0x2570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 6));
    // 0x2570e0: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x2570e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2570e4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2570e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2570e8: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x2570e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x2570ec: 0x96230092  lhu         $v1, 0x92($s1)
    ctx->pc = 0x2570ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2570f0: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x2570f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2570f4: 0xc0968ea  jal         func_25A3A8
    ctx->pc = 0x2570F4u;
    SET_GPR_U32(ctx, 31, 0x2570FCu);
    ctx->pc = 0x2570F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2570F4u;
    // 0x2570f8: 0x96250090  lhu         $a1, 0x90($s1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A8u, 0x2570F4u, 0x2570FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570FCu;
label_2570fc:
    // 0x2570fc: 0x96220088  lhu         $v0, 0x88($s1)
    ctx->pc = 0x2570fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x257100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257100u;
    {
        const bool branch_taken_0x257100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257100u;
        // 0x257104: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257100) {
            ctx->pc = 0x257110u;
            goto label_257110;
        }
    }
    ctx->pc = 0x257108u;
    // 0x257108: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x257108u;
    {
        const bool branch_taken_0x257108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257108u;
        // 0x25710c: 0x96020020  lhu         $v0, 0x20($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257108) {
            ctx->pc = 0x25714Cu;
            goto label_25714c;
        }
    }
    ctx->pc = 0x257110u;
label_257110:
    // 0x257110: 0x8c4312c8  lw          $v1, 0x12C8($v0)
    ctx->pc = 0x257110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x257114: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x257114u;
    {
        const bool branch_taken_0x257114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257114) {
            ctx->pc = 0x257118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257114u;
            // 0x257118: 0x96020020  lhu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257140u;
            goto label_257140;
        }
    }
    ctx->pc = 0x25711Cu;
    // 0x25711c: 0x96050020  lhu         $a1, 0x20($s0)
    ctx->pc = 0x25711cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x257120: 0x2402111c  addiu       $v0, $zero, 0x111C
    ctx->pc = 0x257120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4380));
    // 0x257124: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x257124u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x257128: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x257128u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x25712c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x25712cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x257130: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x257130u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x257134: 0xa2202b  sltu        $a0, $a1, $v0
    ctx->pc = 0x257134u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x257138: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257138u;
    {
        const bool branch_taken_0x257138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257138u;
        // 0x25713c: 0xa4100b  movn        $v0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257138) {
            ctx->pc = 0x25714Cu;
            goto label_25714c;
        }
    }
    ctx->pc = 0x257140u;
label_257140:
    // 0x257140: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x257140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x257144: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x257144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x257148: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x257148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_25714c:
    // 0x25714c: 0xfe020088  sd          $v0, 0x88($s0)
    ctx->pc = 0x25714cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 2));
    // 0x257150: 0xc096972  jal         func_25A5C8
    ctx->pc = 0x257150u;
    SET_GPR_U32(ctx, 31, 0x257158u);
    ctx->pc = 0x257154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257150u;
    // 0x257154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C8u, 0x257150u, 0x257158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257158u;
label_257158:
    // 0x257158: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x257158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x25715c: 0x8e44f990  lw          $a0, -0x670($s2)
    ctx->pc = 0x25715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965648)));
    // 0x257160: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x257160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x257164: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x257164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x257168: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x257168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x25716c: 0x8605001c  lh          $a1, 0x1C($s0)
    ctx->pc = 0x25716cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x257170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257174: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x257174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x257178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25717c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x257180: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x257180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x257184: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x257184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x257188: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x257188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x25718c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x25718cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x257190: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x257190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x257194: 0xde220028  ld          $v0, 0x28($s1)
    ctx->pc = 0x257194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x257198: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x257198u;
    {
        const bool branch_taken_0x257198 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257198u;
        // 0x25719c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257198) {
            ctx->pc = 0x2571C0u;
            goto label_2571c0;
        }
    }
    ctx->pc = 0x2571A0u;
    // 0x2571a0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2571a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2571a4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2571a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2571a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2571a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2571ac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2571acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2571b0: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2571B0u;
    {
        const bool branch_taken_0x2571b0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2571b0) {
            ctx->pc = 0x2571B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2571B0u;
            // 0x2571b4: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571C0u;
            goto label_2571c0;
        }
    }
    ctx->pc = 0x2571B8u;
    // 0x2571b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2571B8u;
    {
        const bool branch_taken_0x2571b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2571BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571B8u;
        // 0x2571bc: 0xae0400c0  sw          $a0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571b8) {
            ctx->pc = 0x2571C4u;
            goto label_2571c4;
        }
    }
    ctx->pc = 0x2571C0u;
label_2571c0:
    // 0x2571c0: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x2571c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
label_2571c4:
    // 0x2571c4: 0x26831308  addiu       $v1, $s4, 0x1308
    ctx->pc = 0x2571c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4872));
    // 0x2571c8: 0xdc6201c8  ld          $v0, 0x1C8($v1)
    ctx->pc = 0x2571c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x2571cc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2571ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2571d0: 0xfc6201c8  sd          $v0, 0x1C8($v1)
    ctx->pc = 0x2571d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 456), GPR_U64(ctx, 2));
    // 0x2571d4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x2571d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2571d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2571D8u;
    {
        const bool branch_taken_0x2571d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2571d8) {
            ctx->pc = 0x2571DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2571D8u;
            // 0x2571dc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571F0u;
            goto label_2571f0;
        }
    }
    ctx->pc = 0x2571E0u;
    // 0x2571e0: 0xc08a996  jal         func_22A658
    ctx->pc = 0x2571E0u;
    SET_GPR_U32(ctx, 31, 0x2571E8u);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x2571E0u, 0x2571E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2571E8u;
label_2571e8:
    // 0x2571e8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2571e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2571ec: 0x0  nop
    ctx->pc = 0x2571ecu;
    // NOP
label_2571f0:
    // 0x2571f0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2571F0u;
    {
        const bool branch_taken_0x2571f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2571f0) {
            ctx->pc = 0x25721Cu;
            goto label_25721c;
        }
    }
    ctx->pc = 0x2571F8u;
    // 0x2571f8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2571f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2571fc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2571fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257200u;
    {
        const bool branch_taken_0x257200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257200u;
        // 0x257204: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257200) {
            ctx->pc = 0x257218u;
            goto label_257218;
        }
    }
    ctx->pc = 0x257208u;
    // 0x257208: 0xc090c4c  jal         func_243130
    ctx->pc = 0x257208u;
    SET_GPR_U32(ctx, 31, 0x257210u);
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x257208u, 0x257210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257210u;
label_257210:
    // 0x257210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257210u;
    {
        const bool branch_taken_0x257210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257210) {
            ctx->pc = 0x25721Cu;
            goto label_25721c;
        }
    }
    ctx->pc = 0x257218u;
label_257218:
    // 0x257218: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x257218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_25721c:
    // 0x25721c: 0xc098560  jal         func_261580
    ctx->pc = 0x25721Cu;
    SET_GPR_U32(ctx, 31, 0x257224u);
    ctx->pc = 0x257220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25721Cu;
    // 0x257220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25721Cu, 0x257224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257224u;
label_257224:
    // 0x257224: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x257224u;
    {
        const bool branch_taken_0x257224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257224u;
        // 0x257228: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257224) {
            ctx->pc = 0x2572D0u;
            goto label_2572d0;
        }
    }
    ctx->pc = 0x25722Cu;
label_25722c:
    // 0x25722c: 0x8ac80007  lwl         $t0, 0x7($s6)
    ctx->pc = 0x25722cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x257230: 0x9ac80004  lwr         $t0, 0x4($s6)
    ctx->pc = 0x257230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x257234: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x257234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257238: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x257238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25723c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257240: 0x11e4021  addu        $t0, $t0, $fp
    ctx->pc = 0x257240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 30)));
    // 0x257244: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x257244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257248: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25724c: 0xc09648a  jal         func_259228
    ctx->pc = 0x25724Cu;
    SET_GPR_U32(ctx, 31, 0x257254u);
    ctx->pc = 0x257250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25724Cu;
    // 0x257250: 0x240a0014  addiu       $t2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259228u, 0x25724Cu, 0x257254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257254u;
label_257254:
    // 0x257254: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257254u;
    {
        const bool branch_taken_0x257254 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x257254) {
            ctx->pc = 0x257258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257254u;
            // 0x257258: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257268u;
            goto label_257268;
        }
    }
    ctx->pc = 0x25725Cu;
    // 0x25725c: 0xc08b8b8  jal         func_22E2E0
    ctx->pc = 0x25725Cu;
    SET_GPR_U32(ctx, 31, 0x257264u);
    ctx->pc = 0x257260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25725Cu;
    // 0x257260: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2E0u, 0x25725Cu, 0x257264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257264u;
label_257264:
    // 0x257264: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x257264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_257268:
    // 0x257268: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257268u;
    {
        const bool branch_taken_0x257268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257268) {
            ctx->pc = 0x25726Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257268u;
            // 0x25726c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25727Cu;
            goto label_25727c;
        }
    }
    ctx->pc = 0x257270u;
    // 0x257270: 0xc08a996  jal         func_22A658
    ctx->pc = 0x257270u;
    SET_GPR_U32(ctx, 31, 0x257278u);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x257270u, 0x257278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257278u;
label_257278:
    // 0x257278: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x257278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25727c:
    // 0x25727c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x25727Cu;
    {
        const bool branch_taken_0x25727c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25727c) {
            ctx->pc = 0x2572ACu;
            goto label_2572ac;
        }
    }
    ctx->pc = 0x257284u;
    // 0x257284: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x257284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x257288: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x257288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25728c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25728Cu;
    {
        const bool branch_taken_0x25728c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25728Cu;
        // 0x257290: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25728c) {
            ctx->pc = 0x2572A8u;
            goto label_2572a8;
        }
    }
    ctx->pc = 0x257294u;
    // 0x257294: 0xc090c4c  jal         func_243130
    ctx->pc = 0x257294u;
    SET_GPR_U32(ctx, 31, 0x25729Cu);
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x257294u, 0x25729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25729Cu;
label_25729c:
    // 0x25729c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25729Cu;
    {
        const bool branch_taken_0x25729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25729c) {
            ctx->pc = 0x2572ACu;
            goto label_2572ac;
        }
    }
    ctx->pc = 0x2572A4u;
    // 0x2572a4: 0x0  nop
    ctx->pc = 0x2572a4u;
    // NOP
label_2572a8:
    // 0x2572a8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x2572a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_2572ac:
    // 0x2572ac: 0xc098560  jal         func_261580
    ctx->pc = 0x2572ACu;
    SET_GPR_U32(ctx, 31, 0x2572B4u);
    ctx->pc = 0x2572B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572ACu;
    // 0x2572b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2572ACu, 0x2572B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572B4u;
label_2572b4:
    // 0x2572b4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2572b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2572b8: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x2572b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x2572bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2572bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2572c0: 0xdc8301f8  ld          $v1, 0x1F8($a0)
    ctx->pc = 0x2572c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2572c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2572c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2572c8: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2572c8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2572cc: 0xfc8301f8  sd          $v1, 0x1F8($a0)
    ctx->pc = 0x2572ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 3));
label_2572d0:
    // 0x2572d0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2572d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2572d4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2572d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2572d8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2572d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2572dc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2572dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2572e0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2572e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2572e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2572e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2572e8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2572e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2572ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2572ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2572f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2572f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2572f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2572f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2572f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2572F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2572FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572F8u;
        // 0x2572fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2572F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257300u;
}

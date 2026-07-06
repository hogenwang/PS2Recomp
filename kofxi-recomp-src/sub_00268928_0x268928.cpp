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

// Function: sub_00268928
// Address: 0x268928 - 0x268b28
void sub_00268928_0x268928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268928_0x268928");
#endif

    switch (ctx->pc) {
        case 0x268968u: goto label_268968;
        case 0x268984u: goto label_268984;
        case 0x26899cu: goto label_26899c;
        case 0x2689ecu: goto label_2689ec;
        case 0x268a54u: goto label_268a54;
        case 0x268a84u: goto label_268a84;
        case 0x268ab8u: goto label_268ab8;
        case 0x268aecu: goto label_268aec;
        case 0x268af8u: goto label_268af8;
        default: break;
    }

    ctx->pc = 0x268928u;

    // 0x268928: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x268928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x26892c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26892cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268930: 0xffb60310  sd          $s6, 0x310($sp)
    ctx->pc = 0x268930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 22));
    // 0x268934: 0xffb002b0  sd          $s0, 0x2B0($sp)
    ctx->pc = 0x268934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 16));
    // 0x268938: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x268938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26893c: 0xffb202d0  sd          $s2, 0x2D0($sp)
    ctx->pc = 0x26893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 18));
    // 0x268940: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x268940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268944: 0xffb402f0  sd          $s4, 0x2F0($sp)
    ctx->pc = 0x268944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 20));
    // 0x268948: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x268948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26894c: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x26894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x268950: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x268950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x268954: 0xffb50300  sd          $s5, 0x300($sp)
    ctx->pc = 0x268954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 21));
    // 0x268958: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x268958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26895c: 0xffb302e0  sd          $s3, 0x2E0($sp)
    ctx->pc = 0x26895cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 19));
    // 0x268960: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x268960u;
    SET_GPR_U32(ctx, 31, 0x268968u);
    ctx->pc = 0x268964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268960u;
    // 0x268964: 0xffb102c0  sd          $s1, 0x2C0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x268960u, 0x268968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268968u;
label_268968:
    // 0x268968: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x268968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26896c: 0x6810007  bgez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x26896Cu;
    {
        const bool branch_taken_0x26896c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x268970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26896Cu;
        // 0x268970: 0x27b30280  addiu       $s3, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26896c) {
            ctx->pc = 0x26898Cu;
            goto label_26898c;
        }
    }
    ctx->pc = 0x268974u;
    // 0x268974: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x268974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x268978: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26897c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26897Cu;
    SET_GPR_U32(ctx, 31, 0x268984u);
    ctx->pc = 0x268980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26897Cu;
    // 0x268980: 0x24a57d90  addiu       $a1, $a1, 0x7D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26897Cu, 0x268984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268984u;
label_268984:
    // 0x268984: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x268984u;
    {
        const bool branch_taken_0x268984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268984u;
        // 0x268988: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268984) {
            ctx->pc = 0x268AFCu;
            goto label_268afc;
        }
    }
    ctx->pc = 0x26898Cu;
label_26898c:
    // 0x26898c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268990: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268994: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268994u;
    SET_GPR_U32(ctx, 31, 0x26899Cu);
    ctx->pc = 0x268998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268994u;
    // 0x268998: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x268994u, 0x26899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26899Cu;
label_26899c:
    // 0x26899c: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x26899cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x2689a0: 0x8a050003  lwl         $a1, 0x3($s0)
    ctx->pc = 0x2689a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2689a4: 0x9a050000  lwr         $a1, 0x0($s0)
    ctx->pc = 0x2689a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2689a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2689a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2689ac: 0x8ea21a5c  lw          $v0, 0x1A5C($s5)
    ctx->pc = 0x2689acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6748)));
    // 0x2689b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2689b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2689b4: 0xa3a40280  sb          $a0, 0x280($sp)
    ctx->pc = 0x2689b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 640), (uint8_t)GPR_U32(ctx, 4));
    // 0x2689b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2689b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2689bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2689bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2689c0: 0xafa50284  sw          $a1, 0x284($sp)
    ctx->pc = 0x2689c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 5));
    // 0x2689c4: 0xa3a30281  sb          $v1, 0x281($sp)
    ctx->pc = 0x2689c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 641), (uint8_t)GPR_U32(ctx, 3));
    // 0x2689c8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2689c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2689ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689d0: 0xaea21a5c  sw          $v0, 0x1A5C($s5)
    ctx->pc = 0x2689d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6748), GPR_U32(ctx, 2));
    // 0x2689d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2689d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2689d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2689dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2689e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689e4: 0xc09a1aa  jal         func_2686A8
    ctx->pc = 0x2689E4u;
    SET_GPR_U32(ctx, 31, 0x2689ECu);
    ctx->pc = 0x2689E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689E4u;
    // 0x2689e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686A8u, 0x2689E4u, 0x2689ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689ECu;
label_2689ec:
    // 0x2689ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2689ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689f0: 0x600003f  bltz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2689F0u;
    {
        const bool branch_taken_0x2689f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2689F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689F0u;
        // 0x2689f4: 0x93a20078  lbu         $v0, 0x78($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689f0) {
            ctx->pc = 0x268AF0u;
            goto label_268af0;
        }
    }
    ctx->pc = 0x2689F8u;
    // 0x2689f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2689F8u;
    {
        const bool branch_taken_0x2689f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2689FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689F8u;
        // 0x2689fc: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689f8) {
            ctx->pc = 0x268A14u;
            goto label_268a14;
        }
    }
    ctx->pc = 0x268A00u;
    // 0x268a00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x268a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x268a04: 0x27a30079  addiu       $v1, $sp, 0x79
    ctx->pc = 0x268a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 121));
    // 0x268a08: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x268a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x268a0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268A0Cu;
    {
        const bool branch_taken_0x268a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A0Cu;
        // 0x268a10: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a0c) {
            ctx->pc = 0x268A18u;
            goto label_268a18;
        }
    }
    ctx->pc = 0x268A14u;
label_268a14:
    // 0x268a14: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x268a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_268a18:
    // 0x268a18: 0x88830007  lwl         $v1, 0x7($a0)
    ctx->pc = 0x268a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x268a1c: 0x98830004  lwr         $v1, 0x4($a0)
    ctx->pc = 0x268a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x268a20: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x268a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x268a24: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x268A24u;
    {
        const bool branch_taken_0x268a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A24u;
        // 0x268a28: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a24) {
            ctx->pc = 0x268A60u;
            goto label_268a60;
        }
    }
    ctx->pc = 0x268A2Cu;
    // 0x268a2c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x268a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x268a30: 0x1482002f  bne         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x268A30u;
    {
        const bool branch_taken_0x268a30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x268A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A30u;
        // 0x268a34: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a30) {
            ctx->pc = 0x268AF0u;
            goto label_268af0;
        }
    }
    ctx->pc = 0x268A38u;
    // 0x268a38: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x268a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x268a3c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x268a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x268a40: 0x30420402  andi        $v0, $v0, 0x402
    ctx->pc = 0x268a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1026);
    // 0x268a44: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x268A44u;
    {
        const bool branch_taken_0x268a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x268A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A44u;
        // 0x268a48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a44) {
            ctx->pc = 0x268AF0u;
            goto label_268af0;
        }
    }
    ctx->pc = 0x268A4Cu;
    // 0x268a4c: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x268a4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x268a50: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_268a54:
    if (ctx->pc == 0x268A54u) {
        ctx->pc = 0x268A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A50u;
        // 0x268a54: 0x309200ff  andi        $s2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268A58u;
        goto label_fallthrough_0x268a50;
    }
    ctx->pc = 0x268A50u;
    {
        const bool branch_taken_0x268a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A50u;
        // 0x268a54: 0x309200ff  andi        $s2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a50) {
            ctx->pc = 0x268A64u;
            goto label_268a64;
        }
    }
label_fallthrough_0x268a50:
    ctx->pc = 0x268A58u;
    // 0x268a58: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x268A58u;
    {
        const bool branch_taken_0x268a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268a58) {
            ctx->pc = 0x268AF0u;
            goto label_268af0;
        }
    }
    ctx->pc = 0x268A60u;
label_268a60:
    // 0x268a60: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x268a60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_268a64:
    // 0x268a64: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x268a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x268a68: 0x16420021  bne         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x268A68u;
    {
        const bool branch_taken_0x268a68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x268A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A68u;
        // 0x268a6c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a68) {
            ctx->pc = 0x268AF0u;
            goto label_268af0;
        }
    }
    ctx->pc = 0x268A70u;
    // 0x268a70: 0x27b00290  addiu       $s0, $sp, 0x290
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x268a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a7c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268A7Cu;
    SET_GPR_U32(ctx, 31, 0x268A84u);
    ctx->pc = 0x268A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A7Cu;
    // 0x268a80: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x268A7Cu, 0x268A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A84u;
label_268a84:
    // 0x268a84: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x268a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x268a88: 0xa3b20291  sb          $s2, 0x291($sp)
    ctx->pc = 0x268a88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 657), (uint8_t)GPR_U32(ctx, 18));
    // 0x268a8c: 0xa3a30290  sb          $v1, 0x290($sp)
    ctx->pc = 0x268a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 656), (uint8_t)GPR_U32(ctx, 3));
    // 0x268a90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x268a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a94: 0x93a40295  lbu         $a0, 0x295($sp)
    ctx->pc = 0x268a94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 661)));
    // 0x268a98: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x268a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268a9c: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x268a9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x268aa0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x268aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x268aa4: 0xa3a20294  sb          $v0, 0x294($sp)
    ctx->pc = 0x268aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 660), (uint8_t)GPR_U32(ctx, 2));
    // 0x268aa8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x268aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x268aac: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x268aacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x268ab0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x268AB0u;
    SET_GPR_U32(ctx, 31, 0x268AB8u);
    ctx->pc = 0x268AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AB0u;
    // 0x268ab4: 0xa7a20292  sh          $v0, 0x292($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 658), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x268AB0u, 0x268AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AB8u;
label_268ab8:
    // 0x268ab8: 0x8eab1a5c  lw          $t3, 0x1A5C($s5)
    ctx->pc = 0x268ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6748)));
    // 0x268abc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x268abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268ac0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x268ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ac4: 0xa3a20296  sb          $v0, 0x296($sp)
    ctx->pc = 0x268ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 662), (uint8_t)GPR_U32(ctx, 2));
    // 0x268ac8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x268ac8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x268acc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x268accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ad0: 0xaeab1a5c  sw          $t3, 0x1A5C($s5)
    ctx->pc = 0x268ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6748), GPR_U32(ctx, 11));
    // 0x268ad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ad8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x268ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268adc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x268adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268ae0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x268ae0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ae4: 0xc09a1aa  jal         func_2686A8
    ctx->pc = 0x268AE4u;
    SET_GPR_U32(ctx, 31, 0x268AECu);
    ctx->pc = 0x268AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AE4u;
    // 0x268ae8: 0x240a0804  addiu       $t2, $zero, 0x804 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686A8u, 0x268AE4u, 0x268AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AECu;
label_268aec:
    // 0x268aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268af0:
    // 0x268af0: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x268AF0u;
    SET_GPR_U32(ctx, 31, 0x268AF8u);
    ctx->pc = 0x268AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AF0u;
    // 0x268af4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x268AF0u, 0x268AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AF8u;
label_268af8:
    // 0x268af8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x268af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268afc:
    // 0x268afc: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x268afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x268b00: 0xdfb60310  ld          $s6, 0x310($sp)
    ctx->pc = 0x268b00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x268b04: 0xdfb50300  ld          $s5, 0x300($sp)
    ctx->pc = 0x268b04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x268b08: 0xdfb402f0  ld          $s4, 0x2F0($sp)
    ctx->pc = 0x268b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x268b0c: 0xdfb302e0  ld          $s3, 0x2E0($sp)
    ctx->pc = 0x268b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x268b10: 0xdfb202d0  ld          $s2, 0x2D0($sp)
    ctx->pc = 0x268b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x268b14: 0xdfb102c0  ld          $s1, 0x2C0($sp)
    ctx->pc = 0x268b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x268b18: 0xdfb002b0  ld          $s0, 0x2B0($sp)
    ctx->pc = 0x268b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x268b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x268B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B1Cu;
        // 0x268b20: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268B24u;
    // 0x268b24: 0x0  nop
    ctx->pc = 0x268b24u;
    // NOP
    if (ctx->pc == 0x268b24u) { ctx->pc = 0x268b28u; }
}

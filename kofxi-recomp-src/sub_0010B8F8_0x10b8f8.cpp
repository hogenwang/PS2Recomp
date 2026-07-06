#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B8F8
// Address: 0x10b8f8 - 0x10bff0
void sub_0010B8F8_0x10b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B8F8_0x10b8f8");
#endif

    switch (ctx->pc) {
        case 0x10b944u: goto label_10b944;
        case 0x10b970u: goto label_10b970;
        case 0x10b9b0u: goto label_10b9b0;
        case 0x10b9d8u: goto label_10b9d8;
        case 0x10ba18u: goto label_10ba18;
        case 0x10ba34u: goto label_10ba34;
        case 0x10ba3cu: goto label_10ba3c;
        case 0x10ba78u: goto label_10ba78;
        case 0x10bab8u: goto label_10bab8;
        case 0x10badcu: goto label_10badc;
        case 0x10bb20u: goto label_10bb20;
        case 0x10bb7cu: goto label_10bb7c;
        case 0x10bb88u: goto label_10bb88;
        case 0x10bbb0u: goto label_10bbb0;
        case 0x10bbe4u: goto label_10bbe4;
        case 0x10bbecu: goto label_10bbec;
        case 0x10bbf8u: goto label_10bbf8;
        case 0x10bc08u: goto label_10bc08;
        case 0x10bc48u: goto label_10bc48;
        case 0x10bc68u: goto label_10bc68;
        case 0x10bc8cu: goto label_10bc8c;
        case 0x10bcd0u: goto label_10bcd0;
        case 0x10bd2cu: goto label_10bd2c;
        case 0x10bd38u: goto label_10bd38;
        case 0x10bd60u: goto label_10bd60;
        case 0x10bd94u: goto label_10bd94;
        case 0x10bda8u: goto label_10bda8;
        case 0x10bdd0u: goto label_10bdd0;
        case 0x10be30u: goto label_10be30;
        case 0x10bf18u: goto label_10bf18;
        case 0x10bf48u: goto label_10bf48;
        default: break;
    }

    ctx->pc = 0x10b8f8u;

    // 0x10b8f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x10b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x10b8fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10b8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b900: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x10b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x10b904: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10b908: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10b90c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10b90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b910: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x10b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x10b914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b918: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x10b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x10b91c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b920: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x10b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x10b924: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x10b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x10b928: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x10b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x10b92c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10b930: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10b934: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10b938: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x10b938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x10b93c: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10B93Cu;
    SET_GPR_U32(ctx, 31, 0x10B944u);
    ctx->pc = 0x10B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B93Cu;
            // 0x10b940: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B944u; }
        if (ctx->pc != 0x10B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B944u; }
        if (ctx->pc != 0x10B944u) { return; }
    }
    ctx->pc = 0x10B944u;
label_10b944:
    // 0x10b944: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b948: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b94c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b950: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x10b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10b954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B954u;
    {
        const bool branch_taken_0x10b954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B954u;
            // 0x10b958: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b954) {
            ctx->pc = 0x10B964u;
            goto label_10b964;
        }
    }
    ctx->pc = 0x10B95Cu;
    // 0x10b95c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10b95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10b960: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x10b960u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_10b964:
    // 0x10b964: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b968: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x10b968u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x10b96c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_10b970:
    // 0x10b970: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b970u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b974: 0x0  nop
    ctx->pc = 0x10b974u;
    // NOP
    // 0x10b978: 0x0  nop
    ctx->pc = 0x10b978u;
    // NOP
    // 0x10b97c: 0x0  nop
    ctx->pc = 0x10b97cu;
    // NOP
    // 0x10b980: 0x0  nop
    ctx->pc = 0x10b980u;
    // NOP
    // 0x10b984: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B984u;
    {
        const bool branch_taken_0x10b984 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b984) {
            ctx->pc = 0x10B970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b970;
        }
    }
    ctx->pc = 0x10B98Cu;
    // 0x10b98c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b994: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b998: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b99c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10b99cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10b9a0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10b9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10b9a4: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x10b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x10b9a8: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x10b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x10b9ac: 0x0  nop
    ctx->pc = 0x10b9acu;
    // NOP
label_10b9b0:
    // 0x10b9b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b9b4: 0x0  nop
    ctx->pc = 0x10b9b4u;
    // NOP
    // 0x10b9b8: 0x0  nop
    ctx->pc = 0x10b9b8u;
    // NOP
    // 0x10b9bc: 0x0  nop
    ctx->pc = 0x10b9bcu;
    // NOP
    // 0x10b9c0: 0x0  nop
    ctx->pc = 0x10b9c0u;
    // NOP
    // 0x10b9c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B9C4u;
    {
        const bool branch_taken_0x10b9c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b9c4) {
            ctx->pc = 0x10B9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b9b0;
        }
    }
    ctx->pc = 0x10B9CCu;
    // 0x10b9cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9d0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x10B9D0u;
    SET_GPR_U32(ctx, 31, 0x10B9D8u);
    ctx->pc = 0x10B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9D0u;
            // 0x10b9d4: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9D8u; }
        if (ctx->pc != 0x10B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9D8u; }
        if (ctx->pc != 0x10B9D8u) { return; }
    }
    ctx->pc = 0x10B9D8u;
label_10b9d8:
    // 0x10b9d8: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x10b9d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x10b9dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x10b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10b9e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10b9e4: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x10b9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10b9e8: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x10b9e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10b9ec: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x10b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10b9f0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x10b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x10b9f4: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x10b9f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10b9f8: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x10B9F8u;
    {
        const bool branch_taken_0x10b9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9F8u;
            // 0x10b9fc: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9f8) {
            ctx->pc = 0x10BC00u;
            goto label_10bc00;
        }
    }
    ctx->pc = 0x10BA00u;
    // 0x10ba00: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10ba04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ba08: 0x24a5bf18  addiu       $a1, $a1, -0x40E8
    ctx->pc = 0x10ba08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950680));
    // 0x10ba0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ba0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba10: 0xc043260  jal         func_10C980
    ctx->pc = 0x10BA10u;
    SET_GPR_U32(ctx, 31, 0x10BA18u);
    ctx->pc = 0x10BA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA10u;
            // 0x10ba14: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C980u;
    if (runtime->hasFunction(0x10C980u)) {
        auto targetFn = runtime->lookupFunction(0x10C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA18u; }
        if (ctx->pc != 0x10BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C980_0x10c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA18u; }
        if (ctx->pc != 0x10BA18u) { return; }
    }
    ctx->pc = 0x10BA18u;
label_10ba18:
    // 0x10ba18: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10ba18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ba20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ba24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ba28: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10ba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10ba2c: 0xc04361e  jal         func_10D878
    ctx->pc = 0x10BA2Cu;
    SET_GPR_U32(ctx, 31, 0x10BA34u);
    ctx->pc = 0x10BA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA2Cu;
            // 0x10ba30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D878u;
    if (runtime->hasFunction(0x10D878u)) {
        auto targetFn = runtime->lookupFunction(0x10D878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA34u; }
        if (ctx->pc != 0x10BA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadRequestQueueHelpers_0x10d878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA34u; }
        if (ctx->pc != 0x10BA34u) { return; }
    }
    ctx->pc = 0x10BA34u;
label_10ba34:
    // 0x10ba34: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10BA34u;
    SET_GPR_U32(ctx, 31, 0x10BA3Cu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA3Cu; }
        if (ctx->pc != 0x10BA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA3Cu; }
        if (ctx->pc != 0x10BA3Cu) { return; }
    }
    ctx->pc = 0x10BA3Cu;
label_10ba3c:
    // 0x10ba3c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x10ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10ba40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ba44: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x10ba48: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ba4c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10ba4cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10ba50: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10ba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10ba54: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10ba54u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x10ba58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ba5c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10ba5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10ba60: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x10ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10ba64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10ba64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10ba68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BA68u;
    {
        const bool branch_taken_0x10ba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA68u;
            // 0x10ba6c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba68) {
            ctx->pc = 0x10BA7Cu;
            goto label_10ba7c;
        }
    }
    ctx->pc = 0x10BA70u;
    // 0x10ba70: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10BA70u;
    SET_GPR_U32(ctx, 31, 0x10BA78u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA78u; }
        if (ctx->pc != 0x10BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA78u; }
        if (ctx->pc != 0x10BA78u) { return; }
    }
    ctx->pc = 0x10BA78u;
label_10ba78:
    // 0x10ba78: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x10ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_10ba7c:
    // 0x10ba7c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x10ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x10ba80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ba84: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x10ba84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x10ba88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ba8c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x10ba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10ba90: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x10ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x10ba94: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x10ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x10ba98: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x10BA98u;
    {
        const bool branch_taken_0x10ba98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA98u;
            // 0x10ba9c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba98) {
            ctx->pc = 0x10BBD4u;
            goto label_10bbd4;
        }
    }
    ctx->pc = 0x10BAA0u;
    // 0x10baa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10baa4: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x10baa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10baa8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10baac: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x10baacu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x10bab0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10bab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10bab4: 0x0  nop
    ctx->pc = 0x10bab4u;
    // NOP
label_10bab8:
    // 0x10bab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10babc: 0x0  nop
    ctx->pc = 0x10babcu;
    // NOP
    // 0x10bac0: 0x0  nop
    ctx->pc = 0x10bac0u;
    // NOP
    // 0x10bac4: 0x0  nop
    ctx->pc = 0x10bac4u;
    // NOP
    // 0x10bac8: 0x0  nop
    ctx->pc = 0x10bac8u;
    // NOP
    // 0x10bacc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BACCu;
    {
        const bool branch_taken_0x10bacc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bacc) {
            ctx->pc = 0x10BAB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10bab8;
        }
    }
    ctx->pc = 0x10BAD4u;
    // 0x10bad4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10BAD4u;
    SET_GPR_U32(ctx, 31, 0x10BADCu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BADCu; }
        if (ctx->pc != 0x10BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BADCu; }
        if (ctx->pc != 0x10BADCu) { return; }
    }
    ctx->pc = 0x10BADCu;
label_10badc:
    // 0x10badc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10badcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10bae0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10bae4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10bae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10bae8: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x10bae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x10baec: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x10baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x10baf0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10baf4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10baf4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10baf8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10baf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10bafc: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x10bafcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x10bb00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb04: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10bb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10bb08: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10bb0c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10bb0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10bb10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BB10u;
    {
        const bool branch_taken_0x10bb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB10u;
            // 0x10bb14: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb10) {
            ctx->pc = 0x10BB24u;
            goto label_10bb24;
        }
    }
    ctx->pc = 0x10BB18u;
    // 0x10bb18: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10BB18u;
    SET_GPR_U32(ctx, 31, 0x10BB20u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB20u; }
        if (ctx->pc != 0x10BB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB20u; }
        if (ctx->pc != 0x10BB20u) { return; }
    }
    ctx->pc = 0x10BB20u;
label_10bb20:
    // 0x10bb20: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_10bb24:
    // 0x10bb24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb28: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x10bb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x10bb2c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10bb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10bb30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bb30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10bb34: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x10bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x10bb38: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10bb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10bb3c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10bb40: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BB40u;
    {
        const bool branch_taken_0x10bb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB40u;
            // 0x10bb44: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb40) {
            ctx->pc = 0x10BB5Cu;
            goto label_10bb5c;
        }
    }
    ctx->pc = 0x10BB48u;
    // 0x10bb48: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x10bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x10bb4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BB4Cu;
    {
        const bool branch_taken_0x10bb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB4Cu;
            // 0x10bb50: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb4c) {
            ctx->pc = 0x10BB5Cu;
            goto label_10bb5c;
        }
    }
    ctx->pc = 0x10BB54u;
    // 0x10bb54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BB54u;
    {
        const bool branch_taken_0x10bb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB54u;
            // 0x10bb58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb54) {
            ctx->pc = 0x10BB64u;
            goto label_10bb64;
        }
    }
    ctx->pc = 0x10BB5Cu;
label_10bb5c:
    // 0x10bb5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BB5Cu;
    {
        const bool branch_taken_0x10bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB5Cu;
            // 0x10bb60: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb5c) {
            ctx->pc = 0x10BB68u;
            goto label_10bb68;
        }
    }
    ctx->pc = 0x10BB64u;
label_10bb64:
    // 0x10bb64: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x10bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_10bb68:
    // 0x10bb68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bb6c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10bb70: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x10bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10bb74: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10BB74u;
    SET_GPR_U32(ctx, 31, 0x10BB7Cu);
    ctx->pc = 0x10BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB74u;
            // 0x10bb78: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB7Cu; }
        if (ctx->pc != 0x10BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB7Cu; }
        if (ctx->pc != 0x10BB7Cu) { return; }
    }
    ctx->pc = 0x10BB7Cu;
label_10bb7c:
    // 0x10bb7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb80: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10bb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10bb84: 0x0  nop
    ctx->pc = 0x10bb84u;
    // NOP
label_10bb88:
    // 0x10bb88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10bb8c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10bb90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10bb94: 0x0  nop
    ctx->pc = 0x10bb94u;
    // NOP
    // 0x10bb98: 0x0  nop
    ctx->pc = 0x10bb98u;
    // NOP
    // 0x10bb9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BB9Cu;
    {
        const bool branch_taken_0x10bb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bb9c) {
            ctx->pc = 0x10BB88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10bb88;
        }
    }
    ctx->pc = 0x10BBA4u;
    // 0x10bba4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bba8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10bba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10bbac: 0x0  nop
    ctx->pc = 0x10bbacu;
    // NOP
label_10bbb0:
    // 0x10bbb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10bbb4: 0x0  nop
    ctx->pc = 0x10bbb4u;
    // NOP
    // 0x10bbb8: 0x0  nop
    ctx->pc = 0x10bbb8u;
    // NOP
    // 0x10bbbc: 0x0  nop
    ctx->pc = 0x10bbbcu;
    // NOP
    // 0x10bbc0: 0x0  nop
    ctx->pc = 0x10bbc0u;
    // NOP
    // 0x10bbc4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BBC4u;
    {
        const bool branch_taken_0x10bbc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bbc4) {
            ctx->pc = 0x10BBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10bbb0;
        }
    }
    ctx->pc = 0x10BBCCu;
    // 0x10bbcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10BBCCu;
    {
        const bool branch_taken_0x10bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bbcc) {
            ctx->pc = 0x10BBE4u;
            goto label_10bbe4;
        }
    }
    ctx->pc = 0x10BBD4u;
label_10bbd4:
    // 0x10bbd4: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x10bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10bbd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10bbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbdc: 0xc042dce  jal         func_10B738
    ctx->pc = 0x10BBDCu;
    SET_GPR_U32(ctx, 31, 0x10BBE4u);
    ctx->pc = 0x10BBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBDCu;
            // 0x10bbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B738u;
    if (runtime->hasFunction(0x10B738u)) {
        auto targetFn = runtime->lookupFunction(0x10B738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBE4u; }
        if (ctx->pc != 0x10BBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B738_0x10b738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBE4u; }
        if (ctx->pc != 0x10BBE4u) { return; }
    }
    ctx->pc = 0x10BBE4u;
label_10bbe4:
    // 0x10bbe4: 0xc043604  jal         func_10D810
    ctx->pc = 0x10BBE4u;
    SET_GPR_U32(ctx, 31, 0x10BBECu);
    ctx->pc = 0x10BBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBE4u;
            // 0x10bbe8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D810u;
    if (runtime->hasFunction(0x10D810u)) {
        auto targetFn = runtime->lookupFunction(0x10D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBECu; }
        if (ctx->pc != 0x10BBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D810_0x10d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBECu; }
        if (ctx->pc != 0x10BBECu) { return; }
    }
    ctx->pc = 0x10BBECu;
label_10bbec:
    // 0x10bbec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10bbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbf0: 0xc043264  jal         func_10C990
    ctx->pc = 0x10BBF0u;
    SET_GPR_U32(ctx, 31, 0x10BBF8u);
    ctx->pc = 0x10BBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBF0u;
            // 0x10bbf4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C990u;
    if (runtime->hasFunction(0x10C990u)) {
        auto targetFn = runtime->lookupFunction(0x10C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBF8u; }
        if (ctx->pc != 0x10BBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C990_0x10c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBF8u; }
        if (ctx->pc != 0x10BBF8u) { return; }
    }
    ctx->pc = 0x10BBF8u;
label_10bbf8:
    // 0x10bbf8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x10BBF8u;
    {
        const bool branch_taken_0x10bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBF8u;
            // 0x10bbfc: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbf8) {
            ctx->pc = 0x10BD98u;
            goto label_10bd98;
        }
    }
    ctx->pc = 0x10BC00u;
label_10bc00:
    // 0x10bc00: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10BC00u;
    SET_GPR_U32(ctx, 31, 0x10BC08u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC08u; }
        if (ctx->pc != 0x10BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC08u; }
        if (ctx->pc != 0x10BC08u) { return; }
    }
    ctx->pc = 0x10BC08u;
label_10bc08:
    // 0x10bc08: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x10bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10bc0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc10: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x10bc14: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10bc14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc18: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x10bc18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x10bc1c: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x10bc1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x10bc20: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10bc20u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10bc24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc28: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10bc28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10bc2c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x10bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10bc30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bc34: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10bc38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BC38u;
    {
        const bool branch_taken_0x10bc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC38u;
            // 0x10bc3c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc38) {
            ctx->pc = 0x10BC48u;
            goto label_10bc48;
        }
    }
    ctx->pc = 0x10BC40u;
    // 0x10bc40: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10BC40u;
    SET_GPR_U32(ctx, 31, 0x10BC48u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC48u; }
        if (ctx->pc != 0x10BC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC48u; }
        if (ctx->pc != 0x10BC48u) { return; }
    }
    ctx->pc = 0x10BC48u;
label_10bc48:
    // 0x10bc48: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x10BC48u;
    {
        const bool branch_taken_0x10bc48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC48u;
            // 0x10bc4c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc48) {
            ctx->pc = 0x10BD84u;
            goto label_10bd84;
        }
    }
    ctx->pc = 0x10BC50u;
    // 0x10bc50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc54: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x10bc54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10bc58: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x10bc58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10bc5c: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x10bc5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x10bc60: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10bc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10bc64: 0x0  nop
    ctx->pc = 0x10bc64u;
    // NOP
label_10bc68:
    // 0x10bc68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10bc6c: 0x0  nop
    ctx->pc = 0x10bc6cu;
    // NOP
    // 0x10bc70: 0x0  nop
    ctx->pc = 0x10bc70u;
    // NOP
    // 0x10bc74: 0x0  nop
    ctx->pc = 0x10bc74u;
    // NOP
    // 0x10bc78: 0x0  nop
    ctx->pc = 0x10bc78u;
    // NOP
    // 0x10bc7c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BC7Cu;
    {
        const bool branch_taken_0x10bc7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bc7c) {
            ctx->pc = 0x10BC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10bc68;
        }
    }
    ctx->pc = 0x10BC84u;
    // 0x10bc84: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10BC84u;
    SET_GPR_U32(ctx, 31, 0x10BC8Cu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC8Cu; }
        if (ctx->pc != 0x10BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC8Cu; }
        if (ctx->pc != 0x10BC8Cu) { return; }
    }
    ctx->pc = 0x10BC8Cu;
label_10bc8c:
    // 0x10bc8c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10bc90: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10bc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10bc98: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x10bc98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x10bc9c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x10bc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x10bca0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bca4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10bca4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10bca8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10bca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10bcac: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x10bcacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x10bcb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bcb4: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10bcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10bcb8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10bcbc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10bcbcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10bcc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BCC0u;
    {
        const bool branch_taken_0x10bcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCC0u;
            // 0x10bcc4: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcc0) {
            ctx->pc = 0x10BCD4u;
            goto label_10bcd4;
        }
    }
    ctx->pc = 0x10BCC8u;
    // 0x10bcc8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10BCC8u;
    SET_GPR_U32(ctx, 31, 0x10BCD0u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCD0u; }
        if (ctx->pc != 0x10BCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCD0u; }
        if (ctx->pc != 0x10BCD0u) { return; }
    }
    ctx->pc = 0x10BCD0u;
label_10bcd0:
    // 0x10bcd0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_10bcd4:
    // 0x10bcd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bcd8: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x10bcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x10bcdc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10bce0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bce0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10bce4: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x10bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x10bce8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10bce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10bcec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10bcf0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BCF0u;
    {
        const bool branch_taken_0x10bcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCF0u;
            // 0x10bcf4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcf0) {
            ctx->pc = 0x10BD0Cu;
            goto label_10bd0c;
        }
    }
    ctx->pc = 0x10BCF8u;
    // 0x10bcf8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x10bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x10bcfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BCFCu;
    {
        const bool branch_taken_0x10bcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCFCu;
            // 0x10bd00: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcfc) {
            ctx->pc = 0x10BD0Cu;
            goto label_10bd0c;
        }
    }
    ctx->pc = 0x10BD04u;
    // 0x10bd04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BD04u;
    {
        const bool branch_taken_0x10bd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD04u;
            // 0x10bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd04) {
            ctx->pc = 0x10BD14u;
            goto label_10bd14;
        }
    }
    ctx->pc = 0x10BD0Cu;
label_10bd0c:
    // 0x10bd0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BD0Cu;
    {
        const bool branch_taken_0x10bd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD0Cu;
            // 0x10bd10: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd0c) {
            ctx->pc = 0x10BD18u;
            goto label_10bd18;
        }
    }
    ctx->pc = 0x10BD14u;
label_10bd14:
    // 0x10bd14: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x10bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_10bd18:
    // 0x10bd18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bd1c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10bd20: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x10bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10bd24: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10BD24u;
    SET_GPR_U32(ctx, 31, 0x10BD2Cu);
    ctx->pc = 0x10BD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD24u;
            // 0x10bd28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD2Cu; }
        if (ctx->pc != 0x10BD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD2Cu; }
        if (ctx->pc != 0x10BD2Cu) { return; }
    }
    ctx->pc = 0x10BD2Cu;
label_10bd2c:
    // 0x10bd2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bd30: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10bd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10bd34: 0x0  nop
    ctx->pc = 0x10bd34u;
    // NOP
label_10bd38:
    // 0x10bd38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10bd3c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10bd40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10bd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10bd44: 0x0  nop
    ctx->pc = 0x10bd44u;
    // NOP
    // 0x10bd48: 0x0  nop
    ctx->pc = 0x10bd48u;
    // NOP
    // 0x10bd4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BD4Cu;
    {
        const bool branch_taken_0x10bd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bd4c) {
            ctx->pc = 0x10BD38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10bd38;
        }
    }
    ctx->pc = 0x10BD54u;
    // 0x10bd54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bd58: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10bd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10bd5c: 0x0  nop
    ctx->pc = 0x10bd5cu;
    // NOP
label_10bd60:
    // 0x10bd60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10bd64: 0x0  nop
    ctx->pc = 0x10bd64u;
    // NOP
    // 0x10bd68: 0x0  nop
    ctx->pc = 0x10bd68u;
    // NOP
    // 0x10bd6c: 0x0  nop
    ctx->pc = 0x10bd6cu;
    // NOP
    // 0x10bd70: 0x0  nop
    ctx->pc = 0x10bd70u;
    // NOP
    // 0x10bd74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BD74u;
    {
        const bool branch_taken_0x10bd74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bd74) {
            ctx->pc = 0x10BD60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10bd60;
        }
    }
    ctx->pc = 0x10BD7Cu;
    // 0x10bd7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10BD7Cu;
    {
        const bool branch_taken_0x10bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD7Cu;
            // 0x10bd80: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd7c) {
            ctx->pc = 0x10BD98u;
            goto label_10bd98;
        }
    }
    ctx->pc = 0x10BD84u;
label_10bd84:
    // 0x10bd84: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x10bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10bd88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10bd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd8c: 0xc042dce  jal         func_10B738
    ctx->pc = 0x10BD8Cu;
    SET_GPR_U32(ctx, 31, 0x10BD94u);
    ctx->pc = 0x10BD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD8Cu;
            // 0x10bd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B738u;
    if (runtime->hasFunction(0x10B738u)) {
        auto targetFn = runtime->lookupFunction(0x10B738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD94u; }
        if (ctx->pc != 0x10BD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B738_0x10b738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD94u; }
        if (ctx->pc != 0x10BD94u) { return; }
    }
    ctx->pc = 0x10BD94u;
label_10bd94:
    // 0x10bd94: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_10bd98:
    // 0x10bd98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bd9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10bda0: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10BDA0u;
    SET_GPR_U32(ctx, 31, 0x10BDA8u);
    ctx->pc = 0x10BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDA0u;
            // 0x10bda4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BDA8u; }
        if (ctx->pc != 0x10BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BDA8u; }
        if (ctx->pc != 0x10BDA8u) { return; }
    }
    ctx->pc = 0x10BDA8u;
label_10bda8:
    // 0x10bda8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x10bda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10bdac: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x10bdacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10bdb0: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x10bdb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10bdb4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x10bdb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10bdb8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x10bdb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10bdbc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10bdbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10bdc0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10bdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10bdc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10bdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDC8u;
            // 0x10bdcc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BDD0u;
label_10bdd0:
    // 0x10bdd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bdd4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10bdd8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10bddc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x10bddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bde0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bde0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10bde4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bde8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10bde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10bdec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10bdf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10bdf4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x10bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x10bdf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x10bdfc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BDFCu;
    {
        const bool branch_taken_0x10bdfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDFCu;
            // 0x10be00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdfc) {
            ctx->pc = 0x10BE1Cu;
            goto label_10be1c;
        }
    }
    ctx->pc = 0x10BE04u;
    // 0x10be04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10be08: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x10be08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x10be0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10be10: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x10be10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x10be14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BE14u;
    {
        const bool branch_taken_0x10be14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE14u;
            // 0x10be18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be14) {
            ctx->pc = 0x10BE30u;
            goto label_10be30;
        }
    }
    ctx->pc = 0x10BE1Cu;
label_10be1c:
    // 0x10be1c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x10be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x10be20: 0xf  sync
    ctx->pc = 0x10be20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10be24: 0x42000038  ei
    ctx->pc = 0x10be24u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x10be28: 0x3e00008  jr          $ra
    ctx->pc = 0x10BE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE28u;
            // 0x10be2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BE30u;
label_10be30:
    // 0x10be30: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x10be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x10be34: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10be38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10be3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10be3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10be40: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10BE40u;
    {
        const bool branch_taken_0x10be40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE40u;
            // 0x10be44: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be40) {
            ctx->pc = 0x10BEA4u;
            goto label_10bea4;
        }
    }
    ctx->pc = 0x10BE48u;
    // 0x10be48: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x10be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10be4c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10be50: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x10be50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x10be54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10be54u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10be58: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x10be58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10be5c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10be5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10be60: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x10be60u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x10be64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10be64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10be68: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x10be68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x10be6c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10be6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10be70: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x10be70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x10be74: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x10be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x10be78: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x10be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x10be7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10be80: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x10be80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x10be84: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x10be84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x10be88: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10be8c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x10be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10be90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10be90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10be94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10be98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10be9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10BE9Cu;
    {
        const bool branch_taken_0x10be9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE9Cu;
            // 0x10bea0: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be9c) {
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BEA4u;
label_10bea4:
    // 0x10bea4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10bea8: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10BEA8u;
    {
        const bool branch_taken_0x10bea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BEA8u;
            // 0x10beac: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bea8) {
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BEB0u;
    // 0x10beb0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10beb4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10beb8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x10beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10bebc: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x10bebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x10bec0: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x10bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x10bec4: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x10bec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10bec8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10becc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10beccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bed0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10bed4: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x10bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x10bed8: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x10bed8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x10bedc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x10bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x10bee0: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x10bee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x10bee4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x10bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10bee8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x10bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x10beec: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10beecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10bef0: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x10bef0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x10bef4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10bef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10bef8: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x10bef8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x10befc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x10befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10bf00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10bf04: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_10bf08:
    // 0x10bf08: 0xf  sync
    ctx->pc = 0x10bf08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10bf0c: 0x42000038  ei
    ctx->pc = 0x10bf0cu;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x10bf10: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF10u;
            // 0x10bf14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BF18u;
label_10bf18:
    // 0x10bf18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bf1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10bf20: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10bf24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10bf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bf28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10bf2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10bf30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BF30u;
    {
        const bool branch_taken_0x10bf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF30u;
            // 0x10bf34: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf30) {
            ctx->pc = 0x10BF48u;
            goto label_10bf48;
        }
    }
    ctx->pc = 0x10BF38u;
    // 0x10bf38: 0xf  sync
    ctx->pc = 0x10bf38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10bf3c: 0x42000038  ei
    ctx->pc = 0x10bf3cu;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x10bf40: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF40u;
            // 0x10bf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BF48u;
label_10bf48:
    // 0x10bf48: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x10bf48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bf4c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10BF4Cu;
    {
        const bool branch_taken_0x10bf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF4Cu;
            // 0x10bf50: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf4c) {
            ctx->pc = 0x10BFACu;
            goto label_10bfac;
        }
    }
    ctx->pc = 0x10BF54u;
    // 0x10bf54: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10bf58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bf5c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10bf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10bf60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10bf60u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10bf64: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10bf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10bf68: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x10bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x10bf6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bf70: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10bf74: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10bf78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bf78u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10bf7c: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x10bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x10bf80: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x10bf80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x10bf84: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x10bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x10bf88: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10bf8c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10bf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10bf90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10bf94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10bf98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10bf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10bf9c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x10bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10bfa0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10bfa4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10BFA4u;
    {
        const bool branch_taken_0x10bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BFA4u;
            // 0x10bfa8: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bfa4) {
            ctx->pc = 0x10BFDCu;
            goto label_10bfdc;
        }
    }
    ctx->pc = 0x10BFACu;
label_10bfac:
    // 0x10bfac: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10bfb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bfb4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10bfb8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10bfb8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10bfbc: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10bfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10bfc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bfc4: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x10bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10bfc8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x10bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10bfcc: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10bfd0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10bfd4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10bfd4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10bfd8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_10bfdc:
    // 0x10bfdc: 0xf  sync
    ctx->pc = 0x10bfdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10bfe0: 0x42000038  ei
    ctx->pc = 0x10bfe0u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x10bfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BFE4u;
            // 0x10bfe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BFECu;
    // 0x10bfec: 0x0  nop
    ctx->pc = 0x10bfecu;
    // NOP
    ctx->pc = 0x10bff0u;
}

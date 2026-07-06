#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00268B28
// Address: 0x268b28 - 0x268cc0
void sub_00268B28_0x268b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268B28_0x268b28");
#endif

    switch (ctx->pc) {
        case 0x268b5cu: goto label_268b5c;
        case 0x268b78u: goto label_268b78;
        case 0x268b90u: goto label_268b90;
        case 0x268be0u: goto label_268be0;
        case 0x268c8cu: goto label_268c8c;
        case 0x268c98u: goto label_268c98;
        default: break;
    }

    ctx->pc = 0x268b28u;

    // 0x268b28: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x268b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x268b2c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x268b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x268b30: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x268b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x268b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b38: 0xffb402d0  sd          $s4, 0x2D0($sp)
    ctx->pc = 0x268b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x268b3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x268b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b40: 0xffb102a0  sd          $s1, 0x2A0($sp)
    ctx->pc = 0x268b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
    // 0x268b44: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x268b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b48: 0xffbf02e0  sd          $ra, 0x2E0($sp)
    ctx->pc = 0x268b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 31));
    // 0x268b4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x268b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268b50: 0xffb302c0  sd          $s3, 0x2C0($sp)
    ctx->pc = 0x268b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 19));
    // 0x268b54: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x268B54u;
    SET_GPR_U32(ctx, 31, 0x268B5Cu);
    ctx->pc = 0x268B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268B54u;
            // 0x268b58: 0xffb00290  sd          $s0, 0x290($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B5Cu; }
        if (ctx->pc != 0x268B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B5Cu; }
        if (ctx->pc != 0x268B5Cu) { return; }
    }
    ctx->pc = 0x268B5Cu;
label_268b5c:
    // 0x268b5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b60: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x268B60u;
    {
        const bool branch_taken_0x268b60 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x268B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B60u;
            // 0x268b64: 0x27b00280  addiu       $s0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b60) {
            ctx->pc = 0x268B80u;
            goto label_268b80;
        }
    }
    ctx->pc = 0x268B68u;
    // 0x268b68: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x268b6c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268b70: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x268B70u;
    SET_GPR_U32(ctx, 31, 0x268B78u);
    ctx->pc = 0x268B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268B70u;
            // 0x268b74: 0x24a57d90  addiu       $a1, $a1, 0x7D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B78u; }
        if (ctx->pc != 0x268B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B78u; }
        if (ctx->pc != 0x268B78u) { return; }
    }
    ctx->pc = 0x268B78u;
label_268b78:
    // 0x268b78: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x268B78u;
    {
        const bool branch_taken_0x268b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B78u;
            // 0x268b7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b78) {
            ctx->pc = 0x268C9Cu;
            goto label_268c9c;
        }
    }
    ctx->pc = 0x268B80u;
label_268b80:
    // 0x268b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b88: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268B88u;
    SET_GPR_U32(ctx, 31, 0x268B90u);
    ctx->pc = 0x268B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268B88u;
            // 0x268b8c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B90u; }
        if (ctx->pc != 0x268B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B90u; }
        if (ctx->pc != 0x268B90u) { return; }
    }
    ctx->pc = 0x268B90u;
label_268b90:
    // 0x268b90: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x268b90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x268b94: 0x8a450003  lwl         $a1, 0x3($s2)
    ctx->pc = 0x268b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x268b98: 0x9a450000  lwr         $a1, 0x0($s2)
    ctx->pc = 0x268b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x268b9c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x268b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x268ba0: 0x8e621a5c  lw          $v0, 0x1A5C($s3)
    ctx->pc = 0x268ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6748)));
    // 0x268ba4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x268ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268ba8: 0xa3a40280  sb          $a0, 0x280($sp)
    ctx->pc = 0x268ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 640), (uint8_t)GPR_U32(ctx, 4));
    // 0x268bac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x268bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268bb4: 0xafa50284  sw          $a1, 0x284($sp)
    ctx->pc = 0x268bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 5));
    // 0x268bb8: 0xa3a30281  sb          $v1, 0x281($sp)
    ctx->pc = 0x268bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 641), (uint8_t)GPR_U32(ctx, 3));
    // 0x268bbc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x268bbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bc0: 0xae621a5c  sw          $v0, 0x1A5C($s3)
    ctx->pc = 0x268bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6748), GPR_U32(ctx, 2));
    // 0x268bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x268bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x268bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268bd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x268bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bd8: 0xc09a1aa  jal         func_2686A8
    ctx->pc = 0x268BD8u;
    SET_GPR_U32(ctx, 31, 0x268BE0u);
    ctx->pc = 0x268BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268BD8u;
            // 0x268bdc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2686A8u;
    if (runtime->hasFunction(0x2686A8u)) {
        auto targetFn = runtime->lookupFunction(0x2686A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BE0u; }
        if (ctx->pc != 0x268BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002686A8_0x2686a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BE0u; }
        if (ctx->pc != 0x268BE0u) { return; }
    }
    ctx->pc = 0x268BE0u;
label_268be0:
    // 0x268be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268be4: 0x600002a  bltz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x268BE4u;
    {
        const bool branch_taken_0x268be4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x268BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268BE4u;
            // 0x268be8: 0x93a20078  lbu         $v0, 0x78($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268be4) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268BECu;
    // 0x268bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268BECu;
    {
        const bool branch_taken_0x268bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268BECu;
            // 0x268bf0: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bec) {
            ctx->pc = 0x268C08u;
            goto label_268c08;
        }
    }
    ctx->pc = 0x268BF4u;
    // 0x268bf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x268bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x268bf8: 0x27a30079  addiu       $v1, $sp, 0x79
    ctx->pc = 0x268bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 121));
    // 0x268bfc: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x268bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x268c00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268C00u;
    {
        const bool branch_taken_0x268c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C00u;
            // 0x268c04: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c00) {
            ctx->pc = 0x268C0Cu;
            goto label_268c0c;
        }
    }
    ctx->pc = 0x268C08u;
label_268c08:
    // 0x268c08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x268c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_268c0c:
    // 0x268c0c: 0x88a30007  lwl         $v1, 0x7($a1)
    ctx->pc = 0x268c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x268c10: 0x98a30004  lwr         $v1, 0x4($a1)
    ctx->pc = 0x268c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x268c14: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x268c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x268c18: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x268C18u;
    {
        const bool branch_taken_0x268c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C18u;
            // 0x268c1c: 0x90850001  lbu         $a1, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c18) {
            ctx->pc = 0x268C54u;
            goto label_268c54;
        }
    }
    ctx->pc = 0x268C20u;
    // 0x268c20: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x268c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x268c24: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x268C24u;
    {
        const bool branch_taken_0x268c24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x268C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C24u;
            // 0x268c28: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c24) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C2Cu;
    // 0x268c2c: 0xde820008  ld          $v0, 0x8($s4)
    ctx->pc = 0x268c2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x268c30: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x268c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x268c34: 0x30420402  andi        $v0, $v0, 0x402
    ctx->pc = 0x268c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1026);
    // 0x268c38: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x268C38u;
    {
        const bool branch_taken_0x268c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x268C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C38u;
            // 0x268c3c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c38) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C40u;
    // 0x268c40: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x268c40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x268c44: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268C44u;
    {
        const bool branch_taken_0x268c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C44u;
            // 0x268c48: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c44) {
            ctx->pc = 0x268C58u;
            goto label_268c58;
        }
    }
    ctx->pc = 0x268C4Cu;
    // 0x268c4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x268C4Cu;
    {
        const bool branch_taken_0x268c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c4c) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C54u;
label_268c54:
    // 0x268c54: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x268c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_268c58:
    // 0x268c58: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x268C58u;
    {
        const bool branch_taken_0x268c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x268C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C58u;
            // 0x268c5c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c58) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C60u;
    // 0x268c60: 0x8e6b1a5c  lw          $t3, 0x1A5C($s3)
    ctx->pc = 0x268c60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6748)));
    // 0x268c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x268c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x268c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268c70: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x268c70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x268c74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x268c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c78: 0xae6b1a5c  sw          $t3, 0x1A5C($s3)
    ctx->pc = 0x268c78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6748), GPR_U32(ctx, 11));
    // 0x268c7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x268c80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c84: 0xc09a1aa  jal         func_2686A8
    ctx->pc = 0x268C84u;
    SET_GPR_U32(ctx, 31, 0x268C8Cu);
    ctx->pc = 0x268C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268C84u;
            // 0x268c88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2686A8u;
    if (runtime->hasFunction(0x2686A8u)) {
        auto targetFn = runtime->lookupFunction(0x2686A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C8Cu; }
        if (ctx->pc != 0x268C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002686A8_0x2686a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C8Cu; }
        if (ctx->pc != 0x268C8Cu) { return; }
    }
    ctx->pc = 0x268C8Cu;
label_268c8c:
    // 0x268c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268c90:
    // 0x268c90: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x268C90u;
    SET_GPR_U32(ctx, 31, 0x268C98u);
    ctx->pc = 0x268C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268C90u;
            // 0x268c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C98u; }
        if (ctx->pc != 0x268C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C98u; }
        if (ctx->pc != 0x268C98u) { return; }
    }
    ctx->pc = 0x268C98u;
label_268c98:
    // 0x268c98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x268c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268c9c:
    // 0x268c9c: 0xdfbf02e0  ld          $ra, 0x2E0($sp)
    ctx->pc = 0x268c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x268ca0: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x268ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x268ca4: 0xdfb302c0  ld          $s3, 0x2C0($sp)
    ctx->pc = 0x268ca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x268ca8: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x268ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x268cac: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x268cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x268cb0: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x268cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x268cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x268CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268CB4u;
            // 0x268cb8: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268CBCu;
    // 0x268cbc: 0x0  nop
    ctx->pc = 0x268cbcu;
    // NOP
    ctx->pc = 0x268cc0u;
}

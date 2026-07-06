#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DC58
// Address: 0x11dc58 - 0x11dfd8
void sub_0011DC58_0x11dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DC58_0x11dc58");
#endif

    switch (ctx->pc) {
        case 0x11dcbcu: goto label_11dcbc;
        case 0x11dce8u: goto label_11dce8;
        case 0x11dd08u: goto label_11dd08;
        case 0x11dd48u: goto label_11dd48;
        case 0x11dd58u: goto label_11dd58;
        case 0x11dd88u: goto label_11dd88;
        case 0x11ddd0u: goto label_11ddd0;
        case 0x11dde0u: goto label_11dde0;
        case 0x11de28u: goto label_11de28;
        case 0x11de38u: goto label_11de38;
        case 0x11deb8u: goto label_11deb8;
        case 0x11dee4u: goto label_11dee4;
        case 0x11df08u: goto label_11df08;
        case 0x11df50u: goto label_11df50;
        case 0x11df70u: goto label_11df70;
        case 0x11dfbcu: goto label_11dfbc;
        default: break;
    }

    ctx->pc = 0x11dc58u;

label_11dc58:
    // 0x11dc58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11dc5c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11dc60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11dc64: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11dc68: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11dc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11dc6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11dc70: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11dc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11dc74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11dc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11dc7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11dc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc80: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x11dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x11dc84: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11dc88: 0xac43dd40  sw          $v1, -0x22C0($v0)
    ctx->pc = 0x11dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 3));
    // 0x11dc8c: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11dc90: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x11dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x11dc94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dc98: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x11dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x11dc9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dca0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11dca4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11dca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dca8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11dca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11dcac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11dcacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcb0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11dcb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11dcb4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11DCB4u;
    SET_GPR_U32(ctx, 31, 0x11DCBCu);
    ctx->pc = 0x11DCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCB4u;
            // 0x11dcb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCBCu; }
        if (ctx->pc != 0x11DCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCBCu; }
        if (ctx->pc != 0x11DCBCu) { return; }
    }
    ctx->pc = 0x11DCBCu;
label_11dcbc:
    // 0x11dcbc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DCBCu;
    {
        const bool branch_taken_0x11dcbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11dcbc) {
            ctx->pc = 0x11DCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCBCu;
            // 0x11dcc0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DCCCu;
            goto label_11dccc;
        }
    }
    ctx->pc = 0x11DCC4u;
    // 0x11dcc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DCC4u;
    {
        const bool branch_taken_0x11dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCC4u;
            // 0x11dcc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcc4) {
            ctx->pc = 0x11DCF0u;
            goto label_11dcf0;
        }
    }
    ctx->pc = 0x11DCCCu;
label_11dccc:
    // 0x11dccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dcd0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DCD0u;
    {
        const bool branch_taken_0x11dcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCD0u;
            // 0x11dcd4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcd0) {
            ctx->pc = 0x11DCF0u;
            goto label_11dcf0;
        }
    }
    ctx->pc = 0x11DCD8u;
    // 0x11dcd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11dcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11dcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dce0: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x11DCE0u;
    SET_GPR_U32(ctx, 31, 0x11DCE8u);
    ctx->pc = 0x11DCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCE0u;
            // 0x11dce4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (runtime->hasFunction(0x11D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x11D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCE8u; }
        if (ctx->pc != 0x11DCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D4A0_0x11d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCE8u; }
        if (ctx->pc != 0x11DCE8u) { return; }
    }
    ctx->pc = 0x11DCE8u;
label_11dce8:
    // 0x11dce8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11dcec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11dcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11dcf0:
    // 0x11dcf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11dcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11dcf4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11dcf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dcf8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11dcf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dcfc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11dcfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd00: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD00u;
            // 0x11dd04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DD08u;
label_11dd08:
    // 0x11dd08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11dd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd0c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11dd10: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11dd14: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x11dd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11dd18: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11dd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11dd1c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11dd1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11dd20: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11dd24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11dd28: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11dd2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11dd30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11dd34: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11dd38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DD38u;
    {
        const bool branch_taken_0x11dd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD38u;
            // 0x11dd3c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd38) {
            ctx->pc = 0x11DD58u;
            goto label_11dd58;
        }
    }
    ctx->pc = 0x11DD40u;
    // 0x11dd40: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11DD40u;
    SET_GPR_U32(ctx, 31, 0x11DD48u);
    ctx->pc = 0x11DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD40u;
            // 0x11dd44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (runtime->hasFunction(0x11D1C8u)) {
        auto targetFn = runtime->lookupFunction(0x11D1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DD48u; }
        if (ctx->pc != 0x11DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D1C8_0x11d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DD48u; }
        if (ctx->pc != 0x11DD48u) { return; }
    }
    ctx->pc = 0x11DD48u;
label_11dd48:
    // 0x11dd48: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x11dd48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x11dd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dd50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DD50u;
    {
        const bool branch_taken_0x11dd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD50u;
            // 0x11dd54: 0x93a20064  lbu         $v0, 0x64($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd50) {
            ctx->pc = 0x11DD60u;
            goto label_11dd60;
        }
    }
    ctx->pc = 0x11DD58u;
label_11dd58:
    // 0x11dd58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11DD58u;
    {
        const bool branch_taken_0x11dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD58u;
            // 0x11dd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd58) {
            ctx->pc = 0x11DD7Cu;
            goto label_11dd7c;
        }
    }
    ctx->pc = 0x11DD60u;
label_11dd60:
    // 0x11dd60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11dd60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11dd64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DD64u;
    {
        const bool branch_taken_0x11dd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD64u;
            // 0x11dd68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd64) {
            ctx->pc = 0x11DD7Cu;
            goto label_11dd7c;
        }
    }
    ctx->pc = 0x11DD6Cu;
    // 0x11dd6c: 0x93a20066  lbu         $v0, 0x66($sp)
    ctx->pc = 0x11dd6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 102)));
    // 0x11dd70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11dd74: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11DD74u;
    {
        const bool branch_taken_0x11dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD74u;
            // 0x11dd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd74) {
            ctx->pc = 0x11DD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dd58;
        }
    }
    ctx->pc = 0x11DD7Cu;
label_11dd7c:
    // 0x11dd7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11dd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11dd80: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD80u;
            // 0x11dd84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DD88u;
label_11dd88:
    // 0x11dd88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11dd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd8c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11dd90: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11dd94: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x11dd94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11dd98: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11dd98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11dd9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dda0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11dda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dda8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11ddac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11ddb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11ddb4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11ddb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DDB8u;
    {
        const bool branch_taken_0x11ddb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDB8u;
            // 0x11ddbc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddb8) {
            ctx->pc = 0x11DDC8u;
            goto label_11ddc8;
        }
    }
    ctx->pc = 0x11DDC0u;
    // 0x11ddc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11DDC0u;
    {
        const bool branch_taken_0x11ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDC0u;
            // 0x11ddc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddc0) {
            ctx->pc = 0x11DDD0u;
            goto label_11ddd0;
        }
    }
    ctx->pc = 0x11DDC8u;
label_11ddc8:
    // 0x11ddc8: 0xc047716  jal         func_11DC58
    ctx->pc = 0x11DDC8u;
    SET_GPR_U32(ctx, 31, 0x11DDD0u);
    ctx->pc = 0x11DDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDC8u;
            // 0x11ddcc: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC58u;
    goto label_11dc58;
    ctx->pc = 0x11DDD0u;
label_11ddd0:
    // 0x11ddd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ddd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ddd4: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDD4u;
            // 0x11ddd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DDDCu;
    // 0x11dddc: 0x0  nop
    ctx->pc = 0x11dddcu;
    // NOP
label_11dde0:
    // 0x11dde0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11dde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dde4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11dde8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11ddec: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x11ddecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11ddf0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11ddf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11ddf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ddf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ddf8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11ddfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11de00: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11de04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11de08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11de0c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11de10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DE10u;
    {
        const bool branch_taken_0x11de10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE10u;
            // 0x11de14: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de10) {
            ctx->pc = 0x11DE20u;
            goto label_11de20;
        }
    }
    ctx->pc = 0x11DE18u;
    // 0x11de18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11DE18u;
    {
        const bool branch_taken_0x11de18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE18u;
            // 0x11de1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de18) {
            ctx->pc = 0x11DE28u;
            goto label_11de28;
        }
    }
    ctx->pc = 0x11DE20u;
label_11de20:
    // 0x11de20: 0xc047716  jal         func_11DC58
    ctx->pc = 0x11DE20u;
    SET_GPR_U32(ctx, 31, 0x11DE28u);
    ctx->pc = 0x11DE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE20u;
            // 0x11de24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC58u;
    goto label_11dc58;
    ctx->pc = 0x11DE28u;
label_11de28:
    // 0x11de28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11de28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE2Cu;
            // 0x11de30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DE34u;
    // 0x11de34: 0x0  nop
    ctx->pc = 0x11de34u;
    // NOP
label_11de38:
    // 0x11de38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11de38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11de3c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11de40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11de44: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x11de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11de48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11de4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11de4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de50: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11de50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11de54: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11de58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11de5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11de5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de60: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x11de60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x11de64: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11de64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11de68: 0xac43dd40  sw          $v1, -0x22C0($v0)
    ctx->pc = 0x11de68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 3));
    // 0x11de6c: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11de70: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x11de70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x11de74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11de74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11de78: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x11de78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11de7c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x11de7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11de80: 0x88c3000b  lwl         $v1, 0xB($a2)
    ctx->pc = 0x11de80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x11de84: 0x98c30008  lwr         $v1, 0x8($a2)
    ctx->pc = 0x11de84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x11de88: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x11de88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11de8c: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x11de8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11de90: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x11de90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11de94: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x11de94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11de98: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11de98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dea0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11dea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dea8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11dea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11deac: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11deacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11deb0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11DEB0u;
    SET_GPR_U32(ctx, 31, 0x11DEB8u);
    ctx->pc = 0x11DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEB0u;
            // 0x11deb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEB8u; }
        if (ctx->pc != 0x11DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEB8u; }
        if (ctx->pc != 0x11DEB8u) { return; }
    }
    ctx->pc = 0x11DEB8u;
label_11deb8:
    // 0x11deb8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DEB8u;
    {
        const bool branch_taken_0x11deb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11deb8) {
            ctx->pc = 0x11DEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEB8u;
            // 0x11debc: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DEC8u;
            goto label_11dec8;
        }
    }
    ctx->pc = 0x11DEC0u;
    // 0x11dec0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DEC0u;
    {
        const bool branch_taken_0x11dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEC0u;
            // 0x11dec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dec0) {
            ctx->pc = 0x11DEECu;
            goto label_11deec;
        }
    }
    ctx->pc = 0x11DEC8u;
label_11dec8:
    // 0x11dec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11decc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DECCu;
    {
        const bool branch_taken_0x11decc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DECCu;
            // 0x11ded0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11decc) {
            ctx->pc = 0x11DEECu;
            goto label_11deec;
        }
    }
    ctx->pc = 0x11DED4u;
    // 0x11ded4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ded8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dedc: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x11DEDCu;
    SET_GPR_U32(ctx, 31, 0x11DEE4u);
    ctx->pc = 0x11DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEDCu;
            // 0x11dee0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (runtime->hasFunction(0x11D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x11D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEE4u; }
        if (ctx->pc != 0x11DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D4A0_0x11d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEE4u; }
        if (ctx->pc != 0x11DEE4u) { return; }
    }
    ctx->pc = 0x11DEE4u;
label_11dee4:
    // 0x11dee4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x11dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11dee8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11dee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11deec:
    // 0x11deec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11deecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11def0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11def0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11def4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11def4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11def8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11def8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11defc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEFCu;
            // 0x11df00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DF04u;
    // 0x11df04: 0x0  nop
    ctx->pc = 0x11df04u;
    // NOP
label_11df08:
    // 0x11df08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11df08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11df0c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11df10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11df10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11df14: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11df14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11df18: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11df18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11df1c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11df20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11df24: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11df28: 0xac43dd40  sw          $v1, -0x22C0($v0)
    ctx->pc = 0x11df28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 3));
    // 0x11df2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11df30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11df30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11df34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11df34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11df38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df3c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11df3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11df40: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11df40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df44: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11df44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11df48: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11DF48u;
    SET_GPR_U32(ctx, 31, 0x11DF50u);
    ctx->pc = 0x11DF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF48u;
            // 0x11df4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF50u; }
        if (ctx->pc != 0x11DF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF50u; }
        if (ctx->pc != 0x11DF50u) { return; }
    }
    ctx->pc = 0x11DF50u;
label_11df50:
    // 0x11df50: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DF50u;
    {
        const bool branch_taken_0x11df50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11df50) {
            ctx->pc = 0x11DF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF50u;
            // 0x11df54: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DF5Cu;
            goto label_11df5c;
        }
    }
    ctx->pc = 0x11DF58u;
    // 0x11df58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11df58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11df5c:
    // 0x11df5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11df5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11df60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11df60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11df64: 0x3e00008  jr          $ra
    ctx->pc = 0x11DF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF64u;
            // 0x11df68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DF6Cu;
    // 0x11df6c: 0x0  nop
    ctx->pc = 0x11df6cu;
    // NOP
label_11df70:
    // 0x11df70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11df74: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11df78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11df7c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x11df80: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11df80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11df84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11df88: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x11df88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x11df8c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11df90: 0xac46dd40  sw          $a2, -0x22C0($v0)
    ctx->pc = 0x11df90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 6));
    // 0x11df94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11df94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11df98: 0x2464db00  addiu       $a0, $v1, -0x2500
    ctx->pc = 0x11df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957824));
    // 0x11df9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11dfa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11dfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfa8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11dfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11dfac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11dfacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfb0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11dfb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11dfb4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11DFB4u;
    SET_GPR_U32(ctx, 31, 0x11DFBCu);
    ctx->pc = 0x11DFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFB4u;
            // 0x11dfb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFBCu; }
        if (ctx->pc != 0x11DFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFBCu; }
        if (ctx->pc != 0x11DFBCu) { return; }
    }
    ctx->pc = 0x11DFBCu;
label_11dfbc:
    // 0x11dfbc: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DFBCu;
    {
        const bool branch_taken_0x11dfbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11dfbc) {
            ctx->pc = 0x11DFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFBCu;
            // 0x11dfc0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DFC8u;
            goto label_11dfc8;
        }
    }
    ctx->pc = 0x11DFC4u;
    // 0x11dfc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11dfc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dfc8:
    // 0x11dfc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11dfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dfcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11dfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFD0u;
            // 0x11dfd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DFD8u;
    ctx->pc = 0x11dfd8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D028
// Address: 0x27d028 - 0x27d298
void sub_0027D028_0x27d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D028_0x27d028");
#endif

    switch (ctx->pc) {
        case 0x27d040u: goto label_27d040;
        case 0x27d070u: goto label_27d070;
        case 0x27d078u: goto label_27d078;
        case 0x27d098u: goto label_27d098;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d118u: goto label_27d118;
        case 0x27d12cu: goto label_27d12c;
        case 0x27d158u: goto label_27d158;
        case 0x27d164u: goto label_27d164;
        case 0x27d190u: goto label_27d190;
        case 0x27d1b0u: goto label_27d1b0;
        case 0x27d1c0u: goto label_27d1c0;
        case 0x27d1c8u: goto label_27d1c8;
        case 0x27d248u: goto label_27d248;
        case 0x27d260u: goto label_27d260;
        case 0x27d274u: goto label_27d274;
        case 0x27d288u: goto label_27d288;
        default: break;
    }

    ctx->pc = 0x27d028u;

    // 0x27d028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d038: 0xc09ef6c  jal         func_27BDB0
    ctx->pc = 0x27D038u;
    SET_GPR_U32(ctx, 31, 0x27D040u);
    ctx->pc = 0x27BDB0u;
    if (runtime->hasFunction(0x27BDB0u)) {
        auto targetFn = runtime->lookupFunction(0x27BDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D040u; }
        if (ctx->pc != 0x27D040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BDB0_0x27bdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D040u; }
        if (ctx->pc != 0x27D040u) { return; }
    }
    ctx->pc = 0x27D040u;
label_27d040:
    // 0x27d040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27d040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d044: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27d048: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27d048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27d04c: 0x24503558  addiu       $s0, $v0, 0x3558
    ctx->pc = 0x27d04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13656));
    // 0x27d050: 0x8c623550  lw          $v0, 0x3550($v1)
    ctx->pc = 0x27d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13648)));
    // 0x27d054: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27D054u;
    {
        const bool branch_taken_0x27d054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D054u;
            // 0x27d058: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d054) {
            ctx->pc = 0x27D080u;
            goto label_27d080;
        }
    }
    ctx->pc = 0x27D05Cu;
    // 0x27d05c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d060: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D060u;
    {
        const bool branch_taken_0x27d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D060u;
            // 0x27d064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d060) {
            ctx->pc = 0x27D07Cu;
            goto label_27d07c;
        }
    }
    ctx->pc = 0x27D068u;
    // 0x27d068: 0xc0ac0d0  jal         func_2B0340
    ctx->pc = 0x27D068u;
    SET_GPR_U32(ctx, 31, 0x27D070u);
    ctx->pc = 0x2B0340u;
    if (runtime->hasFunction(0x2B0340u)) {
        auto targetFn = runtime->lookupFunction(0x2B0340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D070u; }
        if (ctx->pc != 0x27D070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0340_0x2b0340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D070u; }
        if (ctx->pc != 0x27D070u) { return; }
    }
    ctx->pc = 0x27D070u;
label_27d070:
    // 0x27d070: 0xc0abfba  jal         func_2AFEE8
    ctx->pc = 0x27D070u;
    SET_GPR_U32(ctx, 31, 0x27D078u);
    ctx->pc = 0x27D074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D070u;
            // 0x27d074: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFEE8u;
    if (runtime->hasFunction(0x2AFEE8u)) {
        auto targetFn = runtime->lookupFunction(0x2AFEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D078u; }
        if (ctx->pc != 0x27D078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFEE8_0x2afee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D078u; }
        if (ctx->pc != 0x27D078u) { return; }
    }
    ctx->pc = 0x27D078u;
label_27d078:
    // 0x27d078: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27d078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27d07c:
    // 0x27d07c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27d080:
    // 0x27d080: 0x2450353c  addiu       $s0, $v0, 0x353C
    ctx->pc = 0x27d080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13628));
    // 0x27d084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27d084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d088: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D088u;
    {
        const bool branch_taken_0x27d088 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27D08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D088u;
            // 0x27d08c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d088) {
            ctx->pc = 0x27D0A0u;
            goto label_27d0a0;
        }
    }
    ctx->pc = 0x27D090u;
    // 0x27d090: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x27D090u;
    SET_GPR_U32(ctx, 31, 0x27D098u);
    ctx->pc = 0x27D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D090u;
            // 0x27d094: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (runtime->hasFunction(0x2FC8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D098u; }
        if (ctx->pc != 0x27D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC8E0_0x2fc8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D098u; }
        if (ctx->pc != 0x27D098u) { return; }
    }
    ctx->pc = 0x27D098u;
label_27d098:
    // 0x27d098: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27d098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d09c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x27d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_27d0a0:
    // 0x27d0a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27d0a4: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D0A4u;
    {
        const bool branch_taken_0x27d0a4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x27d0a4) {
            ctx->pc = 0x27D0B4u;
            goto label_27d0b4;
        }
    }
    ctx->pc = 0x27D0ACu;
    // 0x27d0ac: 0xc09ef8a  jal         func_27BE28
    ctx->pc = 0x27D0ACu;
    SET_GPR_U32(ctx, 31, 0x27D0B4u);
    ctx->pc = 0x27BE28u;
    if (runtime->hasFunction(0x27BE28u)) {
        auto targetFn = runtime->lookupFunction(0x27BE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0B4u; }
        if (ctx->pc != 0x27D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BE28_0x27be28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0B4u; }
        if (ctx->pc != 0x27D0B4u) { return; }
    }
    ctx->pc = 0x27D0B4u;
label_27d0b4:
    // 0x27d0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d0b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x27D0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0C4u;
            // 0x27d0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D0CCu;
    // 0x27d0cc: 0x0  nop
    ctx->pc = 0x27d0ccu;
    // NOP
label_27d0d0:
    // 0x27d0d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27d0d4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27d0d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27d0d8: 0x8c433550  lw          $v1, 0x3550($v0)
    ctx->pc = 0x27d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13648)));
    // 0x27d0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d0e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d0e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27d0e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27d0ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27d0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27d0f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27d0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x27d0f4: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x27d0f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d0f8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x27d0f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27d0fc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x27D0FCu;
    {
        const bool branch_taken_0x27d0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0FCu;
            // 0x27d100: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0fc) {
            ctx->pc = 0x27D164u;
            goto label_27d164;
        }
    }
    ctx->pc = 0x27D104u;
    // 0x27d104: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27d108: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27d108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d10c: 0x244234c0  addiu       $v0, $v0, 0x34C0
    ctx->pc = 0x27d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x27d110: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x27d110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x27d114: 0x0  nop
    ctx->pc = 0x27d114u;
    // NOP
label_27d118:
    // 0x27d118: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d11c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D11Cu;
    {
        const bool branch_taken_0x27d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D11Cu;
            // 0x27d120: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d11c) {
            ctx->pc = 0x27D130u;
            goto label_27d130;
        }
    }
    ctx->pc = 0x27D124u;
    // 0x27d124: 0xc0a3a54  jal         func_28E950
    ctx->pc = 0x27D124u;
    SET_GPR_U32(ctx, 31, 0x27D12Cu);
    ctx->pc = 0x28E950u;
    if (runtime->hasFunction(0x28E950u)) {
        auto targetFn = runtime->lookupFunction(0x28E950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D12Cu; }
        if (ctx->pc != 0x27D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E950_0x28e950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D12Cu; }
        if (ctx->pc != 0x27D12Cu) { return; }
    }
    ctx->pc = 0x27D12Cu;
label_27d12c:
    // 0x27d12c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27d130:
    // 0x27d130: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x27d130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27d134: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27D134u;
    {
        const bool branch_taken_0x27d134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D134u;
            // 0x27d138: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d134) {
            ctx->pc = 0x27D118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d118;
        }
    }
    ctx->pc = 0x27D13Cu;
    // 0x27d13c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27d140: 0x24503554  addiu       $s0, $v0, 0x3554
    ctx->pc = 0x27d140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13652));
    // 0x27d144: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d148: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D148u;
    {
        const bool branch_taken_0x27d148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d148) {
            ctx->pc = 0x27D15Cu;
            goto label_27d15c;
        }
    }
    ctx->pc = 0x27D150u;
    // 0x27d150: 0xc0ac330  jal         func_2B0CC0
    ctx->pc = 0x27D150u;
    SET_GPR_U32(ctx, 31, 0x27D158u);
    ctx->pc = 0x2B0CC0u;
    if (runtime->hasFunction(0x2B0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D158u; }
        if (ctx->pc != 0x27D158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0CC0_0x2b0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D158u; }
        if (ctx->pc != 0x27D158u) { return; }
    }
    ctx->pc = 0x27D158u;
label_27d158:
    // 0x27d158: 0x0  nop
    ctx->pc = 0x27d158u;
    // NOP
label_27d15c:
    // 0x27d15c: 0xc0abe1a  jal         func_2AF868
    ctx->pc = 0x27D15Cu;
    SET_GPR_U32(ctx, 31, 0x27D164u);
    ctx->pc = 0x2AF868u;
    if (runtime->hasFunction(0x2AF868u)) {
        auto targetFn = runtime->lookupFunction(0x2AF868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D164u; }
        if (ctx->pc != 0x27D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF868_0x2af868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D164u; }
        if (ctx->pc != 0x27D164u) { return; }
    }
    ctx->pc = 0x27D164u;
label_27d164:
    // 0x27d164: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x27d164u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x27d168: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x27d168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d16c: 0x26313544  addiu       $s1, $s1, 0x3544
    ctx->pc = 0x27d16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 13636));
    // 0x27d170: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27d170u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x27d174: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27d174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d178: 0x26103548  addiu       $s0, $s0, 0x3548
    ctx->pc = 0x27d178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13640));
    // 0x27d17c: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27d17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27d180: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27d180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27d184: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d188: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x27D188u;
    SET_GPR_U32(ctx, 31, 0x27D190u);
    ctx->pc = 0x27D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D188u;
            // 0x27d18c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC520u;
    if (runtime->hasFunction(0x2FC520u)) {
        auto targetFn = runtime->lookupFunction(0x2FC520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D190u; }
        if (ctx->pc != 0x27D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC520_0x2fc520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D190u; }
        if (ctx->pc != 0x27D190u) { return; }
    }
    ctx->pc = 0x27D190u;
label_27d190:
    // 0x27d190: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x27d190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x27d194: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27d194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27d198: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27d198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27d19c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x27d19cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x27d1a0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27d1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27d1a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27d1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27d1a8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x27D1A8u;
    SET_GPR_U32(ctx, 31, 0x27D1B0u);
    ctx->pc = 0x27D1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1A8u;
            // 0x27d1ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1B0u; }
        if (ctx->pc != 0x27D1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1B0u; }
        if (ctx->pc != 0x27D1B0u) { return; }
    }
    ctx->pc = 0x27D1B0u;
label_27d1b0:
    // 0x27d1b0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x27d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x27d1b4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x27d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x27d1b8: 0x24503c50  addiu       $s0, $v0, 0x3C50
    ctx->pc = 0x27d1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15440));
    // 0x27d1bc: 0x0  nop
    ctx->pc = 0x27d1bcu;
    // NOP
label_27d1c0:
    // 0x27d1c0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27D1C0u;
    SET_GPR_U32(ctx, 31, 0x27D1C8u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1C8u; }
        if (ctx->pc != 0x27D1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1C8u; }
        if (ctx->pc != 0x27D1C8u) { return; }
    }
    ctx->pc = 0x27D1C8u;
label_27d1c8:
    // 0x27d1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27d1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27d1d0: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x27d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x27d1d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27d1d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27d1d8: 0x0  nop
    ctx->pc = 0x27d1d8u;
    // NOP
    // 0x27d1dc: 0x0  nop
    ctx->pc = 0x27d1dcu;
    // NOP
    // 0x27d1e0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27d1e0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27d1e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27d1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27d1e8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27d1e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d1ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d1ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d1f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d1f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d1f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D1F4u;
    {
        const bool branch_taken_0x27d1f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1F4u;
            // 0x27d1f8: 0x2e630200  sltiu       $v1, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1f4) {
            ctx->pc = 0x27D20Cu;
            goto label_27d20c;
        }
    }
    ctx->pc = 0x27D1FCu;
    // 0x27d1fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27d1fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27d200: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d204: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d208: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x27d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_27d20c:
    // 0x27d20c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27D20Cu;
    {
        const bool branch_taken_0x27d20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D20Cu;
            // 0x27d210: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d20c) {
            ctx->pc = 0x27D1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d1c0;
        }
    }
    ctx->pc = 0x27D214u;
    // 0x27d214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27d220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d224: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27d224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27d228: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27d228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d22c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27d230: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x27d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27d234: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x27d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d238: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x27d238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d23c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D23Cu;
            // 0x27d240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D244u;
    // 0x27d244: 0x0  nop
    ctx->pc = 0x27d244u;
    // NOP
label_27d248:
    // 0x27d248: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27d24c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d24cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d250: 0x8c443548  lw          $a0, 0x3548($v0)
    ctx->pc = 0x27d250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13640)));
    // 0x27d254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d258: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x27D258u;
    SET_GPR_U32(ctx, 31, 0x27D260u);
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D260u; }
        if (ctx->pc != 0x27D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D260u; }
        if (ctx->pc != 0x27D260u) { return; }
    }
    ctx->pc = 0x27D260u;
label_27d260:
    // 0x27d260: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D260u;
    {
        const bool branch_taken_0x27d260 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D260u;
            // 0x27d264: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d260) {
            ctx->pc = 0x27D280u;
            goto label_27d280;
        }
    }
    ctx->pc = 0x27D268u;
    // 0x27d268: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27d26c: 0xc0bf12c  jal         func_2FC4B0
    ctx->pc = 0x27D26Cu;
    SET_GPR_U32(ctx, 31, 0x27D274u);
    ctx->pc = 0x27D270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D26Cu;
            // 0x27d270: 0x8c44353c  lw          $a0, 0x353C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13628)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4B0u;
    if (runtime->hasFunction(0x2FC4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D274u; }
        if (ctx->pc != 0x27D274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4B0_0x2fc4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D274u; }
        if (ctx->pc != 0x27D274u) { return; }
    }
    ctx->pc = 0x27D274u;
label_27d274:
    // 0x27d274: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27D274u;
    {
        const bool branch_taken_0x27d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D274u;
            // 0x27d278: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d274) {
            ctx->pc = 0x27D28Cu;
            goto label_27d28c;
        }
    }
    ctx->pc = 0x27D27Cu;
    // 0x27d27c: 0x0  nop
    ctx->pc = 0x27d27cu;
    // NOP
label_27d280:
    // 0x27d280: 0xc0bf13e  jal         func_2FC4F8
    ctx->pc = 0x27D280u;
    SET_GPR_U32(ctx, 31, 0x27D288u);
    ctx->pc = 0x27D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D280u;
            // 0x27d284: 0x8c443544  lw          $a0, 0x3544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4F8u;
    if (runtime->hasFunction(0x2FC4F8u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D288u; }
        if (ctx->pc != 0x27D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4F8_0x2fc4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D288u; }
        if (ctx->pc != 0x27D288u) { return; }
    }
    ctx->pc = 0x27D288u;
label_27d288:
    // 0x27d288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27d28c:
    // 0x27d28c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D28Cu;
            // 0x27d290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D294u;
    // 0x27d294: 0x0  nop
    ctx->pc = 0x27d294u;
    // NOP
    ctx->pc = 0x27d298u;
}

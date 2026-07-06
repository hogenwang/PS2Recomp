#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CB80
// Address: 0x14cb80 - 0x14cc60
void sub_0014CB80_0x14cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CB80_0x14cb80");
#endif

    switch (ctx->pc) {
        case 0x14cc00u: goto label_14cc00;
        case 0x14cc10u: goto label_14cc10;
        case 0x14cc20u: goto label_14cc20;
        case 0x14cc34u: goto label_14cc34;
        case 0x14cc44u: goto label_14cc44;
        default: break;
    }

    ctx->pc = 0x14cb80u;

    // 0x14cb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cb84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14cb88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14cb8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14cb90: 0x90635ce8  lbu         $v1, 0x5CE8($v1)
    ctx->pc = 0x14cb90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23784)));
    // 0x14cb94: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x14CB94u;
    {
        const bool branch_taken_0x14cb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cb94) {
            ctx->pc = 0x14CB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB94u;
            // 0x14cb98: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CC48u;
            goto label_14cc48;
        }
    }
    ctx->pc = 0x14CB9Cu;
    // 0x14cb9c: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x14cb9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14cba0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x14cba4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x14cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14cba8: 0x24a5e234  addiu       $a1, $a1, -0x1DCC
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959668));
    // 0x14cbac: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x14cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14cbb0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14cbb4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x14cbb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x14cbb8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14cbbc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x14cbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14cbc0: 0x9042b269  lbu         $v0, -0x4D97($v0)
    ctx->pc = 0x14cbc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947433)));
    // 0x14cbc4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14cbc8: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x14cbc8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14cbcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CBCCu;
    {
        const bool branch_taken_0x14cbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBCCu;
            // 0x14cbd0: 0xa0655ce8  sb          $a1, 0x5CE8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23784), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cbcc) {
            ctx->pc = 0x14CBE8u;
            goto label_14cbe8;
        }
    }
    ctx->pc = 0x14CBD4u;
    // 0x14cbd4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14cbd8: 0x2442e230  addiu       $v0, $v0, -0x1DD0
    ctx->pc = 0x14cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959664));
    // 0x14cbdc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14cbe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14CBE0u;
    {
        const bool branch_taken_0x14cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBE0u;
            // 0x14cbe4: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cbe0) {
            ctx->pc = 0x14CBF8u;
            goto label_14cbf8;
        }
    }
    ctx->pc = 0x14CBE8u;
label_14cbe8:
    // 0x14cbe8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14cbec: 0x2442e232  addiu       $v0, $v0, -0x1DCE
    ctx->pc = 0x14cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959666));
    // 0x14cbf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14cbf4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x14cbf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14cbf8:
    // 0x14cbf8: 0xc053030  jal         func_14C0C0
    ctx->pc = 0x14CBF8u;
    SET_GPR_U32(ctx, 31, 0x14CC00u);
    ctx->pc = 0x14CBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBF8u;
            // 0x14cbfc: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C0C0u;
    if (runtime->hasFunction(0x14C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x14C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC00u; }
        if (ctx->pc != 0x14CC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C0C0_0x14c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC00u; }
        if (ctx->pc != 0x14CC00u) { return; }
    }
    ctx->pc = 0x14CC00u;
label_14cc00:
    // 0x14cc00: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cc04: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cc08: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14CC08u;
    SET_GPR_U32(ctx, 31, 0x14CC10u);
    ctx->pc = 0x14CC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC08u;
            // 0x14cc0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (runtime->hasFunction(0x1BB010u)) {
        auto targetFn = runtime->lookupFunction(0x1BB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC10u; }
        if (ctx->pc != 0x14CC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB010_0x1bb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC10u; }
        if (ctx->pc != 0x14CC10u) { return; }
    }
    ctx->pc = 0x14CC10u;
label_14cc10:
    // 0x14cc10: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cc14: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cc18: 0xc06d28c  jal         func_1B4A30
    ctx->pc = 0x14CC18u;
    SET_GPR_U32(ctx, 31, 0x14CC20u);
    ctx->pc = 0x14CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC18u;
            // 0x14cc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (runtime->hasFunction(0x1B4A30u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC20u; }
        if (ctx->pc != 0x14CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A30_0x1b4a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC20u; }
        if (ctx->pc != 0x14CC20u) { return; }
    }
    ctx->pc = 0x14CC20u;
label_14cc20:
    // 0x14cc20: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cc24: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x14cc24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x14cc28: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cc2c: 0xc06ef88  jal         func_1BBE20
    ctx->pc = 0x14CC2Cu;
    SET_GPR_U32(ctx, 31, 0x14CC34u);
    ctx->pc = 0x14CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC2Cu;
            // 0x14cc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBE20u;
    if (runtime->hasFunction(0x1BBE20u)) {
        auto targetFn = runtime->lookupFunction(0x1BBE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC34u; }
        if (ctx->pc != 0x14CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBE20_0x1bbe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC34u; }
        if (ctx->pc != 0x14CC34u) { return; }
    }
    ctx->pc = 0x14CC34u;
label_14cc34:
    // 0x14cc34: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cc38: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cc3c: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14CC3Cu;
    SET_GPR_U32(ctx, 31, 0x14CC44u);
    ctx->pc = 0x14CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC3Cu;
            // 0x14cc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (runtime->hasFunction(0x1BB010u)) {
        auto targetFn = runtime->lookupFunction(0x1BB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC44u; }
        if (ctx->pc != 0x14CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB010_0x1bb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC44u; }
        if (ctx->pc != 0x14CC44u) { return; }
    }
    ctx->pc = 0x14CC44u;
label_14cc44:
    // 0x14cc44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14cc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14cc48:
    // 0x14cc48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14cc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC4Cu;
            // 0x14cc50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14CC54u;
    // 0x14cc54: 0x0  nop
    ctx->pc = 0x14cc54u;
    // NOP
    // 0x14cc58: 0x0  nop
    ctx->pc = 0x14cc58u;
    // NOP
    // 0x14cc5c: 0x0  nop
    ctx->pc = 0x14cc5cu;
    // NOP
    ctx->pc = 0x14cc60u;
}

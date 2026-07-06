#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155A10
// Address: 0x155a10 - 0x155b50
void sub_00155A10_0x155a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155A10_0x155a10");
#endif

    switch (ctx->pc) {
        case 0x155a30u: goto label_155a30;
        case 0x155aacu: goto label_155aac;
        case 0x155b18u: goto label_155b18;
        default: break;
    }

    ctx->pc = 0x155a10u;

    // 0x155a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155a14: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x155a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155a1c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x155a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x155a20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a28: 0x24a50be0  addiu       $a1, $a1, 0xBE0
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3040));
    // 0x155a2c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x155a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_155a30:
    // 0x155a30: 0x24a20034  addiu       $v0, $a1, 0x34
    ctx->pc = 0x155a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x155a34: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x155a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x155a38: 0xa0a00022  sb          $zero, 0x22($a1)
    ctx->pc = 0x155a38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a3c: 0x24a30068  addiu       $v1, $a1, 0x68
    ctx->pc = 0x155a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x155a40: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x155a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x155a44: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x155a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x155a48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x155a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x155a4c: 0x24a2009c  addiu       $v0, $a1, 0x9C
    ctx->pc = 0x155a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 156));
    // 0x155a50: 0xa0a00056  sb          $zero, 0x56($a1)
    ctx->pc = 0x155a50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a54: 0x24a300d0  addiu       $v1, $a1, 0xD0
    ctx->pc = 0x155a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x155a58: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x155a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x155a5c: 0xa0a0008a  sb          $zero, 0x8A($a1)
    ctx->pc = 0x155a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a60: 0x24a20104  addiu       $v0, $a1, 0x104
    ctx->pc = 0x155a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 260));
    // 0x155a64: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x155a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x155a68: 0xa0a000be  sb          $zero, 0xBE($a1)
    ctx->pc = 0x155a68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 190), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a6c: 0x24a30138  addiu       $v1, $a1, 0x138
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 312));
    // 0x155a70: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x155a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x155a74: 0xa0a000f2  sb          $zero, 0xF2($a1)
    ctx->pc = 0x155a74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 242), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a78: 0x24a2016c  addiu       $v0, $a1, 0x16C
    ctx->pc = 0x155a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 364));
    // 0x155a7c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x155a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x155a80: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x155a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x155a84: 0xa0a00126  sb          $zero, 0x126($a1)
    ctx->pc = 0x155a84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 294), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a88: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x155a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x155a8c: 0xa0a0015a  sb          $zero, 0x15A($a1)
    ctx->pc = 0x155a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 346), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a90: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x155a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x155a94: 0xa0a0018e  sb          $zero, 0x18E($a1)
    ctx->pc = 0x155a94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 398), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a98: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x155A98u;
    {
        const bool branch_taken_0x155a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A98u;
            // 0x155a9c: 0x24a501a0  addiu       $a1, $a1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a98) {
            ctx->pc = 0x155A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155a30;
        }
    }
    ctx->pc = 0x155AA0u;
    // 0x155aa0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x155aa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x155aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155aa8: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x155aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_155aac:
    // 0x155aac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x155aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x155ab0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x155ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x155ab4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x155ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x155ab8: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x155ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x155abc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x155abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x155ac0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x155ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x155ac4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x155ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x155ac8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x155ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x155acc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x155accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x155ad0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x155ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x155ad4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x155ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x155ad8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x155ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x155adc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x155adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x155ae0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x155ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x155ae4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x155ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x155ae8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x155ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x155aec: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x155aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x155af0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x155af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x155af4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x155AF4u;
    {
        const bool branch_taken_0x155af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AF4u;
            // 0x155af8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155af4) {
            ctx->pc = 0x155AACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155aac;
        }
    }
    ctx->pc = 0x155AFCu;
    // 0x155afc: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x155afcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x155b00: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x155b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x155b04: 0x2610f7c0  addiu       $s0, $s0, -0x840
    ctx->pc = 0x155b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965184));
    // 0x155b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b10: 0xc067d6c  jal         func_19F5B0
    ctx->pc = 0x155B10u;
    SET_GPR_U32(ctx, 31, 0x155B18u);
    ctx->pc = 0x155B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155B10u;
            // 0x155b14: 0x34460202  ori         $a2, $v0, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F5B0u;
    if (runtime->hasFunction(0x19F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B18u; }
        if (ctx->pc != 0x155B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5B0_0x19f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B18u; }
        if (ctx->pc != 0x155B18u) { return; }
    }
    ctx->pc = 0x155B18u;
label_155b18:
    // 0x155b18: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x155b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x155b1c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x155b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x155b20: 0x34630808  ori         $v1, $v1, 0x808
    ctx->pc = 0x155b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x155b24: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x155b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x155b28: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x155b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x155b2c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x155b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x155b30: 0xac90f7b8  sw          $s0, -0x848($a0)
    ctx->pc = 0x155b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965176), GPR_U32(ctx, 16));
    // 0x155b34: 0xa46007d0  sh          $zero, 0x7D0($v1)
    ctx->pc = 0x155b34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2000), (uint16_t)GPR_U32(ctx, 0));
    // 0x155b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155b40: 0x3e00008  jr          $ra
    ctx->pc = 0x155B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B40u;
            // 0x155b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155B48u;
    // 0x155b48: 0x0  nop
    ctx->pc = 0x155b48u;
    // NOP
    // 0x155b4c: 0x0  nop
    ctx->pc = 0x155b4cu;
    // NOP
    ctx->pc = 0x155b50u;
}

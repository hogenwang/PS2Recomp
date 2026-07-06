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

// Function: sub_0013ADF0
// Address: 0x13adf0 - 0x13aec0
void sub_0013ADF0_0x13adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ADF0_0x13adf0");
#endif

    ctx->pc = 0x13adf0u;

    // 0x13adf0: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x13adf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13adf4: 0x97ad0008  lhu         $t5, 0x8($sp)
    ctx->pc = 0x13adf4u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13adf8: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x13adf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13adfc: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x13adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x13ae00: 0x97ae0000  lhu         $t6, 0x0($sp)
    ctx->pc = 0x13ae00u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ae04: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x13ae04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x13ae08: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x13ae08u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x13ae0c: 0xcc140  sll         $t8, $t4, 5
    ctx->pc = 0x13ae0cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x13ae10: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x13ae10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ae14: 0x1f87821  addu        $t7, $t7, $t8
    ctx->pc = 0x13ae14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x13ae18: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x13ae18u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x13ae1c: 0xa5e50000  sh          $a1, 0x0($t7)
    ctx->pc = 0x13ae1cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x13ae20: 0xa5e60002  sh          $a2, 0x2($t7)
    ctx->pc = 0x13ae20u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x13ae24: 0xa5e70004  sh          $a3, 0x4($t7)
    ctx->pc = 0x13ae24u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x13ae28: 0xe5ec0008  swc1        $f12, 0x8($t7)
    ctx->pc = 0x13ae28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x13ae2c: 0x97ac0018  lhu         $t4, 0x18($sp)
    ctx->pc = 0x13ae2cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ae30: 0xa5e8000c  sh          $t0, 0xC($t7)
    ctx->pc = 0x13ae30u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x13ae34: 0xa5e9000e  sh          $t1, 0xE($t7)
    ctx->pc = 0x13ae34u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x13ae38: 0xa5ea0010  sh          $t2, 0x10($t7)
    ctx->pc = 0x13ae38u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 16), (uint16_t)GPR_U32(ctx, 10));
    // 0x13ae3c: 0xa5eb0012  sh          $t3, 0x12($t7)
    ctx->pc = 0x13ae3cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 18), (uint16_t)GPR_U32(ctx, 11));
    // 0x13ae40: 0xa1ed0014  sb          $t5, 0x14($t7)
    ctx->pc = 0x13ae40u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 20), (uint8_t)GPR_U32(ctx, 13));
    // 0x13ae44: 0xa1e30015  sb          $v1, 0x15($t7)
    ctx->pc = 0x13ae44u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x13ae48: 0xe5ed0018  swc1        $f13, 0x18($t7)
    ctx->pc = 0x13ae48u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24), bits); }
    // 0x13ae4c: 0x97a60020  lhu         $a2, 0x20($sp)
    ctx->pc = 0x13ae4cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ae50: 0xe5ee001c  swc1        $f14, 0x1C($t7)
    ctx->pc = 0x13ae50u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 28), bits); }
    // 0x13ae54: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x13ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ae58: 0xa5ec0020  sh          $t4, 0x20($t7)
    ctx->pc = 0x13ae58u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 32), (uint16_t)GPR_U32(ctx, 12));
    // 0x13ae5c: 0xa5e60022  sh          $a2, 0x22($t7)
    ctx->pc = 0x13ae5cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 34), (uint16_t)GPR_U32(ctx, 6));
    // 0x13ae60: 0xade50024  sw          $a1, 0x24($t7)
    ctx->pc = 0x13ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 36), GPR_U32(ctx, 5));
    // 0x13ae64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ae68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x13ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13ae6c: 0xade30028  sw          $v1, 0x28($t7)
    ctx->pc = 0x13ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 40), GPR_U32(ctx, 3));
    // 0x13ae70: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ae74: 0xade5002c  sw          $a1, 0x2C($t7)
    ctx->pc = 0x13ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 5));
    // 0x13ae78: 0xade30030  sw          $v1, 0x30($t7)
    ctx->pc = 0x13ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 48), GPR_U32(ctx, 3));
    // 0x13ae7c: 0xade00034  sw          $zero, 0x34($t7)
    ctx->pc = 0x13ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 52), GPR_U32(ctx, 0));
    // 0x13ae80: 0xade00038  sw          $zero, 0x38($t7)
    ctx->pc = 0x13ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 56), GPR_U32(ctx, 0));
    // 0x13ae84: 0xade0003c  sw          $zero, 0x3C($t7)
    ctx->pc = 0x13ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 60), GPR_U32(ctx, 0));
    // 0x13ae88: 0xade00040  sw          $zero, 0x40($t7)
    ctx->pc = 0x13ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 64), GPR_U32(ctx, 0));
    // 0x13ae8c: 0xade00044  sw          $zero, 0x44($t7)
    ctx->pc = 0x13ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 68), GPR_U32(ctx, 0));
    // 0x13ae90: 0xade00048  sw          $zero, 0x48($t7)
    ctx->pc = 0x13ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 72), GPR_U32(ctx, 0));
    // 0x13ae94: 0xade0004c  sw          $zero, 0x4C($t7)
    ctx->pc = 0x13ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 76), GPR_U32(ctx, 0));
    // 0x13ae98: 0xade00050  sw          $zero, 0x50($t7)
    ctx->pc = 0x13ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 80), GPR_U32(ctx, 0));
    // 0x13ae9c: 0xade00054  sw          $zero, 0x54($t7)
    ctx->pc = 0x13ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 84), GPR_U32(ctx, 0));
    // 0x13aea0: 0xade00058  sw          $zero, 0x58($t7)
    ctx->pc = 0x13aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 88), GPR_U32(ctx, 0));
    // 0x13aea4: 0xade0005c  sw          $zero, 0x5C($t7)
    ctx->pc = 0x13aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 92), GPR_U32(ctx, 0));
    // 0x13aea8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13aeac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13aeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x13AEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEB0u;
        // 0x13aeb4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AEB8u;
    // 0x13aeb8: 0x0  nop
    ctx->pc = 0x13aeb8u;
    // NOP
    // 0x13aebc: 0x0  nop
    ctx->pc = 0x13aebcu;
    // NOP
    if (ctx->pc == 0x13aebcu) { ctx->pc = 0x13aec0u; }
}

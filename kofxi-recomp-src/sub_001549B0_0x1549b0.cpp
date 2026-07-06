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

// Function: sub_001549B0
// Address: 0x1549b0 - 0x154ab0
void sub_001549B0_0x1549b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001549B0_0x1549b0");
#endif

    switch (ctx->pc) {
        case 0x1549c0u: goto label_1549c0;
        default: break;
    }

    ctx->pc = 0x1549b0u;

    // 0x1549b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1549b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1549b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1549b8: 0xc0cdb54  jal         func_336D50
    ctx->pc = 0x1549B8u;
    SET_GPR_U32(ctx, 31, 0x1549C0u);
    ctx->pc = 0x336D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D50u, 0x1549B8u, 0x1549C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549C0u;
label_1549c0:
    // 0x1549c0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1549c4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1549c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1549c8: 0x9068b272  lbu         $t0, -0x4D8E($v1)
    ctx->pc = 0x1549c8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947442)));
    // 0x1549cc: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x1549d0: 0xa080f35f  sb          $zero, -0xCA1($a0)
    ctx->pc = 0x1549d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964063), (uint8_t)GPR_U32(ctx, 0));
    // 0x1549d4: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x1549d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x1549d8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1549d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1549dc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1549dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1549e0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1549e4: 0xa0a8f358  sb          $t0, -0xCA8($a1)
    ctx->pc = 0x1549e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294964056), (uint8_t)GPR_U32(ctx, 8));
    // 0x1549e8: 0x9067b271  lbu         $a3, -0x4D8F($v1)
    ctx->pc = 0x1549e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947441)));
    // 0x1549ec: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x1549ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x1549f0: 0xa0a0f360  sb          $zero, -0xCA0($a1)
    ctx->pc = 0x1549f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294964064), (uint8_t)GPR_U32(ctx, 0));
    // 0x1549f4: 0x3c0c0093  lui         $t4, 0x93
    ctx->pc = 0x1549f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)147 << 16));
    // 0x1549f8: 0x3c0b0093  lui         $t3, 0x93
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)147 << 16));
    // 0x1549fc: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x1549fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x154a00: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154a04: 0xa0c7f359  sb          $a3, -0xCA7($a2)
    ctx->pc = 0x154a04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294964057), (uint8_t)GPR_U32(ctx, 7));
    // 0x154a08: 0xa060f35e  sb          $zero, -0xCA2($v1)
    ctx->pc = 0x154a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964062), (uint8_t)GPR_U32(ctx, 0));
    // 0x154a0c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x154a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x154a10: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154a14: 0x3c090093  lui         $t1, 0x93
    ctx->pc = 0x154a14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)147 << 16));
    // 0x154a18: 0xa066f361  sb          $a2, -0xC9F($v1)
    ctx->pc = 0x154a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964065), (uint8_t)GPR_U32(ctx, 6));
    // 0x154a1c: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x154a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x154a20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154a24: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154a28: 0xa086f362  sb          $a2, -0xC9E($a0)
    ctx->pc = 0x154a28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964066), (uint8_t)GPR_U32(ctx, 6));
    // 0x154a2c: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x154a30: 0xa066f363  sb          $a2, -0xC9D($v1)
    ctx->pc = 0x154a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964067), (uint8_t)GPR_U32(ctx, 6));
    // 0x154a34: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x154a38: 0xa080f364  sb          $zero, -0xC9C($a0)
    ctx->pc = 0x154a38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964068), (uint8_t)GPR_U32(ctx, 0));
    // 0x154a3c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154a40: 0x9065f364  lbu         $a1, -0xC9C($v1)
    ctx->pc = 0x154a40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964068)));
    // 0x154a44: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x154a48: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x154a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x154a4c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x154a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x154a50: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154a54: 0xa085f364  sb          $a1, -0xC9C($a0)
    ctx->pc = 0x154a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964068), (uint8_t)GPR_U32(ctx, 5));
    // 0x154a58: 0x906ef364  lbu         $t6, -0xC9C($v1)
    ctx->pc = 0x154a58u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964068)));
    // 0x154a5c: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x154a60: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x154a64: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154a68: 0xa06df365  sb          $t5, -0xC9B($v1)
    ctx->pc = 0x154a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964069), (uint8_t)GPR_U32(ctx, 13));
    // 0x154a6c: 0x35c30002  ori         $v1, $t6, 0x2
    ctx->pc = 0x154a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2);
    // 0x154a70: 0xa183f364  sb          $v1, -0xC9C($t4)
    ctx->pc = 0x154a70u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294964068), (uint8_t)GPR_U32(ctx, 3));
    // 0x154a74: 0x9163f364  lbu         $v1, -0xC9C($t3)
    ctx->pc = 0x154a74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294964068)));
    // 0x154a78: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x154a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x154a7c: 0xa143f364  sb          $v1, -0xC9C($t2)
    ctx->pc = 0x154a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294964068), (uint8_t)GPR_U32(ctx, 3));
    // 0x154a80: 0x9123f364  lbu         $v1, -0xC9C($t1)
    ctx->pc = 0x154a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294964068)));
    // 0x154a84: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x154a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x154a88: 0xa103f364  sb          $v1, -0xC9C($t0)
    ctx->pc = 0x154a88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294964068), (uint8_t)GPR_U32(ctx, 3));
    // 0x154a8c: 0x90e3f364  lbu         $v1, -0xC9C($a3)
    ctx->pc = 0x154a8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294964068)));
    // 0x154a90: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x154a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x154a94: 0xa0c3f364  sb          $v1, -0xC9C($a2)
    ctx->pc = 0x154a94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294964068), (uint8_t)GPR_U32(ctx, 3));
    // 0x154a98: 0x90a3f364  lbu         $v1, -0xC9C($a1)
    ctx->pc = 0x154a98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294964068)));
    // 0x154a9c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x154a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x154aa0: 0xa083f364  sb          $v1, -0xC9C($a0)
    ctx->pc = 0x154aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964068), (uint8_t)GPR_U32(ctx, 3));
    // 0x154aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x154AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AA8u;
        // 0x154aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154AB0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C0C0
// Address: 0x14c0c0 - 0x14c130
void sub_0014C0C0_0x14c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C0C0_0x14c0c0");
#endif

    ctx->pc = 0x14c0c0u;

    // 0x14c0c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14c0c4: 0xa044e058  sb          $a0, -0x1FA8($v0)
    ctx->pc = 0x14c0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294959192), (uint8_t)GPR_U32(ctx, 4));
    // 0x14c0c8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14c0cc: 0x9042b269  lbu         $v0, -0x4D97($v0)
    ctx->pc = 0x14c0ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947433)));
    // 0x14c0d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14C0D0u;
    {
        const bool branch_taken_0x14c0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c0d0) {
            ctx->pc = 0x14C110u;
            goto label_14c110;
        }
    }
    ctx->pc = 0x14C0D8u;
    // 0x14c0d8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14c0dc: 0x28410025  slti        $at, $v0, 0x25
    ctx->pc = 0x14c0dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x14c0e0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x14C0E0u;
    {
        const bool branch_taken_0x14c0e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c0e0) {
            ctx->pc = 0x14C110u;
            goto label_14c110;
        }
    }
    ctx->pc = 0x14C0E8u;
    // 0x14c0e8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14c0ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14c0f0: 0x9044b26a  lbu         $a0, -0x4D96($v0)
    ctx->pc = 0x14c0f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947434)));
    // 0x14c0f4: 0x2463e0b0  addiu       $v1, $v1, -0x1F50
    ctx->pc = 0x14c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959280));
    // 0x14c0f8: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x14c0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x14c0fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c100: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14c104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c108: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c10c: 0xac435d90  sw          $v1, 0x5D90($v0)
    ctx->pc = 0x14c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23952), GPR_U32(ctx, 3));
label_14c110:
    // 0x14c110: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x14c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x14c114: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c118: 0x8c455d90  lw          $a1, 0x5D90($v0)
    ctx->pc = 0x14c118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23952)));
    // 0x14c11c: 0x806e822  j           func_1BA088
    ctx->pc = 0x14C11Cu;
    ctx->pc = 0x14C120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C11Cu;
            // 0x14c120: 0x8c64e4c0  lw          $a0, -0x1B40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (runtime->hasFunction(0x1BA088u)) {
        auto targetFn = runtime->lookupFunction(0x1BA088u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BA088_0x1ba088(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14C124u;
    // 0x14c124: 0x0  nop
    ctx->pc = 0x14c124u;
    // NOP
    // 0x14c128: 0x0  nop
    ctx->pc = 0x14c128u;
    // NOP
    // 0x14c12c: 0x0  nop
    ctx->pc = 0x14c12cu;
    // NOP
    ctx->pc = 0x14c130u;
}

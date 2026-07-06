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

// Function: sub_0014CA70
// Address: 0x14ca70 - 0x14caf0
void sub_0014CA70_0x14ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CA70_0x14ca70");
#endif

    ctx->pc = 0x14ca70u;

    // 0x14ca70: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x14ca70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14ca74: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x14ca74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x14ca78: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x14ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14ca7c: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x14ca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x14ca80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ca84: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x14ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x14ca88: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14ca8c: 0x24e75dc0  addiu       $a3, $a3, 0x5DC0
    ctx->pc = 0x14ca8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24000));
    // 0x14ca90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ca94: 0x24c69f00  addiu       $a2, $a2, -0x6100
    ctx->pc = 0x14ca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942464));
    // 0x14ca98: 0x349c0  sll         $t1, $v1, 7
    ctx->pc = 0x14ca98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14ca9c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x14ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x14caa0: 0xe94021  addu        $t0, $a3, $t1
    ctx->pc = 0x14caa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x14caa4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x14caa8: 0x24a59f04  addiu       $a1, $a1, -0x60FC
    ctx->pc = 0x14caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942468));
    // 0x14caac: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x14caacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x14cab0: 0x24849f08  addiu       $a0, $a0, -0x60F8
    ctx->pc = 0x14cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942472));
    // 0x14cab4: 0xa93021  addu        $a2, $a1, $t1
    ctx->pc = 0x14cab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x14cab8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x14cab8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cabc: 0x24639f18  addiu       $v1, $v1, -0x60E8
    ctx->pc = 0x14cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942488));
    // 0x14cac0: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x14cac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x14cac4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x14cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x14cac8: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x14cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14cacc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x14caccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x14cad0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x14cad4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x14cad4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14cad8: 0x24639f15  addiu       $v1, $v1, -0x60EB
    ctx->pc = 0x14cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942485));
    // 0x14cadc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x14cae0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x14cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14cae4: 0x3e00008  jr          $ra
    ctx->pc = 0x14CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAE4u;
        // 0x14cae8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CAECu;
    // 0x14caec: 0x0  nop
    ctx->pc = 0x14caecu;
    // NOP
    if (ctx->pc == 0x14caecu) { ctx->pc = 0x14caf0u; }
}

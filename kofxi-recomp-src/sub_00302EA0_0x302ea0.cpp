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

// Function: sub_00302EA0
// Address: 0x302ea0 - 0x302f50
void sub_00302EA0_0x302ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302EA0_0x302ea0");
#endif

    ctx->pc = 0x302ea0u;

    // 0x302ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302ea4: 0x3c1901cb  lui         $t9, 0x1CB
    ctx->pc = 0x302ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)459 << 16));
    // 0x302ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x302eac: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x302eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x302eb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x302eb4: 0x27390d00  addiu       $t9, $t9, 0xD00
    ctx->pc = 0x302eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 3328));
    // 0x302eb8: 0x8c710c68  lw          $s1, 0xC68($v1)
    ctx->pc = 0x302eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3176)));
    // 0x302ebc: 0x87c021  addu        $t8, $a0, $a3
    ctx->pc = 0x302ebcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x302ec0: 0xa87821  addu        $t7, $a1, $t0
    ctx->pc = 0x302ec0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x302ec4: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x302ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302ec8: 0x93ad0038  lbu         $t5, 0x38($sp)
    ctx->pc = 0x302ec8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x302ecc: 0x116100  sll         $t4, $s1, 4
    ctx->pc = 0x302eccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x302ed0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x302ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x302ed4: 0x1918021  addu        $s0, $t4, $s1
    ctx->pc = 0x302ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x302ed8: 0x262c0001  addiu       $t4, $s1, 0x1
    ctx->pc = 0x302ed8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x302edc: 0xac6c0c68  sw          $t4, 0xC68($v1)
    ctx->pc = 0x302edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3176), GPR_U32(ctx, 12));
    // 0x302ee0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x302ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x302ee4: 0x3236021  addu        $t4, $t9, $v1
    ctx->pc = 0x302ee4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x302ee8: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x302ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x302eec: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x302eecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x302ef0: 0xad98000c  sw          $t8, 0xC($t4)
    ctx->pc = 0x302ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 24));
    // 0x302ef4: 0xad980008  sw          $t8, 0x8($t4)
    ctx->pc = 0x302ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 24));
    // 0x302ef8: 0xad850018  sw          $a1, 0x18($t4)
    ctx->pc = 0x302ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 5));
    // 0x302efc: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x302efcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x302f00: 0xad8f001c  sw          $t7, 0x1C($t4)
    ctx->pc = 0x302f00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 15));
    // 0x302f04: 0xad8f0014  sw          $t7, 0x14($t4)
    ctx->pc = 0x302f04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 15));
    // 0x302f08: 0xad870020  sw          $a3, 0x20($t4)
    ctx->pc = 0x302f08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 7));
    // 0x302f0c: 0xad880024  sw          $t0, 0x24($t4)
    ctx->pc = 0x302f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 8));
    // 0x302f10: 0xad890028  sw          $t1, 0x28($t4)
    ctx->pc = 0x302f10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 9));
    // 0x302f14: 0xad8a002c  sw          $t2, 0x2C($t4)
    ctx->pc = 0x302f14u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 10));
    // 0x302f18: 0xad8b0030  sw          $t3, 0x30($t4)
    ctx->pc = 0x302f18u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 48), GPR_U32(ctx, 11));
    // 0x302f1c: 0xad8e0034  sw          $t6, 0x34($t4)
    ctx->pc = 0x302f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 14));
    // 0x302f20: 0xad860038  sw          $a2, 0x38($t4)
    ctx->pc = 0x302f20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 6));
    // 0x302f24: 0xa18d003d  sb          $t5, 0x3D($t4)
    ctx->pc = 0x302f24u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 61), (uint8_t)GPR_U32(ctx, 13));
    // 0x302f28: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x302f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302f2c: 0xa18d003c  sb          $t5, 0x3C($t4)
    ctx->pc = 0x302f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 60), (uint8_t)GPR_U32(ctx, 13));
    // 0x302f30: 0xad830040  sw          $v1, 0x40($t4)
    ctx->pc = 0x302f30u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 3));
    // 0x302f34: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x302f34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302f38: 0xa183003e  sb          $v1, 0x3E($t4)
    ctx->pc = 0x302f38u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x302f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302f44: 0x3e00008  jr          $ra
    ctx->pc = 0x302F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F44u;
        // 0x302f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302F4Cu;
    // 0x302f4c: 0x0  nop
    ctx->pc = 0x302f4cu;
    // NOP
}

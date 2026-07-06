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

// Function: sub_00109CB0
// Address: 0x109cb0 - 0x109d78
void sub_00109CB0_0x109cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109CB0_0x109cb0");
#endif

    switch (ctx->pc) {
        case 0x109cc8u: goto label_109cc8;
        case 0x109d30u: goto label_109d30;
        default: break;
    }

    ctx->pc = 0x109cb0u;

    // 0x109cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109cbc: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x109cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x109cc0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x109CC0u;
    SET_GPR_U32(ctx, 31, 0x109CC8u);
    ctx->pc = 0x109CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CC0u;
    // 0x109cc4: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x109CC0u, 0x109CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC8u;
label_109cc8:
    // 0x109cc8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x109cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x109ccc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x109cccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x109cd0: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x109cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x109cd4: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x109cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x109cd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x109cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x109cdc: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x109cdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x109ce0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109ce4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x109ce8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x109ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x109cec: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x109cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x109cf0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x109cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x109cf4: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x109cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x109cf8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x109cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x109cfc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109d00: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x109d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x109d04: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x109d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x109d08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x109d08u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109d0c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x109d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x109d10: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x109d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x109d14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x109d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109d18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x109d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x109d1c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x109d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x109d20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109D20u;
    {
        const bool branch_taken_0x109d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D20u;
        // 0x109d24: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d20) {
            ctx->pc = 0x109D34u;
            goto label_109d34;
        }
    }
    ctx->pc = 0x109D28u;
    // 0x109d28: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x109D28u;
    SET_GPR_U32(ctx, 31, 0x109D30u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x109D28u, 0x109D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D30u;
label_109d30:
    // 0x109d30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_109d34:
    // 0x109d34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109d38: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x109d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x109d3c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x109d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x109d40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x109d40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109d44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109d48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x109d48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109d4c: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x109d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x109d50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x109d50u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109d54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109d58: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x109d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x109d5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x109d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x109d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109d64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x109d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109d68u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x109d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d70: 0x804314a  j           func_10C528
    ctx->pc = 0x109D70u;
    ctx->pc = 0x109D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D70u;
    // 0x109d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C528u, 0x109D70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x109D78u;
}

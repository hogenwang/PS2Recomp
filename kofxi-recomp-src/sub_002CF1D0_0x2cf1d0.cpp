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

// Function: sub_002CF1D0
// Address: 0x2cf1d0 - 0x2cf220
void sub_002CF1D0_0x2cf1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF1D0_0x2cf1d0");
#endif

    switch (ctx->pc) {
        case 0x2cf1d0u: goto label_2cf1d0;
        case 0x2cf1d4u: goto label_2cf1d4;
        case 0x2cf1d8u: goto label_2cf1d8;
        case 0x2cf1dcu: goto label_2cf1dc;
        case 0x2cf1e0u: goto label_2cf1e0;
        case 0x2cf1e4u: goto label_2cf1e4;
        case 0x2cf1e8u: goto label_2cf1e8;
        case 0x2cf1ecu: goto label_2cf1ec;
        case 0x2cf1f0u: goto label_2cf1f0;
        case 0x2cf1f4u: goto label_2cf1f4;
        case 0x2cf1f8u: goto label_2cf1f8;
        case 0x2cf1fcu: goto label_2cf1fc;
        case 0x2cf200u: goto label_2cf200;
        case 0x2cf204u: goto label_2cf204;
        case 0x2cf208u: goto label_2cf208;
        case 0x2cf20cu: goto label_2cf20c;
        case 0x2cf210u: goto label_2cf210;
        case 0x2cf214u: goto label_2cf214;
        case 0x2cf218u: goto label_2cf218;
        case 0x2cf21cu: goto label_2cf21c;
        default: break;
    }

    ctx->pc = 0x2cf1d0u;

label_2cf1d0:
    // 0x2cf1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cf1d4:
    // 0x2cf1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2cf1d8:
    // 0x2cf1d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf1dc:
    // 0x2cf1dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2cf1e0:
    // 0x2cf1e0: 0xc0b228a  jal         func_2C8A28
label_2cf1e4:
    if (ctx->pc == 0x2CF1E4u) {
        ctx->pc = 0x2CF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1E0u;
        // 0x2cf1e4: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF1E8u;
        goto label_2cf1e8;
    }
    ctx->pc = 0x2CF1E0u;
    SET_GPR_U32(ctx, 31, 0x2CF1E8u);
    ctx->pc = 0x2CF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1E0u;
    // 0x2cf1e4: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A28u, 0x2CF1E0u, 0x2CF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1E8u;
label_2cf1e8:
    // 0x2cf1e8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2cf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2cf1ec:
    // 0x2cf1ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cf1f0:
    if (ctx->pc == 0x2CF1F0u) {
        ctx->pc = 0x2CF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1ECu;
        // 0x2cf1f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF1F4u;
        goto label_2cf1f4;
    }
    ctx->pc = 0x2CF1ECu;
    {
        const bool branch_taken_0x2cf1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1ECu;
        // 0x2cf1f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf1ec) {
            ctx->pc = 0x2CF208u;
            goto label_2cf208;
        }
    }
    ctx->pc = 0x2CF1F4u;
label_2cf1f4:
    // 0x2cf1f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cf1f8:
    // 0x2cf1f8: 0x40f809  jalr        $v0
label_2cf1fc:
    if (ctx->pc == 0x2CF1FCu) {
        ctx->pc = 0x2CF200u;
        goto label_2cf200;
    }
    ctx->pc = 0x2CF1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF200u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF1F8u, 0x2CF200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF200u;
label_2cf200:
    // 0x2cf200: 0xc0b60dc  jal         func_2D8370
label_2cf204:
    if (ctx->pc == 0x2CF204u) {
        ctx->pc = 0x2CF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF200u;
        // 0x2cf204: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF208u;
        goto label_2cf208;
    }
    ctx->pc = 0x2CF200u;
    SET_GPR_U32(ctx, 31, 0x2CF208u);
    ctx->pc = 0x2CF204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF200u;
    // 0x2cf204: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2CF200u, 0x2CF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF208u;
label_2cf208:
    // 0x2cf208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf20c:
    // 0x2cf20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf210:
    // 0x2cf210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cf214:
    // 0x2cf214: 0x80b3dca  j           func_2CF728
label_2cf218:
    if (ctx->pc == 0x2CF218u) {
        ctx->pc = 0x2CF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF214u;
        // 0x2cf218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF21Cu;
        goto label_2cf21c;
    }
    ctx->pc = 0x2CF214u;
    ctx->pc = 0x2CF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF214u;
    // 0x2cf218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF728u;
    sub_002CF728_0x2cf728(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF21Cu;
label_2cf21c:
    // 0x2cf21c: 0x0  nop
    ctx->pc = 0x2cf21cu;
    // NOP
    if (ctx->pc == 0x2cf21cu) { ctx->pc = 0x2cf220u; }
}

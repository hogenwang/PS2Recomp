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

// Function: sub_00200CF8
// Address: 0x200cf8 - 0x200d70
void sub_00200CF8_0x200cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200CF8_0x200cf8");
#endif

    switch (ctx->pc) {
        case 0x200d18u: goto label_200d18;
        case 0x200d50u: goto label_200d50;
        default: break;
    }

    ctx->pc = 0x200cf8u;

    // 0x200cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200d08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200d10: 0xc0809e6  jal         func_202798
    ctx->pc = 0x200D10u;
    SET_GPR_U32(ctx, 31, 0x200D18u);
    ctx->pc = 0x200D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D10u;
    // 0x200d14: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202798u, 0x200D10u, 0x200D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D18u;
label_200d18:
    // 0x200d18: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x200d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x200d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x200d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x200d28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x200D28u;
    {
        const bool branch_taken_0x200d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x200D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D28u;
        // 0x200d2c: 0x24c6f098  addiu       $a2, $a2, -0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d28) {
            ctx->pc = 0x200D48u;
            goto label_200d48;
        }
    }
    ctx->pc = 0x200D30u;
    // 0x200d30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200d40: 0x808063e  j           func_2018F8
    ctx->pc = 0x200D40u;
    ctx->pc = 0x200D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D40u;
    // 0x200d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    ctx->pc = 0x200D48u;
label_200d48:
    // 0x200d48: 0xc080b34  jal         func_202CD0
    ctx->pc = 0x200D48u;
    SET_GPR_U32(ctx, 31, 0x200D50u);
    ctx->pc = 0x202CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CD0u, 0x200D48u, 0x200D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D50u;
label_200d50:
    // 0x200d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200d64: 0x80802e0  j           func_200B80
    ctx->pc = 0x200D64u;
    ctx->pc = 0x200D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D64u;
    // 0x200d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B80u, 0x200D64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200D6Cu;
    // 0x200d6c: 0x0  nop
    ctx->pc = 0x200d6cu;
    // NOP
    if (ctx->pc == 0x200d6cu) { ctx->pc = 0x200d70u; }
}

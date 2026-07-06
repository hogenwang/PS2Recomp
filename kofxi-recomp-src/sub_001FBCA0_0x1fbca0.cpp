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

// Function: sub_001FBCA0
// Address: 0x1fbca0 - 0x1fbd18
void sub_001FBCA0_0x1fbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBCA0_0x1fbca0");
#endif

    switch (ctx->pc) {
        case 0x1fbcc4u: goto label_1fbcc4;
        default: break;
    }

    ctx->pc = 0x1fbca0u;

    // 0x1fbca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fbcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fbcb0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fbcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fbcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fbcb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fbcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fbcbc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FBCBCu;
    SET_GPR_U32(ctx, 31, 0x1FBCC4u);
    ctx->pc = 0x1FBCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCBCu;
    // 0x1fbcc0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FBCBCu, 0x1FBCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCC4u;
label_1fbcc4:
    // 0x1fbcc4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fbcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fbcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fbcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbccc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fbcccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBCD0u;
    {
        const bool branch_taken_0x1fbcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCD0u;
        // 0x1fbcd4: 0x34a50121  ori         $a1, $a1, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)289);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcd0) {
            ctx->pc = 0x1FBCF8u;
            goto label_1fbcf8;
        }
    }
    ctx->pc = 0x1FBCD8u;
    // 0x1fbcd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbcdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fbcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbce8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fbce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbcec: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FBCECu;
    ctx->pc = 0x1FBCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCECu;
    // 0x1fbcf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FBCF4u;
    // 0x1fbcf4: 0x0  nop
    ctx->pc = 0x1fbcf4u;
    // NOP
label_1fbcf8:
    // 0x1fbcf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fbcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbcfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbd00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbd00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbd04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbd08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fbd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbd0c: 0x807ef46  j           func_1FBD18
    ctx->pc = 0x1FBD0Cu;
    ctx->pc = 0x1FBD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD0Cu;
    // 0x1fbd10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD18u;
    sub_001FBD18_0x1fbd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1FBD14u;
    // 0x1fbd14: 0x0  nop
    ctx->pc = 0x1fbd14u;
    // NOP
}

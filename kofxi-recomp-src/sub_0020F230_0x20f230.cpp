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

// Function: sub_0020F230
// Address: 0x20f230 - 0x20f2a8
void sub_0020F230_0x20f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F230_0x20f230");
#endif

    switch (ctx->pc) {
        case 0x20f290u: goto label_20f290;
        default: break;
    }

    ctx->pc = 0x20f230u;

    // 0x20f230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f234: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x20f234u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f23c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x20f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x20f240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20f240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20f244: 0x90890028  lbu         $t1, 0x28($a0)
    ctx->pc = 0x20f244u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x20f248: 0x97e00  sll         $t7, $t1, 24
    ctx->pc = 0x20f248u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x20f24c: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x20f24cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x20f250: 0x11ee0004  beq         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F250u;
    {
        const bool branch_taken_0x20f250 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x20F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F250u;
        // 0x20f254: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f250) {
            ctx->pc = 0x20F264u;
            goto label_20f264;
        }
    }
    ctx->pc = 0x20F258u;
    // 0x20f258: 0xa0890029  sb          $t1, 0x29($a0)
    ctx->pc = 0x20f258u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 9));
    // 0x20f25c: 0xa08e0028  sb          $t6, 0x28($a0)
    ctx->pc = 0x20f25cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 14));
    // 0x20f260: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x20f260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_20f264:
    // 0x20f264: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20f264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f268: 0x82080029  lb          $t0, 0x29($s0)
    ctx->pc = 0x20f268u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x20f26c: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x20f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x20f270: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x20f270u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x20f274: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f278: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f27c: 0x94e03  sra         $t1, $t1, 24
    ctx->pc = 0x20f27cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 24));
    // 0x20f280: 0x2484fb10  addiu       $a0, $a0, -0x4F0
    ctx->pc = 0x20f280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966032));
    // 0x20f284: 0x24e7fb28  addiu       $a3, $a3, -0x4D8
    ctx->pc = 0x20f284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966056));
    // 0x20f288: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F288u;
    SET_GPR_U32(ctx, 31, 0x20F290u);
    ctx->pc = 0x20F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F288u;
    // 0x20f28c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F288u, 0x20F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F290u;
label_20f290:
    // 0x20f290: 0x82020028  lb          $v0, 0x28($s0)
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20f294: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f29c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F29Cu;
        // 0x20f2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F2A4u;
    // 0x20f2a4: 0x0  nop
    ctx->pc = 0x20f2a4u;
    // NOP
    if (ctx->pc == 0x20f2a4u) { ctx->pc = 0x20f2a8u; }
}

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

// Function: sub_001110D8
// Address: 0x1110d8 - 0x111170
void sub_001110D8_0x1110d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001110D8_0x1110d8");
#endif

    switch (ctx->pc) {
        case 0x1110f8u: goto label_1110f8;
        case 0x111128u: goto label_111128;
        case 0x111150u: goto label_111150;
        default: break;
    }

    ctx->pc = 0x1110d8u;

    // 0x1110d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1110d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1110dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1110dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1110e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1110e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1110e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1110e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1110e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1110ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1110ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1110f0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1110F0u;
    SET_GPR_U32(ctx, 31, 0x1110F8u);
    ctx->pc = 0x1110F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110F0u;
    // 0x1110f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1110F0u, 0x1110F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110F8u;
label_1110f8:
    // 0x1110f8: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1110fc: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1110FCu;
    {
        const bool branch_taken_0x1110fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1110fc) {
            ctx->pc = 0x111110u;
            goto label_111110;
        }
    }
    ctx->pc = 0x111104u;
    // 0x111104: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x111104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x111108: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x111108u;
    {
        const bool branch_taken_0x111108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111108u;
        // 0x11110c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111108) {
            ctx->pc = 0x111148u;
            goto label_111148;
        }
    }
    ctx->pc = 0x111110u;
label_111110:
    // 0x111110: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x111110u;
    {
        const bool branch_taken_0x111110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x111110) {
            ctx->pc = 0x111148u;
            goto label_111148;
        }
    }
    ctx->pc = 0x111118u;
    // 0x111118: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x11111c: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11111Cu;
    {
        const bool branch_taken_0x11111c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x11111c) {
            ctx->pc = 0x111120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11111Cu;
            // 0x111120: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111144u;
            goto label_111144;
        }
    }
    ctx->pc = 0x111124u;
    // 0x111124: 0x0  nop
    ctx->pc = 0x111124u;
    // NOP
label_111128:
    // 0x111128: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x111128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11112c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11112Cu;
    {
        const bool branch_taken_0x11112c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11112c) {
            ctx->pc = 0x111148u;
            goto label_111148;
        }
    }
    ctx->pc = 0x111134u;
    // 0x111134: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x111134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x111138: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111138u;
    {
        const bool branch_taken_0x111138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111138u;
        // 0x11113c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111138) {
            ctx->pc = 0x111128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111128;
        }
    }
    ctx->pc = 0x111140u;
    // 0x111140: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_111144:
    // 0x111144: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x111144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_111148:
    // 0x111148: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x111148u;
    SET_GPR_U32(ctx, 31, 0x111150u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x111148u, 0x111150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111150u;
label_111150:
    // 0x111150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111154: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11115c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11115cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111164: 0x3e00008  jr          $ra
    ctx->pc = 0x111164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111164u;
        // 0x111168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11116Cu;
    // 0x11116c: 0x0  nop
    ctx->pc = 0x11116cu;
    // NOP
}

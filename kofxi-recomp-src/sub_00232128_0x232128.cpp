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

// Function: sub_00232128
// Address: 0x232128 - 0x2321c0
void sub_00232128_0x232128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232128_0x232128");
#endif

    switch (ctx->pc) {
        case 0x23213cu: goto label_23213c;
        case 0x232154u: goto label_232154;
        default: break;
    }

    ctx->pc = 0x232128u;

    // 0x232128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23212c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x232130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x232134: 0xc046016  jal         func_118058
    ctx->pc = 0x232134u;
    SET_GPR_U32(ctx, 31, 0x23213Cu);
    ctx->pc = 0x232138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232134u;
    // 0x232138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118058u, 0x232134u, 0x23213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23213Cu;
label_23213c:
    // 0x23213c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x23213cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x232140: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x232140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232144: 0xdc6417d8  ld          $a0, 0x17D8($v1)
    ctx->pc = 0x232144u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 6104)));
    // 0x232148: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x232148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x23214c: 0xc04624e  jal         func_118938
    ctx->pc = 0x23214Cu;
    SET_GPR_U32(ctx, 31, 0x232154u);
    ctx->pc = 0x232150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23214Cu;
    // 0x232150: 0x44202f  dsubu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118938u, 0x23214Cu, 0x232154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232154u;
label_232154:
    // 0x232154: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x232154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x232158: 0x9fa60000  lwu         $a2, 0x0($sp)
    ctx->pc = 0x232158u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23215c: 0xdc8217b0  ld          $v0, 0x17B0($a0)
    ctx->pc = 0x23215cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 6064)));
    // 0x232160: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x232160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x232164: 0x34a5423f  ori         $a1, $a1, 0x423F
    ctx->pc = 0x232164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16959);
    // 0x232168: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x232168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23216c: 0x248417b0  addiu       $a0, $a0, 0x17B0
    ctx->pc = 0x23216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6064));
    // 0x232170: 0x46302d  daddu       $a2, $v0, $a2
    ctx->pc = 0x232170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x232174: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x232174u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x232178: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x232178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23217c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23217cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x232180: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x232180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x232184: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x232184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x232188: 0xa4282a  slt         $a1, $a1, $a0
    ctx->pc = 0x232188u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23218c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23218Cu;
    {
        const bool branch_taken_0x23218c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x232190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23218Cu;
        // 0x232190: 0xfe040008  sd          $a0, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23218c) {
            ctx->pc = 0x2321ACu;
            goto label_2321ac;
        }
    }
    ctx->pc = 0x232194u;
    // 0x232194: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x232194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x232198: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x232198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x23219c: 0x64c30001  daddiu      $v1, $a2, 0x1
    ctx->pc = 0x23219cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x2321a0: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2321a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2321a4: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2321a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2321a8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2321a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_2321ac:
    // 0x2321ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2321acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2321b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2321b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2321b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2321B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2321B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321B4u;
        // 0x2321b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2321B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2321BCu;
    // 0x2321bc: 0x0  nop
    ctx->pc = 0x2321bcu;
    // NOP
    if (ctx->pc == 0x2321bcu) { ctx->pc = 0x2321c0u; }
}

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

// Function: sub_002AC400
// Address: 0x2ac400 - 0x2ac4a8
void sub_002AC400_0x2ac400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC400_0x2ac400");
#endif

    switch (ctx->pc) {
        case 0x2ac448u: goto label_2ac448;
        default: break;
    }

    ctx->pc = 0x2ac400u;

    // 0x2ac400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ac400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ac404: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ac404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ac408: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ac408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ac40c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac410: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ac410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ac414: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC414u;
    {
        const bool branch_taken_0x2ac414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC414u;
        // 0x2ac418: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac414) {
            ctx->pc = 0x2AC42Cu;
            goto label_2ac42c;
        }
    }
    ctx->pc = 0x2AC41Cu;
    // 0x2ac41c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ac41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac420: 0x8e32007c  lw          $s2, 0x7C($s1)
    ctx->pc = 0x2ac420u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2ac424: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC424u;
    {
        const bool branch_taken_0x2ac424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC424u;
        // 0x2ac428: 0x9c50004c  lwu         $s0, 0x4C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac424) {
            ctx->pc = 0x2AC438u;
            goto label_2ac438;
        }
    }
    ctx->pc = 0x2AC42Cu;
label_2ac42c:
    // 0x2ac42c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac430: 0x8e320070  lw          $s2, 0x70($s1)
    ctx->pc = 0x2ac430u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ac434: 0x9c500044  lwu         $s0, 0x44($v0)
    ctx->pc = 0x2ac434u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2ac438:
    // 0x2ac438: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AC438u;
    {
        const bool branch_taken_0x2ac438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC438u;
        // 0x2ac43c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac438) {
            ctx->pc = 0x2AC490u;
            goto label_2ac490;
        }
    }
    ctx->pc = 0x2AC440u;
    // 0x2ac440: 0xc0a5b08  jal         func_296C20
    ctx->pc = 0x2AC440u;
    SET_GPR_U32(ctx, 31, 0x2AC448u);
    ctx->pc = 0x2AC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC440u;
    // 0x2ac444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C20u, 0x2AC440u, 0x2AC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC448u;
label_2ac448:
    // 0x2ac448: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ac448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ac44c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC44Cu;
    {
        const bool branch_taken_0x2ac44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ac44c) {
            ctx->pc = 0x2AC450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC44Cu;
            // 0x2ac450: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC464u;
            goto label_2ac464;
        }
    }
    ctx->pc = 0x2AC454u;
    // 0x2ac454: 0x66020007  daddiu      $v0, $s0, 0x7
    ctx->pc = 0x2ac454u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)7);
    // 0x2ac458: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2ac458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2ac45c: 0x280f8  dsll        $s0, $v0, 3
    ctx->pc = 0x2ac45cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 3);
    // 0x2ac460: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ac460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ac464:
    // 0x2ac464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ac464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac468: 0x10383c  dsll32      $a3, $s0, 0
    ctx->pc = 0x2ac468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ac46c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ac46cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2ac470: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ac470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac474: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x2ac474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2ac478: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac47c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac480: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ac480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac488: 0x80a5832  j           func_2960C8
    ctx->pc = 0x2AC488u;
    ctx->pc = 0x2AC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC488u;
    // 0x2ac48c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960C8u;
    sub_002960C8_0x2960c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2AC490u;
label_2ac490:
    // 0x2ac490: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac494: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac49c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC49Cu;
        // 0x2ac4a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC4A4u;
    // 0x2ac4a4: 0x0  nop
    ctx->pc = 0x2ac4a4u;
    // NOP
}

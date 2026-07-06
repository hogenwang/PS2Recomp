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

// Function: sub_00221960
// Address: 0x221960 - 0x2219e8
void sub_00221960_0x221960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221960_0x221960");
#endif

    switch (ctx->pc) {
        case 0x221960u: goto label_221960;
        case 0x221964u: goto label_221964;
        case 0x221968u: goto label_221968;
        case 0x22196cu: goto label_22196c;
        case 0x221970u: goto label_221970;
        case 0x221974u: goto label_221974;
        case 0x221978u: goto label_221978;
        case 0x22197cu: goto label_22197c;
        case 0x221980u: goto label_221980;
        case 0x221984u: goto label_221984;
        case 0x221988u: goto label_221988;
        case 0x22198cu: goto label_22198c;
        case 0x221990u: goto label_221990;
        case 0x221994u: goto label_221994;
        case 0x221998u: goto label_221998;
        case 0x22199cu: goto label_22199c;
        case 0x2219a0u: goto label_2219a0;
        case 0x2219a4u: goto label_2219a4;
        case 0x2219a8u: goto label_2219a8;
        case 0x2219acu: goto label_2219ac;
        case 0x2219b0u: goto label_2219b0;
        case 0x2219b4u: goto label_2219b4;
        case 0x2219b8u: goto label_2219b8;
        case 0x2219bcu: goto label_2219bc;
        case 0x2219c0u: goto label_2219c0;
        case 0x2219c4u: goto label_2219c4;
        case 0x2219c8u: goto label_2219c8;
        case 0x2219ccu: goto label_2219cc;
        case 0x2219d0u: goto label_2219d0;
        case 0x2219d4u: goto label_2219d4;
        case 0x2219d8u: goto label_2219d8;
        case 0x2219dcu: goto label_2219dc;
        case 0x2219e0u: goto label_2219e0;
        case 0x2219e4u: goto label_2219e4;
        default: break;
    }

    ctx->pc = 0x221960u;

label_221960:
    // 0x221960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_221964:
    // 0x221964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_221968:
    // 0x221968: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_22196c:
    if (ctx->pc == 0x22196Cu) {
        ctx->pc = 0x22196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221968u;
        // 0x22196c: 0x8c8d0004  lw          $t5, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221970u;
        goto label_221970;
    }
    ctx->pc = 0x221968u;
    {
        const bool branch_taken_0x221968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x221968) {
            ctx->pc = 0x22196Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221968u;
            // 0x22196c: 0x8c8d0004  lw          $t5, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221998u;
            goto label_221998;
        }
    }
    ctx->pc = 0x221970u;
label_221970:
    // 0x221970: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221974:
    // 0x221974: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221974u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_221978:
    // 0x221978: 0x24842b70  addiu       $a0, $a0, 0x2B70
    ctx->pc = 0x221978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11120));
label_22197c:
    // 0x22197c: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
label_221980:
    // 0x221980: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_221984:
    // 0x221984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221988:
    // 0x221988: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x221988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_22198c:
    // 0x22198c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22198cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221990:
    // 0x221990: 0x8089794  j           func_225E50
label_221994:
    if (ctx->pc == 0x221994u) {
        ctx->pc = 0x221994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221990u;
        // 0x221994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221998u;
        goto label_221998;
    }
    ctx->pc = 0x221990u;
    ctx->pc = 0x221994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221990u;
    // 0x221994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x221998u;
label_221998:
    // 0x221998: 0x55a00009  bnel        $t5, $zero, . + 4 + (0x9 << 2)
label_22199c:
    if (ctx->pc == 0x22199Cu) {
        ctx->pc = 0x22199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221998u;
        // 0x22199c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219A0u;
        goto label_2219a0;
    }
    ctx->pc = 0x221998u;
    {
        const bool branch_taken_0x221998 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x221998) {
            ctx->pc = 0x22199Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221998u;
            // 0x22199c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2219C0u;
            goto label_2219c0;
        }
    }
    ctx->pc = 0x2219A0u;
label_2219a0:
    // 0x2219a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2219a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2219a4:
    // 0x2219a4: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2219a8:
    // 0x2219a8: 0x24842b70  addiu       $a0, $a0, 0x2B70
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11120));
label_2219ac:
    // 0x2219ac: 0x25082a60  addiu       $t0, $t0, 0x2A60
    ctx->pc = 0x2219acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10848));
label_2219b0:
    // 0x2219b0: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x2219b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_2219b4:
    // 0x2219b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2219b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2219b8:
    // 0x2219b8: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_2219bc:
    if (ctx->pc == 0x2219BCu) {
        ctx->pc = 0x2219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219B8u;
        // 0x2219bc: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219C0u;
        goto label_2219c0;
    }
    ctx->pc = 0x2219B8u;
    {
        const bool branch_taken_0x2219b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219B8u;
        // 0x2219bc: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219b8) {
            ctx->pc = 0x22198Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22198c;
        }
    }
    ctx->pc = 0x2219C0u;
label_2219c0:
    // 0x2219c0: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x2219c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2219c4:
    // 0x2219c4: 0x11af0004  beq         $t5, $t7, . + 4 + (0x4 << 2)
label_2219c8:
    if (ctx->pc == 0x2219C8u) {
        ctx->pc = 0x2219C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219C4u;
        // 0x2219c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219CCu;
        goto label_2219cc;
    }
    ctx->pc = 0x2219C4u;
    {
        const bool branch_taken_0x2219c4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2219C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219C4u;
        // 0x2219c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219c4) {
            ctx->pc = 0x2219D8u;
            goto label_2219d8;
        }
    }
    ctx->pc = 0x2219CCu;
label_2219cc:
    // 0x2219cc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2219d0:
    // 0x2219d0: 0x40f809  jalr        $v0
label_2219d4:
    if (ctx->pc == 0x2219D4u) {
        ctx->pc = 0x2219D8u;
        goto label_2219d8;
    }
    ctx->pc = 0x2219D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2219D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2219D0u, 0x2219D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2219D8u;
label_2219d8:
    // 0x2219d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2219d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2219dc:
    // 0x2219dc: 0x3e00008  jr          $ra
label_2219e0:
    if (ctx->pc == 0x2219E0u) {
        ctx->pc = 0x2219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219DCu;
        // 0x2219e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219E4u;
        goto label_2219e4;
    }
    ctx->pc = 0x2219DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219DCu;
        // 0x2219e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2219DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2219E4u;
label_2219e4:
    // 0x2219e4: 0x0  nop
    ctx->pc = 0x2219e4u;
    // NOP
    if (ctx->pc == 0x2219e4u) { ctx->pc = 0x2219e8u; }
}

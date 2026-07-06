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

// Function: sub_002ED908
// Address: 0x2ed908 - 0x2ed9b0
void sub_002ED908_0x2ed908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED908_0x2ed908");
#endif

    switch (ctx->pc) {
        case 0x2ed970u: goto label_2ed970;
        case 0x2ed988u: goto label_2ed988;
        default: break;
    }

    ctx->pc = 0x2ed908u;

    // 0x2ed908: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed908u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ed90c: 0x25eeeca8  addiu       $t6, $t7, -0x1358
    ctx->pc = 0x2ed90cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ed910: 0x8dcd00b4  lw          $t5, 0xB4($t6)
    ctx->pc = 0x2ed910u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 180)));
    // 0x2ed914: 0x11a0000b  beqz        $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED914u;
    {
        const bool branch_taken_0x2ed914 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED914u;
        // 0x2ed918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed914) {
            ctx->pc = 0x2ED944u;
            goto label_2ed944;
        }
    }
    ctx->pc = 0x2ED91Cu;
    // 0x2ed91c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED91Cu;
    {
        const bool branch_taken_0x2ed91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED91Cu;
        // 0x2ed920: 0x25c200b8  addiu       $v0, $t6, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed91c) {
            ctx->pc = 0x2ED944u;
            goto label_2ed944;
        }
    }
    ctx->pc = 0x2ED924u;
    // 0x2ed924: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2ed924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ed928: 0x248f0001  addiu       $t7, $a0, 0x1
    ctx->pc = 0x2ed928u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ed92c: 0x11ed0005  beq         $t7, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED92Cu;
    {
        const bool branch_taken_0x2ed92c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x2ED930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED92Cu;
        // 0x2ed930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed92c) {
            ctx->pc = 0x2ED944u;
            goto label_2ed944;
        }
    }
    ctx->pc = 0x2ED934u;
    // 0x2ed934: 0x25cf00e4  addiu       $t7, $t6, 0xE4
    ctx->pc = 0x2ed934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 228));
    // 0x2ed938: 0x240e002c  addiu       $t6, $zero, 0x2C
    ctx->pc = 0x2ed938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2ed93c: 0x8e7018  mult        $t6, $a0, $t6
    ctx->pc = 0x2ed93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2ed940: 0x1cf1021  addu        $v0, $t6, $t7
    ctx->pc = 0x2ed940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_2ed944:
    // 0x2ed944: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED94Cu;
    // 0x2ed94c: 0x0  nop
    ctx->pc = 0x2ed94cu;
    // NOP
    // 0x2ed950: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed950u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ed954: 0x25edeca8  addiu       $t5, $t7, -0x1358
    ctx->pc = 0x2ed954u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ed958: 0x8dae00b4  lw          $t6, 0xB4($t5)
    ctx->pc = 0x2ed958u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 180)));
    // 0x2ed95c: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED95Cu;
    {
        const bool branch_taken_0x2ed95c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED95Cu;
        // 0x2ed960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed95c) {
            ctx->pc = 0x2ED988u;
            goto label_2ed988;
        }
    }
    ctx->pc = 0x2ED964u;
    // 0x2ed964: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED964u;
    {
        const bool branch_taken_0x2ed964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed964) {
            ctx->pc = 0x2ED968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED964u;
            // 0x2ed968: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED990u;
            goto label_2ed990;
        }
    }
    ctx->pc = 0x2ED96Cu;
    // 0x2ed96c: 0x25a400b8  addiu       $a0, $t5, 0xB8
    ctx->pc = 0x2ed96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 184));
label_2ed970:
    // 0x2ed970: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED970u;
    {
        const bool branch_taken_0x2ed970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED970u;
        // 0x2ed974: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed970) {
            ctx->pc = 0x2ED984u;
            goto label_2ed984;
        }
    }
    ctx->pc = 0x2ED978u;
    // 0x2ed978: 0x8c8f001c  lw          $t7, 0x1C($a0)
    ctx->pc = 0x2ed978u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ed97c: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED97Cu;
    {
        const bool branch_taken_0x2ed97c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed97c) {
            ctx->pc = 0x2ED988u;
            goto label_2ed988;
        }
    }
    ctx->pc = 0x2ED984u;
label_2ed984:
    // 0x2ed984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed988:
    // 0x2ed988: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED990u;
label_2ed990:
    // 0x2ed990: 0x248f0001  addiu       $t7, $a0, 0x1
    ctx->pc = 0x2ed990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ed994: 0x11eefffc  beq         $t7, $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2ED994u;
    {
        const bool branch_taken_0x2ed994 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x2ED998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED994u;
        // 0x2ed998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed994) {
            ctx->pc = 0x2ED988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed988;
        }
    }
    ctx->pc = 0x2ED99Cu;
    // 0x2ed99c: 0x240e002c  addiu       $t6, $zero, 0x2C
    ctx->pc = 0x2ed99cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2ed9a0: 0x25af00e4  addiu       $t7, $t5, 0xE4
    ctx->pc = 0x2ed9a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 228));
    // 0x2ed9a4: 0x8e7018  mult        $t6, $a0, $t6
    ctx->pc = 0x2ed9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2ed9a8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x2ED9A8u;
    {
        const bool branch_taken_0x2ed9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9A8u;
        // 0x2ed9ac: 0x1cf2021  addu        $a0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9a8) {
            ctx->pc = 0x2ED970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed970;
        }
    }
    ctx->pc = 0x2ED9B0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9918
// Address: 0x1a9918 - 0x1a99a0
void sub_001A9918_0x1a9918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9918_0x1a9918");
#endif

    ctx->pc = 0x1a9918u;

    // 0x1a9918: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a9918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a991c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1a991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a9920: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1a9920u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a9924: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9924u;
    {
        const bool branch_taken_0x1a9924 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9924u;
            // 0x1a9928: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9924) {
            ctx->pc = 0x1A9940u;
            goto label_1a9940;
        }
    }
    ctx->pc = 0x1A992Cu;
    // 0x1a992c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1a992cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a9930: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x1a9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x1a9934: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A9934u;
    {
        const bool branch_taken_0x1a9934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A9938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9934u;
            // 0x1a9938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9934) {
            ctx->pc = 0x1A9998u;
            goto label_1a9998;
        }
    }
    ctx->pc = 0x1A993Cu;
    // 0x1a993c: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x1a993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_1a9940:
    // 0x1a9940: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9940u;
    {
        const bool branch_taken_0x1a9940 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9940) {
            ctx->pc = 0x1A9944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9940u;
            // 0x1a9944: 0x90a60010  lbu         $a2, 0x10($a1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A995Cu;
            goto label_1a995c;
        }
    }
    ctx->pc = 0x1A9948u;
    // 0x1a9948: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1a9948u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a994c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1a994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a9950: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A9950u;
    {
        const bool branch_taken_0x1a9950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A9954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9950u;
            // 0x1a9954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9950) {
            ctx->pc = 0x1A9998u;
            goto label_1a9998;
        }
    }
    ctx->pc = 0x1A9958u;
    // 0x1a9958: 0x90a60010  lbu         $a2, 0x10($a1)
    ctx->pc = 0x1a9958u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_1a995c:
    // 0x1a995c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1a995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a9960: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9960u;
    {
        const bool branch_taken_0x1a9960 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9960u;
            // 0x1a9964: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9960) {
            ctx->pc = 0x1A997Cu;
            goto label_1a997c;
        }
    }
    ctx->pc = 0x1A9968u;
    // 0x1a9968: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x1a9968u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x1a996c: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x1a996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x1a9970: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9970u;
    {
        const bool branch_taken_0x1a9970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A9974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9970u;
            // 0x1a9974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9970) {
            ctx->pc = 0x1A9998u;
            goto label_1a9998;
        }
    }
    ctx->pc = 0x1A9978u;
    // 0x1a9978: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x1a9978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_1a997c:
    // 0x1a997c: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A997Cu;
    {
        const bool branch_taken_0x1a997c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A997Cu;
            // 0x1a9980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a997c) {
            ctx->pc = 0x1A9998u;
            goto label_1a9998;
        }
    }
    ctx->pc = 0x1A9984u;
    // 0x1a9984: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x1a9984u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x1a9988: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1a9988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a998c: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A998Cu;
    {
        const bool branch_taken_0x1a998c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A9990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A998Cu;
            // 0x1a9990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a998c) {
            ctx->pc = 0x1A9998u;
            goto label_1a9998;
        }
    }
    ctx->pc = 0x1A9994u;
    // 0x1a9994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a9994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9998:
    // 0x1a9998: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A99A0u;
    ctx->pc = 0x1a99a0u;
}

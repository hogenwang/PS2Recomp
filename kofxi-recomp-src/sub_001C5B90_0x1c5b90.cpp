#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5B90
// Address: 0x1c5b90 - 0x1c5c20
void sub_001C5B90_0x1c5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5B90_0x1c5b90");
#endif

    switch (ctx->pc) {
        case 0x1c5bb8u: goto label_1c5bb8;
        case 0x1c5c10u: goto label_1c5c10;
        default: break;
    }

    ctx->pc = 0x1c5b90u;

    // 0x1c5b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5b94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c5b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b98: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5B98u;
    {
        const bool branch_taken_0x1c5b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B98u;
            // 0x1c5b9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b98) {
            ctx->pc = 0x1C5BB8u;
            goto label_1c5bb8;
        }
    }
    ctx->pc = 0x1C5BA0u;
    // 0x1c5ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5ba4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c5ba8: 0xa040ef68  sb          $zero, -0x1098($v0)
    ctx->pc = 0x1c5ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294963048), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BACu;
            // 0x1c5bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5BB4u;
    // 0x1c5bb4: 0x0  nop
    ctx->pc = 0x1c5bb4u;
    // NOP
label_1c5bb8:
    // 0x1c5bb8: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1c5bb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5bbc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c5bc0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5BC0u;
    {
        const bool branch_taken_0x1c5bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BC0u;
            // 0x1c5bc4: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bc0) {
            ctx->pc = 0x1C5BF8u;
            goto label_1c5bf8;
        }
    }
    ctx->pc = 0x1C5BC8u;
    // 0x1c5bc8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5BC8u;
    {
        const bool branch_taken_0x1c5bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BC8u;
            // 0x1c5bcc: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bc8) {
            ctx->pc = 0x1C5BF8u;
            goto label_1c5bf8;
        }
    }
    ctx->pc = 0x1C5BD0u;
    // 0x1c5bd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1c5bd4: 0x2448a420  addiu       $t0, $v0, -0x5BE0
    ctx->pc = 0x1c5bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943776));
    // 0x1c5bd8: 0x2487ef68  addiu       $a3, $a0, -0x1098
    ctx->pc = 0x1c5bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963048));
    // 0x1c5bdc: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x1c5bdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c5be0: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x1c5be0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1c5be4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1c5be4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5be8: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x1c5be8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c5bec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5BECu;
    {
        const bool branch_taken_0x1c5bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BECu;
            // 0x1c5bf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bec) {
            ctx->pc = 0x1C5C04u;
            goto label_1c5c04;
        }
    }
    ctx->pc = 0x1C5BF4u;
    // 0x1c5bf4: 0x0  nop
    ctx->pc = 0x1c5bf4u;
    // NOP
label_1c5bf8:
    // 0x1c5bf8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c5bfc: 0xa080ef68  sb          $zero, -0x1098($a0)
    ctx->pc = 0x1c5bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294963048), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5c04:
    // 0x1c5c04: 0x2484ef68  addiu       $a0, $a0, -0x1098
    ctx->pc = 0x1c5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963048));
    // 0x1c5c08: 0x804a7dc  j           func_129F70
    ctx->pc = 0x1C5C08u;
    ctx->pc = 0x1C5C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C08u;
            // 0x1c5c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129F70_0x129f70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5C10u;
label_1c5c10:
    // 0x1c5c10: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c5c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C14u;
            // 0x1c5c18: 0x2442ef68  addiu       $v0, $v0, -0x1098 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5C1Cu;
    // 0x1c5c1c: 0x0  nop
    ctx->pc = 0x1c5c1cu;
    // NOP
    ctx->pc = 0x1c5c20u;
}

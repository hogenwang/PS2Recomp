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

// Function: sub_00127120
// Address: 0x127120 - 0x1271d0
void sub_00127120_0x127120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127120_0x127120");
#endif

    switch (ctx->pc) {
        case 0x127144u: goto label_127144;
        case 0x12717cu: goto label_12717c;
        case 0x1271acu: goto label_1271ac;
        default: break;
    }

    ctx->pc = 0x127120u;

    // 0x127120: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x127120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127124: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x127124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x127128: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x127128u;
    {
        const bool branch_taken_0x127128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127128u;
        // 0x12712c: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127128) {
            ctx->pc = 0x12719Cu;
            goto label_12719c;
        }
    }
    ctx->pc = 0x127130u;
    // 0x127130: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x127130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x127134: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x127134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x127138: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x127138u;
    {
        const bool branch_taken_0x127138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127138) {
            ctx->pc = 0x12713Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127138u;
            // 0x12713c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1271A0u;
            goto label_1271a0;
        }
    }
    ctx->pc = 0x127140u;
    // 0x127140: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x127140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_127144:
    // 0x127144: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x127144u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127148: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x127148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x12714c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x127150: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x127150u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x127154: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x127154u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x127158: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x127158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x12715c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12715cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127160: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x127164: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x127164u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x127168: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x127168u;
    {
        const bool branch_taken_0x127168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127168u;
        // 0x12716c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127168) {
            ctx->pc = 0x127144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127144;
        }
    }
    ctx->pc = 0x127170u;
    // 0x127170: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x127170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x127174: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x127174u;
    {
        const bool branch_taken_0x127174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127174u;
        // 0x127178: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127174) {
            ctx->pc = 0x12719Cu;
            goto label_12719c;
        }
    }
    ctx->pc = 0x12717Cu;
label_12717c:
    // 0x12717c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x12717cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127180: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x127180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x127184: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x127184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x127188: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x127188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12718c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x12718cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x127190: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127190u;
    {
        const bool branch_taken_0x127190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127190u;
        // 0x127194: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127190) {
            ctx->pc = 0x12717Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12717c;
        }
    }
    ctx->pc = 0x127198u;
    // 0x127198: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x127198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12719c:
    // 0x12719c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12719cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1271a0:
    // 0x1271a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1271a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1271a4: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1271A4u;
    {
        const bool branch_taken_0x1271a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1271A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271A4u;
        // 0x1271a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271a4) {
            ctx->pc = 0x1271C8u;
            goto label_1271c8;
        }
    }
    ctx->pc = 0x1271ACu;
label_1271ac:
    // 0x1271ac: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1271acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1271b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1271b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1271b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1271b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1271b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1271b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1271bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1271bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1271c0: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1271C0u;
    {
        const bool branch_taken_0x1271c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1271c0) {
            ctx->pc = 0x1271ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1271ac;
        }
    }
    ctx->pc = 0x1271C8u;
label_1271c8:
    // 0x1271c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1271C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1271CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C8u;
        // 0x1271cc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1271C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1271D0u;
}

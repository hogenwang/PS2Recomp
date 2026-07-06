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

// Function: sub_001E1AC8
// Address: 0x1e1ac8 - 0x1e1b40
void sub_001E1AC8_0x1e1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1AC8_0x1e1ac8");
#endif

    switch (ctx->pc) {
        case 0x1e1ae8u: goto label_1e1ae8;
        case 0x1e1b08u: goto label_1e1b08;
        default: break;
    }

    ctx->pc = 0x1e1ac8u;

    // 0x1e1ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1ad0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e1ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1adc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1ae0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1E1AE0u;
    SET_GPR_U32(ctx, 31, 0x1E1AE8u);
    ctx->pc = 0x1E1AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AE0u;
    // 0x1e1ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1E1AE0u, 0x1E1AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AE8u;
label_1e1ae8:
    // 0x1e1ae8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1aec: 0x8e0303ac  lw          $v1, 0x3AC($s0)
    ctx->pc = 0x1e1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x1e1af0: 0x2484d388  addiu       $a0, $a0, -0x2C78
    ctx->pc = 0x1e1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955912));
    // 0x1e1af4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1e1af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e1af8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1AF8u;
    {
        const bool branch_taken_0x1e1af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AF8u;
        // 0x1e1afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1af8) {
            ctx->pc = 0x1E1B28u;
            goto label_1e1b28;
        }
    }
    ctx->pc = 0x1E1B00u;
    // 0x1e1b00: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E1B00u;
    SET_GPR_U32(ctx, 31, 0x1E1B08u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E1B00u, 0x1E1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B08u;
label_1e1b08:
    // 0x1e1b08: 0x8e0603ac  lw          $a2, 0x3AC($s0)
    ctx->pc = 0x1e1b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x1e1b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e1b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1b14: 0x8e0403a8  lw          $a0, 0x3A8($s0)
    ctx->pc = 0x1e1b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x1e1b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b20: 0x804a966  j           func_12A598
    ctx->pc = 0x1E1B20u;
    ctx->pc = 0x1E1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B20u;
    // 0x1e1b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    sub_0012A598_0x12a598(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1B28u;
label_1e1b28:
    // 0x1e1b28: 0x8e0403a8  lw          $a0, 0x3A8($s0)
    ctx->pc = 0x1e1b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x1e1b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1b38: 0x804a7dc  j           func_129F70
    ctx->pc = 0x1E1B38u;
    ctx->pc = 0x1E1B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B38u;
    // 0x1e1b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    sub_00129F70_0x129f70(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1B40u;
}

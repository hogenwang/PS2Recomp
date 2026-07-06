#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143490
// Address: 0x143490 - 0x143500
void sub_00143490_0x143490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143490_0x143490");
#endif

    ctx->pc = 0x143490u;

    // 0x143490: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x143490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x143494: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x143494u;
    {
        const bool branch_taken_0x143494 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x143494) {
            ctx->pc = 0x143498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143494u;
            // 0x143498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1434F8u;
            goto label_1434f8;
        }
    }
    ctx->pc = 0x14349Cu;
    // 0x14349c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x14349Cu;
    {
        const bool branch_taken_0x14349c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14349c) {
            ctx->pc = 0x1434CCu;
            goto label_1434cc;
        }
    }
    ctx->pc = 0x1434A4u;
    // 0x1434a4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1434a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1434a8: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1434a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1434ac: 0x8442f118  lh          $v0, -0xEE8($v0)
    ctx->pc = 0x1434acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963480)));
    // 0x1434b0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1434b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1434b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1434b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1434b8: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1434b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1434bc: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1434BCu;
    {
        const bool branch_taken_0x1434bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1434bc) {
            ctx->pc = 0x1434F4u;
            goto label_1434f4;
        }
    }
    ctx->pc = 0x1434C4u;
    // 0x1434c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1434C4u;
    {
        const bool branch_taken_0x1434c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1434C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1434C4u;
            // 0x1434c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434c4) {
            ctx->pc = 0x1434F8u;
            goto label_1434f8;
        }
    }
    ctx->pc = 0x1434CCu;
label_1434cc:
    // 0x1434cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1434ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1434d0: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1434d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1434d4: 0x8442db18  lh          $v0, -0x24E8($v0)
    ctx->pc = 0x1434d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957848)));
    // 0x1434d8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1434d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1434dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1434dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1434e0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1434e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1434e4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1434E4u;
    {
        const bool branch_taken_0x1434e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1434e4) {
            ctx->pc = 0x1434F4u;
            goto label_1434f4;
        }
    }
    ctx->pc = 0x1434ECu;
    // 0x1434ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1434ECu;
    {
        const bool branch_taken_0x1434ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1434F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1434ECu;
            // 0x1434f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434ec) {
            ctx->pc = 0x1434F8u;
            goto label_1434f8;
        }
    }
    ctx->pc = 0x1434F4u;
label_1434f4:
    // 0x1434f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1434f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1434f8:
    // 0x1434f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1434F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143500u;
    ctx->pc = 0x143500u;
}

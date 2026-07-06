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

// Function: sub_00152B10
// Address: 0x152b10 - 0x152c60
void sub_00152B10_0x152b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152B10_0x152b10");
#endif

    switch (ctx->pc) {
        case 0x152b34u: goto label_152b34;
        default: break;
    }

    ctx->pc = 0x152b10u;

    // 0x152b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152b14: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152b1c: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x152b20: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x152b20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x152b24: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x152B24u;
    {
        const bool branch_taken_0x152b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b24) {
            ctx->pc = 0x152B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152B24u;
            // 0x152b28: 0x24030600  addiu       $v1, $zero, 0x600 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152B50u;
            goto label_152b50;
        }
    }
    ctx->pc = 0x152B2Cu;
    // 0x152b2c: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152B2Cu;
    SET_GPR_U32(ctx, 31, 0x152B34u);
    ctx->pc = 0x152B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B2Cu;
    // 0x152b30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x152B2Cu, 0x152B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B34u;
label_152b34:
    // 0x152b34: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x152b34u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152b38: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152b3c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152b40: 0xa485f100  sh          $a1, -0xF00($a0)
    ctx->pc = 0x152b40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294963456), (uint16_t)GPR_U32(ctx, 5));
    // 0x152b44: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x152b44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x152b48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152B48u;
    {
        const bool branch_taken_0x152b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B48u;
        // 0x152b4c: 0xa462f102  sh          $v0, -0xEFE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963458), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b48) {
            ctx->pc = 0x152B64u;
            goto label_152b64;
        }
    }
    ctx->pc = 0x152B50u;
label_152b50:
    // 0x152b50: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152b54: 0xa443f100  sh          $v1, -0xF00($v0)
    ctx->pc = 0x152b54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963456), (uint16_t)GPR_U32(ctx, 3));
    // 0x152b58: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x152b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x152b5c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152b60: 0xa443f102  sh          $v1, -0xEFE($v0)
    ctx->pc = 0x152b60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963458), (uint16_t)GPR_U32(ctx, 3));
label_152b64:
    // 0x152b64: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152b68: 0x9442f100  lhu         $v0, -0xF00($v0)
    ctx->pc = 0x152b68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963456)));
    // 0x152b6c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152B6Cu;
    {
        const bool branch_taken_0x152b6c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x152b6c) {
            ctx->pc = 0x152B80u;
            goto label_152b80;
        }
    }
    ctx->pc = 0x152B74u;
    // 0x152b74: 0x240305f6  addiu       $v1, $zero, 0x5F6
    ctx->pc = 0x152b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1526));
    // 0x152b78: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152b7c: 0xa443f100  sh          $v1, -0xF00($v0)
    ctx->pc = 0x152b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963456), (uint16_t)GPR_U32(ctx, 3));
label_152b80:
    // 0x152b80: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152b84: 0x9442f102  lhu         $v0, -0xEFE($v0)
    ctx->pc = 0x152b84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963458)));
    // 0x152b88: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152B88u;
    {
        const bool branch_taken_0x152b88 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x152b88) {
            ctx->pc = 0x152B9Cu;
            goto label_152b9c;
        }
    }
    ctx->pc = 0x152B90u;
    // 0x152b90: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x152b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x152b94: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152b98: 0xa443f102  sh          $v1, -0xEFE($v0)
    ctx->pc = 0x152b98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963458), (uint16_t)GPR_U32(ctx, 3));
label_152b9c:
    // 0x152b9c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152ba0: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x152ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x152ba4: 0x9449f100  lhu         $t1, -0xF00($v0)
    ctx->pc = 0x152ba4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963456)));
    // 0x152ba8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x152ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x152bac: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152bb0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152bb4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152bb8: 0x94042  srl         $t0, $t1, 1
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x152bbc: 0x9447f102  lhu         $a3, -0xEFE($v0)
    ctx->pc = 0x152bbcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963458)));
    // 0x152bc0: 0xa4c8f104  sh          $t0, -0xEFC($a2)
    ctx->pc = 0x152bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294963460), (uint16_t)GPR_U32(ctx, 8));
    // 0x152bc4: 0xa488f108  sh          $t0, -0xEF8($a0)
    ctx->pc = 0x152bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294963464), (uint16_t)GPR_U32(ctx, 8));
    // 0x152bc8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152bcc: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x152bccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x152bd0: 0xa4a6f106  sh          $a2, -0xEFA($a1)
    ctx->pc = 0x152bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294963462), (uint16_t)GPR_U32(ctx, 6));
    // 0x152bd4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152bd8: 0xa440f110  sh          $zero, -0xEF0($v0)
    ctx->pc = 0x152bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963472), (uint16_t)GPR_U32(ctx, 0));
    // 0x152bdc: 0x24e5ff10  addiu       $a1, $a3, -0xF0
    ctx->pc = 0x152bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967056));
    // 0x152be0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152be4: 0xa465f10a  sh          $a1, -0xEF6($v1)
    ctx->pc = 0x152be4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963466), (uint16_t)GPR_U32(ctx, 5));
    // 0x152be8: 0xa447f10e  sh          $a3, -0xEF2($v0)
    ctx->pc = 0x152be8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963470), (uint16_t)GPR_U32(ctx, 7));
    // 0x152bec: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152bf0: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x152bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x152bf4: 0xa460f10c  sh          $zero, -0xEF4($v1)
    ctx->pc = 0x152bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963468), (uint16_t)GPR_U32(ctx, 0));
    // 0x152bf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x152bf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x152bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c00: 0x2445ffe0  addiu       $a1, $v0, -0x20
    ctx->pc = 0x152c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x152c04: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152c08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152c0c: 0xa466f118  sh          $a2, -0xEE8($v1)
    ctx->pc = 0x152c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963480), (uint16_t)GPR_U32(ctx, 6));
    // 0x152c10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c14: 0xa445f11a  sh          $a1, -0xEE6($v0)
    ctx->pc = 0x152c14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963482), (uint16_t)GPR_U32(ctx, 5));
    // 0x152c18: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152c1c: 0xa489f112  sh          $t1, -0xEEE($a0)
    ctx->pc = 0x152c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294963474), (uint16_t)GPR_U32(ctx, 9));
    // 0x152c20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x152c20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x152c24: 0x9243c  dsll32      $a0, $t1, 16
    ctx->pc = 0x152c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
    // 0x152c28: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x152c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x152c2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x152c2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x152c30: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152c34: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x152c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x152c38: 0xa443f11c  sh          $v1, -0xEE4($v0)
    ctx->pc = 0x152c38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963484), (uint16_t)GPR_U32(ctx, 3));
    // 0x152c3c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152c40: 0xa444f11e  sh          $a0, -0xEE2($v0)
    ctx->pc = 0x152c40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963486), (uint16_t)GPR_U32(ctx, 4));
    // 0x152c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x152C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C4Cu;
        // 0x152c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152C54u;
    // 0x152c54: 0x0  nop
    ctx->pc = 0x152c54u;
    // NOP
    // 0x152c58: 0x0  nop
    ctx->pc = 0x152c58u;
    // NOP
    // 0x152c5c: 0x0  nop
    ctx->pc = 0x152c5cu;
    // NOP
}

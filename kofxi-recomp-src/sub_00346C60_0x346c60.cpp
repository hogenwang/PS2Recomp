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

// Function: sub_00346C60
// Address: 0x346c60 - 0x346f10
void sub_00346C60_0x346c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346C60_0x346c60");
#endif

    switch (ctx->pc) {
        case 0x346c80u: goto label_346c80;
        case 0x346c8cu: goto label_346c8c;
        case 0x346c98u: goto label_346c98;
        case 0x346cc0u: goto label_346cc0;
        case 0x346cc8u: goto label_346cc8;
        case 0x346cd0u: goto label_346cd0;
        case 0x346cd8u: goto label_346cd8;
        case 0x346ce0u: goto label_346ce0;
        case 0x346ce8u: goto label_346ce8;
        case 0x346cf0u: goto label_346cf0;
        case 0x346d08u: goto label_346d08;
        case 0x346d18u: goto label_346d18;
        case 0x346d2cu: goto label_346d2c;
        case 0x346d38u: goto label_346d38;
        case 0x346d44u: goto label_346d44;
        case 0x346d50u: goto label_346d50;
        case 0x346d6cu: goto label_346d6c;
        case 0x346d88u: goto label_346d88;
        case 0x346d94u: goto label_346d94;
        case 0x346da0u: goto label_346da0;
        case 0x346dacu: goto label_346dac;
        case 0x346dc8u: goto label_346dc8;
        case 0x346de0u: goto label_346de0;
        case 0x346de8u: goto label_346de8;
        case 0x346df4u: goto label_346df4;
        case 0x346e4cu: goto label_346e4c;
        case 0x346e60u: goto label_346e60;
        case 0x346eacu: goto label_346eac;
        case 0x346ec8u: goto label_346ec8;
        case 0x346ed8u: goto label_346ed8;
        case 0x346ef4u: goto label_346ef4;
        default: break;
    }

    ctx->pc = 0x346c60u;

    // 0x346c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346c6c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x346c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x346c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c78: 0xc0551c0  jal         func_154700
    ctx->pc = 0x346C78u;
    SET_GPR_U32(ctx, 31, 0x346C80u);
    ctx->pc = 0x346C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C78u;
    // 0x346c7c: 0xac439478  sw          $v1, -0x6B88($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154700u, 0x346C78u, 0x346C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C80u;
label_346c80:
    // 0x346c80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x346c84: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x346C84u;
    SET_GPR_U32(ctx, 31, 0x346C8Cu);
    ctx->pc = 0x346C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C84u;
    // 0x346c88: 0xac40bdc8  sw          $zero, -0x4238($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300F30u, 0x346C84u, 0x346C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C8Cu;
label_346c8c:
    // 0x346c8c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x346c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x346c90: 0xc055684  jal         func_155A10
    ctx->pc = 0x346C90u;
    SET_GPR_U32(ctx, 31, 0x346C98u);
    ctx->pc = 0x346C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C90u;
    // 0x346c94: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x346C90u, 0x346C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C98u;
label_346c98:
    // 0x346c98: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x346c9c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x346c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x346ca0: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x346ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x346ca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x346ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ca8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x346cac: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x346cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x346cb0: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x346cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    // 0x346cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346cb8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x346CB8u;
    SET_GPR_U32(ctx, 31, 0x346CC0u);
    ctx->pc = 0x346CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CB8u;
    // 0x346cbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x346CB8u, 0x346CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CC0u;
label_346cc0:
    // 0x346cc0: 0xc0d1bc4  jal         func_346F10
    ctx->pc = 0x346CC0u;
    SET_GPR_U32(ctx, 31, 0x346CC8u);
    ctx->pc = 0x346F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346F10u, 0x346CC0u, 0x346CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CC8u;
label_346cc8:
    // 0x346cc8: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x346CC8u;
    SET_GPR_U32(ctx, 31, 0x346CD0u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x346CC8u, 0x346CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CD0u;
label_346cd0:
    // 0x346cd0: 0xc053318  jal         func_14CC60
    ctx->pc = 0x346CD0u;
    SET_GPR_U32(ctx, 31, 0x346CD8u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x346CD0u, 0x346CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CD8u;
label_346cd8:
    // 0x346cd8: 0xc069184  jal         func_1A4610
    ctx->pc = 0x346CD8u;
    SET_GPR_U32(ctx, 31, 0x346CE0u);
    ctx->pc = 0x346CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CD8u;
    // 0x346cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x346CD8u, 0x346CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CE0u;
label_346ce0:
    // 0x346ce0: 0xc0d0c74  jal         func_3431D0
    ctx->pc = 0x346CE0u;
    SET_GPR_U32(ctx, 31, 0x346CE8u);
    ctx->pc = 0x3431D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3431D0u, 0x346CE0u, 0x346CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CE8u;
label_346ce8:
    // 0x346ce8: 0xc069244  jal         func_1A4910
    ctx->pc = 0x346CE8u;
    SET_GPR_U32(ctx, 31, 0x346CF0u);
    ctx->pc = 0x1A4910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4910u, 0x346CE8u, 0x346CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CF0u;
label_346cf0:
    // 0x346cf0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x346cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x346cf4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346cf8: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x346cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x346cfc: 0xac40d9c0  sw          $zero, -0x2640($v0)
    ctx->pc = 0x346cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
    // 0x346d00: 0xc082678  jal         func_2099E0
    ctx->pc = 0x346D00u;
    SET_GPR_U32(ctx, 31, 0x346D08u);
    ctx->pc = 0x346D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D00u;
    // 0x346d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x346D00u, 0x346D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D08u;
label_346d08:
    // 0x346d08: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x346d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x346d0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d10: 0xc043e52  jal         func_10F948
    ctx->pc = 0x346D10u;
    SET_GPR_U32(ctx, 31, 0x346D18u);
    ctx->pc = 0x346D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D10u;
    // 0x346d14: 0x248451a0  addiu       $a0, $a0, 0x51A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x346D10u, 0x346D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D18u;
label_346d18:
    // 0x346d18: 0x56000016  bnel        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x346D18u;
    {
        const bool branch_taken_0x346d18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x346d18) {
            ctx->pc = 0x346D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346D18u;
            // 0x346d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346D74u;
            goto label_346d74;
        }
    }
    ctx->pc = 0x346D20u;
    // 0x346d20: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346d24: 0xc089014  jal         func_224050
    ctx->pc = 0x346D24u;
    SET_GPR_U32(ctx, 31, 0x346D2Cu);
    ctx->pc = 0x346D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D24u;
    // 0x346d28: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346D24u, 0x346D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D2Cu;
label_346d2c:
    // 0x346d2c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346d30: 0xc089014  jal         func_224050
    ctx->pc = 0x346D30u;
    SET_GPR_U32(ctx, 31, 0x346D38u);
    ctx->pc = 0x346D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D30u;
    // 0x346d34: 0x24841158  addiu       $a0, $a0, 0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346D30u, 0x346D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D38u;
label_346d38:
    // 0x346d38: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346d3c: 0xc089014  jal         func_224050
    ctx->pc = 0x346D3Cu;
    SET_GPR_U32(ctx, 31, 0x346D44u);
    ctx->pc = 0x346D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D3Cu;
    // 0x346d40: 0x248421d0  addiu       $a0, $a0, 0x21D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346D3Cu, 0x346D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D44u;
label_346d44:
    // 0x346d44: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346d48: 0xc089014  jal         func_224050
    ctx->pc = 0x346D48u;
    SET_GPR_U32(ctx, 31, 0x346D50u);
    ctx->pc = 0x346D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D48u;
    // 0x346d4c: 0x24843248  addiu       $a0, $a0, 0x3248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346D48u, 0x346D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D50u;
label_346d50:
    // 0x346d50: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x346d54: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346d58: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346d5c: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x346d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x346d60: 0xac40be90  sw          $zero, -0x4170($v0)
    ctx->pc = 0x346d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950544), GPR_U32(ctx, 0));
    // 0x346d64: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346D64u;
    SET_GPR_U32(ctx, 31, 0x346D6Cu);
    ctx->pc = 0x346D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D64u;
    // 0x346d68: 0x24a561c0  addiu       $a1, $a1, 0x61C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x346D64u, 0x346D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D6Cu;
label_346d6c:
    // 0x346d6c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x346D6Cu;
    {
        const bool branch_taken_0x346d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D6Cu;
        // 0x346d70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d6c) {
            ctx->pc = 0x346EF8u;
            goto label_346ef8;
        }
    }
    ctx->pc = 0x346D74u;
label_346d74:
    // 0x346d74: 0x56020016  bnel        $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x346D74u;
    {
        const bool branch_taken_0x346d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x346d74) {
            ctx->pc = 0x346D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346D74u;
            // 0x346d78: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346DD0u;
            goto label_346dd0;
        }
    }
    ctx->pc = 0x346D7Cu;
    // 0x346d7c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346d80: 0xc089014  jal         func_224050
    ctx->pc = 0x346D80u;
    SET_GPR_U32(ctx, 31, 0x346D88u);
    ctx->pc = 0x346D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D80u;
    // 0x346d84: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346D80u, 0x346D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D88u;
label_346d88:
    // 0x346d88: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346d8c: 0xc089014  jal         func_224050
    ctx->pc = 0x346D8Cu;
    SET_GPR_U32(ctx, 31, 0x346D94u);
    ctx->pc = 0x346D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D8Cu;
    // 0x346d90: 0x24841158  addiu       $a0, $a0, 0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346D8Cu, 0x346D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D94u;
label_346d94:
    // 0x346d94: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346d98: 0xc089014  jal         func_224050
    ctx->pc = 0x346D98u;
    SET_GPR_U32(ctx, 31, 0x346DA0u);
    ctx->pc = 0x346D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D98u;
    // 0x346d9c: 0x248421d0  addiu       $a0, $a0, 0x21D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346D98u, 0x346DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DA0u;
label_346da0:
    // 0x346da0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346da4: 0xc089014  jal         func_224050
    ctx->pc = 0x346DA4u;
    SET_GPR_U32(ctx, 31, 0x346DACu);
    ctx->pc = 0x346DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DA4u;
    // 0x346da8: 0x24843248  addiu       $a0, $a0, 0x3248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x346DA4u, 0x346DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DACu;
label_346dac:
    // 0x346dac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x346db0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346db4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346db8: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x346db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x346dbc: 0xac40be90  sw          $zero, -0x4170($v0)
    ctx->pc = 0x346dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950544), GPR_U32(ctx, 0));
    // 0x346dc0: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346DC0u;
    SET_GPR_U32(ctx, 31, 0x346DC8u);
    ctx->pc = 0x346DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DC0u;
    // 0x346dc4: 0x24a561c0  addiu       $a1, $a1, 0x61C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x346DC0u, 0x346DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DC8u;
label_346dc8:
    // 0x346dc8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x346DC8u;
    {
        const bool branch_taken_0x346dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346dc8) {
            ctx->pc = 0x346EF4u;
            goto label_346ef4;
        }
    }
    ctx->pc = 0x346DD0u;
label_346dd0:
    // 0x346dd0: 0x1602003f  bne         $s0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x346DD0u;
    {
        const bool branch_taken_0x346dd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x346dd0) {
            ctx->pc = 0x346ED0u;
            goto label_346ed0;
        }
    }
    ctx->pc = 0x346DD8u;
    // 0x346dd8: 0xc087b68  jal         func_21EDA0
    ctx->pc = 0x346DD8u;
    SET_GPR_U32(ctx, 31, 0x346DE0u);
    ctx->pc = 0x21EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDA0u, 0x346DD8u, 0x346DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DE0u;
label_346de0:
    // 0x346de0: 0xc0bb32c  jal         func_2ECCB0
    ctx->pc = 0x346DE0u;
    SET_GPR_U32(ctx, 31, 0x346DE8u);
    ctx->pc = 0x2ECCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECCB0u, 0x346DE0u, 0x346DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DE8u;
label_346de8:
    // 0x346de8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x346dec: 0xc0d0c28  jal         func_3430A0
    ctx->pc = 0x346DECu;
    SET_GPR_U32(ctx, 31, 0x346DF4u);
    ctx->pc = 0x346DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DECu;
    // 0x346df0: 0xa450be90  sh          $s0, -0x4170($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3430A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3430A0u, 0x346DECu, 0x346DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DF4u;
label_346df4:
    // 0x346df4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x346DF4u;
    {
        const bool branch_taken_0x346df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346df4) {
            ctx->pc = 0x346E54u;
            goto label_346e54;
        }
    }
    ctx->pc = 0x346DFCu;
    // 0x346dfc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x346dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x346e00: 0x8c429598  lw          $v0, -0x6A68($v0)
    ctx->pc = 0x346e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940056)));
    // 0x346e04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346E04u;
    {
        const bool branch_taken_0x346e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346e04) {
            ctx->pc = 0x346E18u;
            goto label_346e18;
        }
    }
    ctx->pc = 0x346E0Cu;
    // 0x346e0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x346e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x346e10: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x346e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x346e14: 0xac439598  sw          $v1, -0x6A68($v0)
    ctx->pc = 0x346e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940056), GPR_U32(ctx, 3));
label_346e18:
    // 0x346e18: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x346e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x346e1c: 0x8c429590  lw          $v0, -0x6A70($v0)
    ctx->pc = 0x346e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940048)));
    // 0x346e20: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x346e20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x346e24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x346E24u;
    {
        const bool branch_taken_0x346e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x346e24) {
            ctx->pc = 0x346E38u;
            goto label_346e38;
        }
    }
    ctx->pc = 0x346E2Cu;
    // 0x346e2c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x346e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x346e30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x346e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x346e34: 0xac439590  sw          $v1, -0x6A70($v0)
    ctx->pc = 0x346e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940048), GPR_U32(ctx, 3));
label_346e38:
    // 0x346e38: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346e3c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346e40: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x346e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x346e44: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346E44u;
    SET_GPR_U32(ctx, 31, 0x346E4Cu);
    ctx->pc = 0x346E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E44u;
    // 0x346e48: 0x24a568a0  addiu       $a1, $a1, 0x68A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x346E44u, 0x346E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E4Cu;
label_346e4c:
    // 0x346e4c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x346E4Cu;
    {
        const bool branch_taken_0x346e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346e4c) {
            ctx->pc = 0x346EF4u;
            goto label_346ef4;
        }
    }
    ctx->pc = 0x346E54u;
label_346e54:
    // 0x346e54: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346e58: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x346E58u;
    SET_GPR_U32(ctx, 31, 0x346E60u);
    ctx->pc = 0x346E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E58u;
    // 0x346e5c: 0x2484ff88  addiu       $a0, $a0, -0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2A8u, 0x346E58u, 0x346E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E60u;
label_346e60:
    // 0x346e60: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x346E60u;
    {
        const bool branch_taken_0x346e60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x346e60) {
            ctx->pc = 0x346EB4u;
            goto label_346eb4;
        }
    }
    ctx->pc = 0x346E68u;
    // 0x346e68: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346e6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x346e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x346e70: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x346e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x346e74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346e78: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x346e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x346e7c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346e80: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x346e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x346e84: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346e88: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x346e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x346e8c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346e90: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346e94: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x346e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x346e98: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346e9c: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x346e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x346ea0: 0x0  nop
    ctx->pc = 0x346ea0u;
    // NOP
    // 0x346ea4: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346EA4u;
    SET_GPR_U32(ctx, 31, 0x346EACu);
    ctx->pc = 0x346EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EA4u;
    // 0x346ea8: 0x24a568a0  addiu       $a1, $a1, 0x68A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x346EA4u, 0x346EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EACu;
label_346eac:
    // 0x346eac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x346EACu;
    {
        const bool branch_taken_0x346eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346eac) {
            ctx->pc = 0x346EC8u;
            goto label_346ec8;
        }
    }
    ctx->pc = 0x346EB4u;
label_346eb4:
    // 0x346eb4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346eb8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346ebc: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x346ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x346ec0: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346EC0u;
    SET_GPR_U32(ctx, 31, 0x346EC8u);
    ctx->pc = 0x346EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EC0u;
    // 0x346ec4: 0x24a568a0  addiu       $a1, $a1, 0x68A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x346EC0u, 0x346EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EC8u;
label_346ec8:
    // 0x346ec8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x346EC8u;
    {
        const bool branch_taken_0x346ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346ec8) {
            ctx->pc = 0x346EF4u;
            goto label_346ef4;
        }
    }
    ctx->pc = 0x346ED0u;
label_346ed0:
    // 0x346ed0: 0xc087b68  jal         func_21EDA0
    ctx->pc = 0x346ED0u;
    SET_GPR_U32(ctx, 31, 0x346ED8u);
    ctx->pc = 0x21EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDA0u, 0x346ED0u, 0x346ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346ED8u;
label_346ed8:
    // 0x346ed8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x346edc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346ee0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346ee4: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x346ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x346ee8: 0xa450be90  sh          $s0, -0x4170($v0)
    ctx->pc = 0x346ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 16));
    // 0x346eec: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346EECu;
    SET_GPR_U32(ctx, 31, 0x346EF4u);
    ctx->pc = 0x346EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EECu;
    // 0x346ef0: 0x24a56610  addiu       $a1, $a1, 0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x346EECu, 0x346EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EF4u;
label_346ef4:
    // 0x346ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_346ef8:
    // 0x346ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346efc: 0x3e00008  jr          $ra
    ctx->pc = 0x346EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EFCu;
        // 0x346f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346F04u;
    // 0x346f04: 0x0  nop
    ctx->pc = 0x346f04u;
    // NOP
    // 0x346f08: 0x0  nop
    ctx->pc = 0x346f08u;
    // NOP
    // 0x346f0c: 0x0  nop
    ctx->pc = 0x346f0cu;
    // NOP
    if (ctx->pc == 0x346f0cu) { ctx->pc = 0x346f10u; }
}

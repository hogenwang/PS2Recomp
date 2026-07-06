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

// Function: sub_00345DF0
// Address: 0x345df0 - 0x346040
void sub_00345DF0_0x345df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345DF0_0x345df0");
#endif

    switch (ctx->pc) {
        case 0x345e10u: goto label_345e10;
        case 0x345e20u: goto label_345e20;
        case 0x345e30u: goto label_345e30;
        case 0x345e3cu: goto label_345e3c;
        case 0x345e60u: goto label_345e60;
        case 0x345eb8u: goto label_345eb8;
        case 0x345ec8u: goto label_345ec8;
        case 0x345ed8u: goto label_345ed8;
        case 0x345ef0u: goto label_345ef0;
        case 0x345f1cu: goto label_345f1c;
        case 0x345f44u: goto label_345f44;
        case 0x345f54u: goto label_345f54;
        case 0x345f80u: goto label_345f80;
        case 0x345fb8u: goto label_345fb8;
        case 0x345fccu: goto label_345fcc;
        case 0x345fe4u: goto label_345fe4;
        case 0x346004u: goto label_346004;
        case 0x346018u: goto label_346018;
        case 0x346028u: goto label_346028;
        default: break;
    }

    ctx->pc = 0x345df0u;

label_345df0:
    // 0x345df0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345df4: 0x8088696  j           func_221A58
    ctx->pc = 0x345DF4u;
    ctx->pc = 0x345DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DF4u;
    // 0x345df8: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    sub_00221A58_0x221a58(rdram, ctx, runtime); return;
    ctx->pc = 0x345DFCu;
    // 0x345dfc: 0x0  nop
    ctx->pc = 0x345dfcu;
    // NOP
    // 0x345e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345e08: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x345E08u;
    SET_GPR_U32(ctx, 31, 0x345E10u);
    ctx->pc = 0x345E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E08u;
    // 0x345e0c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x345E08u, 0x345E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E10u;
label_345e10:
    // 0x345e10: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e18: 0xc082678  jal         func_2099E0
    ctx->pc = 0x345E18u;
    SET_GPR_U32(ctx, 31, 0x345E20u);
    ctx->pc = 0x345E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E18u;
    // 0x345e1c: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x345E18u, 0x345E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E20u;
label_345e20:
    // 0x345e20: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345e24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345e28: 0xc082678  jal         func_2099E0
    ctx->pc = 0x345E28u;
    SET_GPR_U32(ctx, 31, 0x345E30u);
    ctx->pc = 0x345E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E28u;
    // 0x345e2c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x345E28u, 0x345E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E30u;
label_345e30:
    // 0x345e30: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345e34: 0xc082674  jal         func_2099D0
    ctx->pc = 0x345E34u;
    SET_GPR_U32(ctx, 31, 0x345E3Cu);
    ctx->pc = 0x345E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E34u;
    // 0x345e38: 0x24845e50  addiu       $a0, $a0, 0x5E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345E34u, 0x345E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E3Cu;
label_345e3c:
    // 0x345e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345e40: 0x3e00008  jr          $ra
    ctx->pc = 0x345E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E40u;
        // 0x345e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345E48u;
    // 0x345e48: 0x0  nop
    ctx->pc = 0x345e48u;
    // NOP
    // 0x345e4c: 0x0  nop
    ctx->pc = 0x345e4cu;
    // NOP
    // 0x345e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345e58: 0xc0d177c  jal         func_345DF0
    ctx->pc = 0x345E58u;
    SET_GPR_U32(ctx, 31, 0x345E60u);
    ctx->pc = 0x345E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E58u;
    // 0x345e5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345DF0u;
    goto label_345df0;
    ctx->pc = 0x345E60u;
label_345e60:
    // 0x345e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x345e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x345e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x345e68: 0x52030038  beql        $s0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x345E68u;
    {
        const bool branch_taken_0x345e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x345e68) {
            ctx->pc = 0x345E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345E68u;
            // 0x345e6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345F4Cu;
            goto label_345f4c;
        }
    }
    ctx->pc = 0x345E70u;
    // 0x345e70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x345e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x345e74: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x345E74u;
    {
        const bool branch_taken_0x345e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x345e74) {
            ctx->pc = 0x345EF8u;
            goto label_345ef8;
        }
    }
    ctx->pc = 0x345E7Cu;
    // 0x345e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345e80: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x345E80u;
    {
        const bool branch_taken_0x345e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x345e80) {
            ctx->pc = 0x345EF8u;
            goto label_345ef8;
        }
    }
    ctx->pc = 0x345E88u;
    // 0x345e88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x345e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x345e8c: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x345E8Cu;
    {
        const bool branch_taken_0x345e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x345e8c) {
            ctx->pc = 0x345EB0u;
            goto label_345eb0;
        }
    }
    ctx->pc = 0x345E94u;
    // 0x345e94: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x345e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x345e98: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x345E98u;
    {
        const bool branch_taken_0x345e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x345e98) {
            ctx->pc = 0x345EB0u;
            goto label_345eb0;
        }
    }
    ctx->pc = 0x345EA0u;
    // 0x345ea0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345EA0u;
    {
        const bool branch_taken_0x345ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ea0) {
            ctx->pc = 0x345EB0u;
            goto label_345eb0;
        }
    }
    ctx->pc = 0x345EA8u;
    // 0x345ea8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x345EA8u;
    {
        const bool branch_taken_0x345ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EA8u;
        // 0x345eac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ea8) {
            ctx->pc = 0x345F58u;
            goto label_345f58;
        }
    }
    ctx->pc = 0x345EB0u;
label_345eb0:
    // 0x345eb0: 0xc068e68  jal         func_1A39A0
    ctx->pc = 0x345EB0u;
    SET_GPR_U32(ctx, 31, 0x345EB8u);
    ctx->pc = 0x1A39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A39A0u, 0x345EB0u, 0x345EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EB8u;
label_345eb8:
    // 0x345eb8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345ebc: 0x8c4440a8  lw          $a0, 0x40A8($v0)
    ctx->pc = 0x345ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    // 0x345ec0: 0xc0886bc  jal         func_221AF0
    ctx->pc = 0x345EC0u;
    SET_GPR_U32(ctx, 31, 0x345EC8u);
    ctx->pc = 0x345EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EC0u;
    // 0x345ec4: 0x24050e10  addiu       $a1, $zero, 0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AF0u, 0x345EC0u, 0x345EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EC8u;
label_345ec8:
    // 0x345ec8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345ecc: 0x8c4440a8  lw          $a0, 0x40A8($v0)
    ctx->pc = 0x345eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    // 0x345ed0: 0xc0892ba  jal         func_224AE8
    ctx->pc = 0x345ED0u;
    SET_GPR_U32(ctx, 31, 0x345ED8u);
    ctx->pc = 0x345ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345ED0u;
    // 0x345ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224AE8u, 0x345ED0u, 0x345ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345ED8u;
label_345ed8:
    // 0x345ed8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345edc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x345edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ee0: 0x24845df0  addiu       $a0, $a0, 0x5DF0
    ctx->pc = 0x345ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
    // 0x345ee4: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x345ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x345ee8: 0xc0d175c  jal         func_345D70
    ctx->pc = 0x345EE8u;
    SET_GPR_U32(ctx, 31, 0x345EF0u);
    ctx->pc = 0x345EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EE8u;
    // 0x345eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D70u, 0x345EE8u, 0x345EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EF0u;
label_345ef0:
    // 0x345ef0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x345EF0u;
    {
        const bool branch_taken_0x345ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ef0) {
            ctx->pc = 0x345F54u;
            goto label_345f54;
        }
    }
    ctx->pc = 0x345EF8u;
label_345ef8:
    // 0x345ef8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345efc: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x345efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x345f00: 0x8c4440a8  lw          $a0, 0x40A8($v0)
    ctx->pc = 0x345f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    // 0x345f04: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345f08: 0x8c4641d0  lw          $a2, 0x41D0($v0)
    ctx->pc = 0x345f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16848)));
    // 0x345f0c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345f10: 0x8c4741cc  lw          $a3, 0x41CC($v0)
    ctx->pc = 0x345f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16844)));
    // 0x345f14: 0xc088576  jal         func_2215D8
    ctx->pc = 0x345F14u;
    SET_GPR_U32(ctx, 31, 0x345F1Cu);
    ctx->pc = 0x345F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F14u;
    // 0x345f18: 0x24a5eb00  addiu       $a1, $a1, -0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D8u, 0x345F14u, 0x345F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F1Cu;
label_345f1c:
    // 0x345f1c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x345f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x345f20: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345f24: 0x24425f70  addiu       $v0, $v0, 0x5F70
    ctx->pc = 0x345f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24432));
    // 0x345f28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x345f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f2c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x345f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345f30: 0x24845df0  addiu       $a0, $a0, 0x5DF0
    ctx->pc = 0x345f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
    // 0x345f34: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x345f34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x345f38: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x345f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x345f3c: 0xc0d176c  jal         func_345DB0
    ctx->pc = 0x345F3Cu;
    SET_GPR_U32(ctx, 31, 0x345F44u);
    ctx->pc = 0x345F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F3Cu;
    // 0x345f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345DB0u, 0x345F3Cu, 0x345F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F44u;
label_345f44:
    // 0x345f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x345F44u;
    {
        const bool branch_taken_0x345f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345f44) {
            ctx->pc = 0x345F54u;
            goto label_345f54;
        }
    }
    ctx->pc = 0x345F4Cu;
label_345f4c:
    // 0x345f4c: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x345F4Cu;
    SET_GPR_U32(ctx, 31, 0x345F54u);
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x345F4Cu, 0x345F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F54u;
label_345f54:
    // 0x345f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345f58:
    // 0x345f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x345F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F5Cu;
        // 0x345f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345F64u;
    // 0x345f64: 0x0  nop
    ctx->pc = 0x345f64u;
    // NOP
    // 0x345f68: 0x0  nop
    ctx->pc = 0x345f68u;
    // NOP
    // 0x345f6c: 0x0  nop
    ctx->pc = 0x345f6cu;
    // NOP
    // 0x345f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345f78: 0xc0d177c  jal         func_345DF0
    ctx->pc = 0x345F78u;
    SET_GPR_U32(ctx, 31, 0x345F80u);
    ctx->pc = 0x345F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F78u;
    // 0x345f7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345DF0u;
    goto label_345df0;
    ctx->pc = 0x345F80u;
label_345f80:
    // 0x345f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x345f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f84: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x345f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x345f88: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x345f88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x345f8c: 0x50200027  beql        $at, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x345F8Cu;
    {
        const bool branch_taken_0x345f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x345f8c) {
            ctx->pc = 0x345F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345F8Cu;
            // 0x345f90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34602Cu;
            goto label_34602c;
        }
    }
    ctx->pc = 0x345F94u;
    // 0x345f94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x345f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x345f98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x345f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x345f9c: 0x24845130  addiu       $a0, $a0, 0x5130
    ctx->pc = 0x345f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20784));
    // 0x345fa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x345fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x345fa4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x345fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345fa8: 0x600008  jr          $v1
    ctx->pc = 0x345FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x345FB0u: goto label_345fb0;
            case 0x345FC0u: goto label_345fc0;
            case 0x345FECu: goto label_345fec;
            case 0x34600Cu: goto label_34600c;
            case 0x346020u: goto label_346020;
            case 0x346028u: goto label_346028;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345FA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x345FB0u;
label_345fb0:
    // 0x345fb0: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x345FB0u;
    SET_GPR_U32(ctx, 31, 0x345FB8u);
    ctx->pc = 0x345FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FB0u;
    // 0x345fb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x345FB0u, 0x345FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FB8u;
label_345fb8:
    // 0x345fb8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x345FB8u;
    {
        const bool branch_taken_0x345fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345fb8) {
            ctx->pc = 0x346028u;
            goto label_346028;
        }
    }
    ctx->pc = 0x345FC0u;
label_345fc0:
    // 0x345fc0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345fc4: 0xc088598  jal         func_221660
    ctx->pc = 0x345FC4u;
    SET_GPR_U32(ctx, 31, 0x345FCCu);
    ctx->pc = 0x345FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FC4u;
    // 0x345fc8: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221660u, 0x345FC4u, 0x345FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FCCu;
label_345fcc:
    // 0x345fcc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x345fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345fd4: 0x24845df0  addiu       $a0, $a0, 0x5DF0
    ctx->pc = 0x345fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
    // 0x345fd8: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x345fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x345fdc: 0xc0d175c  jal         func_345D70
    ctx->pc = 0x345FDCu;
    SET_GPR_U32(ctx, 31, 0x345FE4u);
    ctx->pc = 0x345FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FDCu;
    // 0x345fe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D70u, 0x345FDCu, 0x345FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FE4u;
label_345fe4:
    // 0x345fe4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x345FE4u;
    {
        const bool branch_taken_0x345fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345fe4) {
            ctx->pc = 0x346028u;
            goto label_346028;
        }
    }
    ctx->pc = 0x345FECu;
label_345fec:
    // 0x345fec: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x345ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ff4: 0x24845df0  addiu       $a0, $a0, 0x5DF0
    ctx->pc = 0x345ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
    // 0x345ff8: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x345ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x345ffc: 0xc0d175c  jal         func_345D70
    ctx->pc = 0x345FFCu;
    SET_GPR_U32(ctx, 31, 0x346004u);
    ctx->pc = 0x346000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FFCu;
    // 0x346000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D70u, 0x345FFCu, 0x346004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346004u;
label_346004:
    // 0x346004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346004u;
    {
        const bool branch_taken_0x346004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346004) {
            ctx->pc = 0x346028u;
            goto label_346028;
        }
    }
    ctx->pc = 0x34600Cu;
label_34600c:
    // 0x34600c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34600cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346010: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346010u;
    SET_GPR_U32(ctx, 31, 0x346018u);
    ctx->pc = 0x346014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346010u;
    // 0x346014: 0x24846100  addiu       $a0, $a0, 0x6100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x346010u, 0x346018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346018u;
label_346018:
    // 0x346018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346018u;
    {
        const bool branch_taken_0x346018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346018) {
            ctx->pc = 0x346028u;
            goto label_346028;
        }
    }
    ctx->pc = 0x346020u;
label_346020:
    // 0x346020: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x346020u;
    SET_GPR_U32(ctx, 31, 0x346028u);
    ctx->pc = 0x346024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346020u;
    // 0x346024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x346020u, 0x346028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346028u;
label_346028:
    // 0x346028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34602c:
    // 0x34602c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34602cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346030: 0x3e00008  jr          $ra
    ctx->pc = 0x346030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346030u;
        // 0x346034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346038u;
    // 0x346038: 0x0  nop
    ctx->pc = 0x346038u;
    // NOP
    // 0x34603c: 0x0  nop
    ctx->pc = 0x34603cu;
    // NOP
}

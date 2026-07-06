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

// Function: sub_00346040
// Address: 0x346040 - 0x3463d0
void sub_00346040_0x346040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346040_0x346040");
#endif

    switch (ctx->pc) {
        case 0x346060u: goto label_346060;
        case 0x3460b4u: goto label_3460b4;
        case 0x3460ccu: goto label_3460cc;
        case 0x3460e0u: goto label_3460e0;
        case 0x3460f0u: goto label_3460f0;
        case 0x3461d0u: goto label_3461d0;
        case 0x3461d8u: goto label_3461d8;
        case 0x34624cu: goto label_34624c;
        case 0x34625cu: goto label_34625c;
        case 0x34626cu: goto label_34626c;
        case 0x34627cu: goto label_34627c;
        case 0x34628cu: goto label_34628c;
        case 0x34629cu: goto label_34629c;
        case 0x3462a8u: goto label_3462a8;
        case 0x3462d8u: goto label_3462d8;
        case 0x3462ecu: goto label_3462ec;
        case 0x3462f8u: goto label_3462f8;
        case 0x346334u: goto label_346334;
        case 0x346344u: goto label_346344;
        case 0x346354u: goto label_346354;
        case 0x346364u: goto label_346364;
        case 0x346378u: goto label_346378;
        case 0x3463a4u: goto label_3463a4;
        case 0x3463b8u: goto label_3463b8;
        default: break;
    }

    ctx->pc = 0x346040u;

label_346040:
    // 0x346040: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346044: 0x808917a  j           func_2245E8
    ctx->pc = 0x346044u;
    ctx->pc = 0x346048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346044u;
    // 0x346048: 0x8c4440a0  lw          $a0, 0x40A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    sub_002245E8_0x2245e8(rdram, ctx, runtime); return;
    ctx->pc = 0x34604Cu;
    // 0x34604c: 0x0  nop
    ctx->pc = 0x34604cu;
    // NOP
    // 0x346050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346058: 0xc0d1810  jal         func_346040
    ctx->pc = 0x346058u;
    SET_GPR_U32(ctx, 31, 0x346060u);
    ctx->pc = 0x34605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346058u;
    // 0x34605c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346040u;
    goto label_346040;
    ctx->pc = 0x346060u;
label_346060:
    // 0x346060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346064: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x346064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x346068: 0x5203001f  beql        $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x346068u;
    {
        const bool branch_taken_0x346068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x346068) {
            ctx->pc = 0x34606Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346068u;
            // 0x34606c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3460E8u;
            goto label_3460e8;
        }
    }
    ctx->pc = 0x346070u;
    // 0x346070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346074: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x346074u;
    {
        const bool branch_taken_0x346074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x346074) {
            ctx->pc = 0x3460D4u;
            goto label_3460d4;
        }
    }
    ctx->pc = 0x34607Cu;
    // 0x34607c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x346080: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346080u;
    {
        const bool branch_taken_0x346080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x346080) {
            ctx->pc = 0x346098u;
            goto label_346098;
        }
    }
    ctx->pc = 0x346088u;
    // 0x346088: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x346088u;
    {
        const bool branch_taken_0x346088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x346088) {
            ctx->pc = 0x346098u;
            goto label_346098;
        }
    }
    ctx->pc = 0x346090u;
    // 0x346090: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x346090u;
    {
        const bool branch_taken_0x346090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346090u;
        // 0x346094: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346090) {
            ctx->pc = 0x3460F4u;
            goto label_3460f4;
        }
    }
    ctx->pc = 0x346098u;
label_346098:
    // 0x346098: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34609c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3460a0: 0x8c4440a0  lw          $a0, 0x40A0($v0)
    ctx->pc = 0x3460a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16544)));
    // 0x3460a4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3460a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3460a8: 0x8c4641e0  lw          $a2, 0x41E0($v0)
    ctx->pc = 0x3460a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16864)));
    // 0x3460ac: 0xc089318  jal         func_224C60
    ctx->pc = 0x3460ACu;
    SET_GPR_U32(ctx, 31, 0x3460B4u);
    ctx->pc = 0x3460B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460ACu;
    // 0x3460b0: 0x8c6540a8  lw          $a1, 0x40A8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224C60u, 0x3460ACu, 0x3460B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460B4u;
label_3460b4:
    // 0x3460b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3460b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3460b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3460b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460bc: 0x24846040  addiu       $a0, $a0, 0x6040
    ctx->pc = 0x3460bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24640));
    // 0x3460c0: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x3460c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x3460c4: 0xc0d175c  jal         func_345D70
    ctx->pc = 0x3460C4u;
    SET_GPR_U32(ctx, 31, 0x3460CCu);
    ctx->pc = 0x3460C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460C4u;
    // 0x3460c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D70u, 0x3460C4u, 0x3460CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460CCu;
label_3460cc:
    // 0x3460cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3460CCu;
    {
        const bool branch_taken_0x3460cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3460cc) {
            ctx->pc = 0x3460F0u;
            goto label_3460f0;
        }
    }
    ctx->pc = 0x3460D4u;
label_3460d4:
    // 0x3460d4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3460d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3460d8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3460D8u;
    SET_GPR_U32(ctx, 31, 0x3460E0u);
    ctx->pc = 0x3460DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460D8u;
    // 0x3460dc: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3460D8u, 0x3460E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460E0u;
label_3460e0:
    // 0x3460e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3460E0u;
    {
        const bool branch_taken_0x3460e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3460e0) {
            ctx->pc = 0x3460F0u;
            goto label_3460f0;
        }
    }
    ctx->pc = 0x3460E8u;
label_3460e8:
    // 0x3460e8: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x3460E8u;
    SET_GPR_U32(ctx, 31, 0x3460F0u);
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x3460E8u, 0x3460F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460F0u;
label_3460f0:
    // 0x3460f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3460f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3460f4:
    // 0x3460f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3460f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3460f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3460F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3460FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460F8u;
        // 0x3460fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3460F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346100u;
    // 0x346100: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346104: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346108: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x34610c: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x34610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x346110: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346114: 0x24846050  addiu       $a0, $a0, 0x6050
    ctx->pc = 0x346114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24656));
    // 0x346118: 0x0  nop
    ctx->pc = 0x346118u;
    // NOP
    // 0x34611c: 0x80558d4  j           func_156350
    ctx->pc = 0x34611Cu;
    ctx->pc = 0x346120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34611Cu;
    // 0x346120: 0x24a56130  addiu       $a1, $a1, 0x6130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x346124u;
    // 0x346124: 0x0  nop
    ctx->pc = 0x346124u;
    // NOP
    // 0x346128: 0x0  nop
    ctx->pc = 0x346128u;
    // NOP
    // 0x34612c: 0x0  nop
    ctx->pc = 0x34612cu;
    // NOP
    // 0x346130: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346134: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346138: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x34613c: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x34613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x346140: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346144: 0x24846050  addiu       $a0, $a0, 0x6050
    ctx->pc = 0x346144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24656));
    // 0x346148: 0x0  nop
    ctx->pc = 0x346148u;
    // NOP
    // 0x34614c: 0x80558d4  j           func_156350
    ctx->pc = 0x34614Cu;
    ctx->pc = 0x346150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34614Cu;
    // 0x346150: 0x24a56160  addiu       $a1, $a1, 0x6160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x346154u;
    // 0x346154: 0x0  nop
    ctx->pc = 0x346154u;
    // NOP
    // 0x346158: 0x0  nop
    ctx->pc = 0x346158u;
    // NOP
    // 0x34615c: 0x0  nop
    ctx->pc = 0x34615cu;
    // NOP
    // 0x346160: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346164: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346168: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x34616c: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x34616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x346170: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346174: 0x24846050  addiu       $a0, $a0, 0x6050
    ctx->pc = 0x346174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24656));
    // 0x346178: 0x0  nop
    ctx->pc = 0x346178u;
    // NOP
    // 0x34617c: 0x80558d4  j           func_156350
    ctx->pc = 0x34617Cu;
    ctx->pc = 0x346180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34617Cu;
    // 0x346180: 0x24a56190  addiu       $a1, $a1, 0x6190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x346184u;
    // 0x346184: 0x0  nop
    ctx->pc = 0x346184u;
    // NOP
    // 0x346188: 0x0  nop
    ctx->pc = 0x346188u;
    // NOP
    // 0x34618c: 0x0  nop
    ctx->pc = 0x34618cu;
    // NOP
    // 0x346190: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346194: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346198: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x346198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x34619c: 0x24633248  addiu       $v1, $v1, 0x3248
    ctx->pc = 0x34619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12872));
    // 0x3461a0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3461a4: 0x24846050  addiu       $a0, $a0, 0x6050
    ctx->pc = 0x3461a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24656));
    // 0x3461a8: 0x0  nop
    ctx->pc = 0x3461a8u;
    // NOP
    // 0x3461ac: 0x80558d4  j           func_156350
    ctx->pc = 0x3461ACu;
    ctx->pc = 0x3461B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3461ACu;
    // 0x3461b0: 0x24a523d0  addiu       $a1, $a1, 0x23D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x3461B4u;
    // 0x3461b4: 0x0  nop
    ctx->pc = 0x3461b4u;
    // NOP
    // 0x3461b8: 0x0  nop
    ctx->pc = 0x3461b8u;
    // NOP
    // 0x3461bc: 0x0  nop
    ctx->pc = 0x3461bcu;
    // NOP
    // 0x3461c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3461c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3461c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3461c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3461c8: 0xc0897ba  jal         func_225EE8
    ctx->pc = 0x3461C8u;
    SET_GPR_U32(ctx, 31, 0x3461D0u);
    ctx->pc = 0x3461CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3461C8u;
    // 0x3461cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EE8u, 0x3461C8u, 0x3461D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3461D0u;
label_3461d0:
    // 0x3461d0: 0xc0897b6  jal         func_225ED8
    ctx->pc = 0x3461D0u;
    SET_GPR_U32(ctx, 31, 0x3461D8u);
    ctx->pc = 0x3461D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3461D0u;
    // 0x3461d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225ED8u, 0x3461D0u, 0x3461D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3461D8u;
label_3461d8:
    // 0x3461d8: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x3461d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x3461dc: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x3461dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    // 0x3461e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3461e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3461e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3461e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3461e8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3461E8u;
    {
        const bool branch_taken_0x3461e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3461ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461E8u;
        // 0x3461ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3461e8) {
            ctx->pc = 0x3461FCu;
            goto label_3461fc;
        }
    }
    ctx->pc = 0x3461F0u;
    // 0x3461f0: 0x2c63003c  sltiu       $v1, $v1, 0x3C
    ctx->pc = 0x3461f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x3461f4: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x3461F4u;
    {
        const bool branch_taken_0x3461f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3461f4) {
            ctx->pc = 0x3461F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3461F4u;
            // 0x3461f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3462ACu;
            goto label_3462ac;
        }
    }
    ctx->pc = 0x3461FCu;
label_3461fc:
    // 0x3461fc: 0x2402b1dc  addiu       $v0, $zero, -0x4E24
    ctx->pc = 0x3461fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947292));
    // 0x346200: 0x5202001c  beql        $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x346200u;
    {
        const bool branch_taken_0x346200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x346200) {
            ctx->pc = 0x346204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346200u;
            // 0x346204: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346274u;
            goto label_346274;
        }
    }
    ctx->pc = 0x346208u;
    // 0x346208: 0x2402b1dd  addiu       $v0, $zero, -0x4E23
    ctx->pc = 0x346208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947293));
    // 0x34620c: 0x52020015  beql        $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34620Cu;
    {
        const bool branch_taken_0x34620c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x34620c) {
            ctx->pc = 0x346210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34620Cu;
            // 0x346210: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346264u;
            goto label_346264;
        }
    }
    ctx->pc = 0x346214u;
    // 0x346214: 0x2402b1de  addiu       $v0, $zero, -0x4E22
    ctx->pc = 0x346214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947294));
    // 0x346218: 0x5202000e  beql        $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x346218u;
    {
        const bool branch_taken_0x346218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x346218) {
            ctx->pc = 0x34621Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346218u;
            // 0x34621c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346254u;
            goto label_346254;
        }
    }
    ctx->pc = 0x346220u;
    // 0x346220: 0x2402b1df  addiu       $v0, $zero, -0x4E21
    ctx->pc = 0x346220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947295));
    // 0x346224: 0x52020007  beql        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346224u;
    {
        const bool branch_taken_0x346224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x346224) {
            ctx->pc = 0x346228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346224u;
            // 0x346228: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346244u;
            goto label_346244;
        }
    }
    ctx->pc = 0x34622Cu;
    // 0x34622c: 0x2402b1e0  addiu       $v0, $zero, -0x4E20
    ctx->pc = 0x34622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947296));
    // 0x346230: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x346230u;
    {
        const bool branch_taken_0x346230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x346230) {
            ctx->pc = 0x346240u;
            goto label_346240;
        }
    }
    ctx->pc = 0x346238u;
    // 0x346238: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x346238u;
    {
        const bool branch_taken_0x346238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346238u;
        // 0x34623c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346238) {
            ctx->pc = 0x346284u;
            goto label_346284;
        }
    }
    ctx->pc = 0x346240u;
label_346240:
    // 0x346240: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x346240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_346244:
    // 0x346244: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346244u;
    SET_GPR_U32(ctx, 31, 0x34624Cu);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x346244u, 0x34624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34624Cu;
label_34624c:
    // 0x34624c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34624Cu;
    {
        const bool branch_taken_0x34624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34624c) {
            ctx->pc = 0x34628Cu;
            goto label_34628c;
        }
    }
    ctx->pc = 0x346254u;
label_346254:
    // 0x346254: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346254u;
    SET_GPR_U32(ctx, 31, 0x34625Cu);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x346254u, 0x34625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34625Cu;
label_34625c:
    // 0x34625c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34625Cu;
    {
        const bool branch_taken_0x34625c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34625c) {
            ctx->pc = 0x34628Cu;
            goto label_34628c;
        }
    }
    ctx->pc = 0x346264u;
label_346264:
    // 0x346264: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346264u;
    SET_GPR_U32(ctx, 31, 0x34626Cu);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x346264u, 0x34626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34626Cu;
label_34626c:
    // 0x34626c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34626Cu;
    {
        const bool branch_taken_0x34626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34626c) {
            ctx->pc = 0x34628Cu;
            goto label_34628c;
        }
    }
    ctx->pc = 0x346274u;
label_346274:
    // 0x346274: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346274u;
    SET_GPR_U32(ctx, 31, 0x34627Cu);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x346274u, 0x34627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34627Cu;
label_34627c:
    // 0x34627c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34627Cu;
    {
        const bool branch_taken_0x34627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34627c) {
            ctx->pc = 0x34628Cu;
            goto label_34628c;
        }
    }
    ctx->pc = 0x346284u;
label_346284:
    // 0x346284: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346284u;
    SET_GPR_U32(ctx, 31, 0x34628Cu);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x346284u, 0x34628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34628Cu;
label_34628c:
    // 0x34628c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34628cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x346290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346294: 0xc082678  jal         func_2099E0
    ctx->pc = 0x346294u;
    SET_GPR_U32(ctx, 31, 0x34629Cu);
    ctx->pc = 0x346298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346294u;
    // 0x346298: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x346294u, 0x34629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34629Cu;
label_34629c:
    // 0x34629c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34629cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3462a0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3462A0u;
    SET_GPR_U32(ctx, 31, 0x3462A8u);
    ctx->pc = 0x3462A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462A0u;
    // 0x3462a4: 0x248462c0  addiu       $a0, $a0, 0x62C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3462A0u, 0x3462A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462A8u;
label_3462a8:
    // 0x3462a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3462a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3462ac:
    // 0x3462ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3462acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3462b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3462B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3462B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462B0u;
        // 0x3462b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3462B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3462B8u;
    // 0x3462b8: 0x0  nop
    ctx->pc = 0x3462b8u;
    // NOP
    // 0x3462bc: 0x0  nop
    ctx->pc = 0x3462bcu;
    // NOP
    // 0x3462c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3462c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3462c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3462c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3462c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3462c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3462cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3462ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3462d0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3462D0u;
    SET_GPR_U32(ctx, 31, 0x3462D8u);
    ctx->pc = 0x3462D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462D0u;
    // 0x3462d4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3462D0u, 0x3462D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462D8u;
label_3462d8:
    // 0x3462d8: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3462D8u;
    {
        const bool branch_taken_0x3462d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3462d8) {
            ctx->pc = 0x3462DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3462D8u;
            // 0x3462dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34637Cu;
            goto label_34637c;
        }
    }
    ctx->pc = 0x3462E0u;
    // 0x3462e0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3462e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3462e4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3462E4u;
    SET_GPR_U32(ctx, 31, 0x3462ECu);
    ctx->pc = 0x3462E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462E4u;
    // 0x3462e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3462E4u, 0x3462ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462ECu;
label_3462ec:
    // 0x3462ec: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3462ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3462f0: 0xc088696  jal         func_221A58
    ctx->pc = 0x3462F0u;
    SET_GPR_U32(ctx, 31, 0x3462F8u);
    ctx->pc = 0x3462F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462F0u;
    // 0x3462f4: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x3462F0u, 0x3462F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462F8u;
label_3462f8:
    // 0x3462f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3462f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3462fc: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3462FCu;
    {
        const bool branch_taken_0x3462fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3462fc) {
            ctx->pc = 0x34633Cu;
            goto label_34633c;
        }
    }
    ctx->pc = 0x346304u;
    // 0x346304: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x346304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x346308: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x346308u;
    {
        const bool branch_taken_0x346308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x346308) {
            ctx->pc = 0x34632Cu;
            goto label_34632c;
        }
    }
    ctx->pc = 0x346310u;
    // 0x346310: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x346310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x346314: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346314u;
    {
        const bool branch_taken_0x346314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x346314) {
            ctx->pc = 0x34632Cu;
            goto label_34632c;
        }
    }
    ctx->pc = 0x34631Cu;
    // 0x34631c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34631Cu;
    {
        const bool branch_taken_0x34631c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34631c) {
            ctx->pc = 0x34632Cu;
            goto label_34632c;
        }
    }
    ctx->pc = 0x346324u;
    // 0x346324: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x346324u;
    {
        const bool branch_taken_0x346324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346324u;
        // 0x346328: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346324) {
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x34632Cu;
label_34632c:
    // 0x34632c: 0xc0d1918  jal         func_346460
    ctx->pc = 0x34632Cu;
    SET_GPR_U32(ctx, 31, 0x346334u);
    ctx->pc = 0x346460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346460u, 0x34632Cu, 0x346334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346334u;
label_346334:
    // 0x346334: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x346334u;
    {
        const bool branch_taken_0x346334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346334) {
            ctx->pc = 0x346378u;
            goto label_346378;
        }
    }
    ctx->pc = 0x34633Cu;
label_34633c:
    // 0x34633c: 0xc0d18f4  jal         func_3463D0
    ctx->pc = 0x34633Cu;
    SET_GPR_U32(ctx, 31, 0x346344u);
    ctx->pc = 0x3463D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463D0u, 0x34633Cu, 0x346344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346344u;
label_346344:
    // 0x346344: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x346344u;
    {
        const bool branch_taken_0x346344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346344) {
            ctx->pc = 0x346378u;
            goto label_346378;
        }
    }
    ctx->pc = 0x34634Cu;
label_34634c:
    // 0x34634c: 0xc0885d0  jal         func_221740
    ctx->pc = 0x34634Cu;
    SET_GPR_U32(ctx, 31, 0x346354u);
    ctx->pc = 0x346350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34634Cu;
    // 0x346350: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221740u, 0x34634Cu, 0x346354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346354u;
label_346354:
    // 0x346354: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346354u;
    {
        const bool branch_taken_0x346354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346354) {
            ctx->pc = 0x34636Cu;
            goto label_34636c;
        }
    }
    ctx->pc = 0x34635Cu;
    // 0x34635c: 0xc0d18f4  jal         func_3463D0
    ctx->pc = 0x34635Cu;
    SET_GPR_U32(ctx, 31, 0x346364u);
    ctx->pc = 0x3463D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463D0u, 0x34635Cu, 0x346364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346364u;
label_346364:
    // 0x346364: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x346364u;
    {
        const bool branch_taken_0x346364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346364) {
            ctx->pc = 0x346378u;
            goto label_346378;
        }
    }
    ctx->pc = 0x34636Cu;
label_34636c:
    // 0x34636c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34636cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346370: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346370u;
    SET_GPR_U32(ctx, 31, 0x346378u);
    ctx->pc = 0x346374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346370u;
    // 0x346374: 0x24846390  addiu       $a0, $a0, 0x6390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x346370u, 0x346378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346378u;
label_346378:
    // 0x346378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34637c:
    // 0x34637c: 0x3e00008  jr          $ra
    ctx->pc = 0x34637Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34637Cu;
        // 0x346380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34637Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346384u;
    // 0x346384: 0x0  nop
    ctx->pc = 0x346384u;
    // NOP
    // 0x346388: 0x0  nop
    ctx->pc = 0x346388u;
    // NOP
    // 0x34638c: 0x0  nop
    ctx->pc = 0x34638cu;
    // NOP
    // 0x346390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346394: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34639c: 0xc088696  jal         func_221A58
    ctx->pc = 0x34639Cu;
    SET_GPR_U32(ctx, 31, 0x3463A4u);
    ctx->pc = 0x3463A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34639Cu;
    // 0x3463a0: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x34639Cu, 0x3463A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463A4u;
label_3463a4:
    // 0x3463a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3463a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3463a8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3463A8u;
    {
        const bool branch_taken_0x3463a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3463a8) {
            ctx->pc = 0x3463ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3463A8u;
            // 0x3463ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3463BCu;
            goto label_3463bc;
        }
    }
    ctx->pc = 0x3463B0u;
    // 0x3463b0: 0xc0d18f4  jal         func_3463D0
    ctx->pc = 0x3463B0u;
    SET_GPR_U32(ctx, 31, 0x3463B8u);
    ctx->pc = 0x3463D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463D0u, 0x3463B0u, 0x3463B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463B8u;
label_3463b8:
    // 0x3463b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3463b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3463bc:
    // 0x3463bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3463BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3463C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3463BCu;
        // 0x3463c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3463BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3463C4u;
    // 0x3463c4: 0x0  nop
    ctx->pc = 0x3463c4u;
    // NOP
    // 0x3463c8: 0x0  nop
    ctx->pc = 0x3463c8u;
    // NOP
    // 0x3463cc: 0x0  nop
    ctx->pc = 0x3463ccu;
    // NOP
}

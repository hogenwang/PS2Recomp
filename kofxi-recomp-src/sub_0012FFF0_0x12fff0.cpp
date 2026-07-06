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

// Function: sub_0012FFF0
// Address: 0x12fff0 - 0x130770
void sub_0012FFF0_0x12fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FFF0_0x12fff0");
#endif

    switch (ctx->pc) {
        case 0x130018u: goto label_130018;
        case 0x130020u: goto label_130020;
        case 0x130028u: goto label_130028;
        case 0x130030u: goto label_130030;
        case 0x130038u: goto label_130038;
        case 0x130040u: goto label_130040;
        case 0x130070u: goto label_130070;
        case 0x13007cu: goto label_13007c;
        case 0x13008cu: goto label_13008c;
        case 0x1300acu: goto label_1300ac;
        case 0x1300c0u: goto label_1300c0;
        case 0x1300d0u: goto label_1300d0;
        case 0x130104u: goto label_130104;
        case 0x130114u: goto label_130114;
        case 0x130150u: goto label_130150;
        case 0x130158u: goto label_130158;
        case 0x130160u: goto label_130160;
        case 0x130168u: goto label_130168;
        case 0x1301dcu: goto label_1301dc;
        case 0x130204u: goto label_130204;
        case 0x13020cu: goto label_13020c;
        case 0x130218u: goto label_130218;
        case 0x130224u: goto label_130224;
        case 0x13027cu: goto label_13027c;
        case 0x13029cu: goto label_13029c;
        case 0x1302bcu: goto label_1302bc;
        case 0x1302c4u: goto label_1302c4;
        case 0x1302ccu: goto label_1302cc;
        case 0x1302e4u: goto label_1302e4;
        case 0x1302f8u: goto label_1302f8;
        case 0x130314u: goto label_130314;
        case 0x130328u: goto label_130328;
        case 0x130340u: goto label_130340;
        case 0x13051cu: goto label_13051c;
        case 0x130530u: goto label_130530;
        case 0x130538u: goto label_130538;
        case 0x130548u: goto label_130548;
        case 0x130560u: goto label_130560;
        case 0x130570u: goto label_130570;
        case 0x13059cu: goto label_13059c;
        case 0x1305c8u: goto label_1305c8;
        case 0x1305d8u: goto label_1305d8;
        case 0x1305f4u: goto label_1305f4;
        case 0x13060cu: goto label_13060c;
        case 0x13061cu: goto label_13061c;
        case 0x13062cu: goto label_13062c;
        case 0x13064cu: goto label_13064c;
        case 0x130654u: goto label_130654;
        case 0x130664u: goto label_130664;
        case 0x13067cu: goto label_13067c;
        case 0x13068cu: goto label_13068c;
        case 0x1306b8u: goto label_1306b8;
        case 0x1306e4u: goto label_1306e4;
        case 0x1306f4u: goto label_1306f4;
        case 0x130710u: goto label_130710;
        case 0x130728u: goto label_130728;
        case 0x130740u: goto label_130740;
        case 0x130748u: goto label_130748;
        default: break;
    }

    ctx->pc = 0x12fff0u;

    // 0x12fff0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12fff4: 0x3e00008  jr          $ra
    ctx->pc = 0x12FFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFF4u;
        // 0x12fff8: 0xa0605598  sb          $zero, 0x5598($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21912), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FFFCu;
    // 0x12fffc: 0x0  nop
    ctx->pc = 0x12fffcu;
    // NOP
    // 0x130000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13000c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13000cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130010: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x130010u;
    SET_GPR_U32(ctx, 31, 0x130018u);
    ctx->pc = 0x130014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130010u;
    // 0x130014: 0x24040103  addiu       $a0, $zero, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x130010u, 0x130018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130018u;
label_130018:
    // 0x130018: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x130018u;
    SET_GPR_U32(ctx, 31, 0x130020u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x130018u, 0x130020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130020u;
label_130020:
    // 0x130020: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x130020u;
    SET_GPR_U32(ctx, 31, 0x130028u);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x130020u, 0x130028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130028u;
label_130028:
    // 0x130028: 0xc055630  jal         func_1558C0
    ctx->pc = 0x130028u;
    SET_GPR_U32(ctx, 31, 0x130030u);
    ctx->pc = 0x1558C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558C0u, 0x130028u, 0x130030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130030u;
label_130030:
    // 0x130030: 0xc055684  jal         func_155A10
    ctx->pc = 0x130030u;
    SET_GPR_U32(ctx, 31, 0x130038u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x130030u, 0x130038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130038u;
label_130038:
    // 0x130038: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x130038u;
    SET_GPR_U32(ctx, 31, 0x130040u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x130038u, 0x130040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130040u;
label_130040:
    // 0x130040: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130044: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x130048: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x13004c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x13004cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x130050: 0xa06055c0  sb          $zero, 0x55C0($v1)
    ctx->pc = 0x130050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 0));
    // 0x130054: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x130054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x130058: 0xa04055c8  sb          $zero, 0x55C8($v0)
    ctx->pc = 0x130058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21960), (uint8_t)GPR_U32(ctx, 0));
    // 0x13005c: 0x24a5c460  addiu       $a1, $a1, -0x3BA0
    ctx->pc = 0x13005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952032));
    // 0x130060: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x130060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x130064: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x130064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130068: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x130068u;
    SET_GPR_U32(ctx, 31, 0x130070u);
    ctx->pc = 0x13006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130068u;
    // 0x13006c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x130068u, 0x130070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130070u;
label_130070:
    // 0x130070: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x130070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x130074: 0xc0558e4  jal         func_156390
    ctx->pc = 0x130074u;
    SET_GPR_U32(ctx, 31, 0x13007Cu);
    ctx->pc = 0x130078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130074u;
    // 0x130078: 0x2484c470  addiu       $a0, $a0, -0x3B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156390u, 0x130074u, 0x13007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13007Cu;
label_13007c:
    // 0x13007c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130084: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x130084u;
    SET_GPR_U32(ctx, 31, 0x13008Cu);
    ctx->pc = 0x130088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130084u;
    // 0x130088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x130084u, 0x13008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13008Cu;
label_13008c:
    // 0x13008c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130090: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x130090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130094: 0x9442daa8  lhu         $v0, -0x2558($v0)
    ctx->pc = 0x130094u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957736)));
    // 0x130098: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x130098u;
    {
        const bool branch_taken_0x130098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x130098) {
            ctx->pc = 0x1300B4u;
            goto label_1300b4;
        }
    }
    ctx->pc = 0x1300A0u;
    // 0x1300a0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1300a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1300a4: 0xc0558d0  jal         func_156340
    ctx->pc = 0x1300A4u;
    SET_GPR_U32(ctx, 31, 0x1300ACu);
    ctx->pc = 0x1300A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300A4u;
    // 0x1300a8: 0x24849670  addiu       $a0, $a0, -0x6990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x1300A4u, 0x1300ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300ACu;
label_1300ac:
    // 0x1300ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1300ACu;
    {
        const bool branch_taken_0x1300ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1300ac) {
            ctx->pc = 0x1300C0u;
            goto label_1300c0;
        }
    }
    ctx->pc = 0x1300B4u;
label_1300b4:
    // 0x1300b4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x1300b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x1300b8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x1300B8u;
    SET_GPR_U32(ctx, 31, 0x1300C0u);
    ctx->pc = 0x1300BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300B8u;
    // 0x1300bc: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x1300B8u, 0x1300C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300C0u;
label_1300c0:
    // 0x1300c0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1300c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1300c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300c8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1300C8u;
    SET_GPR_U32(ctx, 31, 0x1300D0u);
    ctx->pc = 0x1300CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300C8u;
    // 0x1300cc: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1300C8u, 0x1300D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300D0u;
label_1300d0:
    // 0x1300d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1300d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1300d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1300d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1300d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1300D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1300DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300D8u;
        // 0x1300dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1300D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1300E0u;
    // 0x1300e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1300e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1300e4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1300e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1300e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1300e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1300ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1300ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1300f0: 0x906355c8  lbu         $v1, 0x55C8($v1)
    ctx->pc = 0x1300f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21960)));
    // 0x1300f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1300F4u;
    {
        const bool branch_taken_0x1300f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300F4u;
        // 0x1300f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300f4) {
            ctx->pc = 0x130114u;
            goto label_130114;
        }
    }
    ctx->pc = 0x1300FCu;
    // 0x1300fc: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x1300FCu;
    SET_GPR_U32(ctx, 31, 0x130104u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x1300FCu, 0x130104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130104u;
label_130104:
    // 0x130104: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13010c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x13010Cu;
    SET_GPR_U32(ctx, 31, 0x130114u);
    ctx->pc = 0x130110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13010Cu;
    // 0x130110: 0x24840130  addiu       $a0, $a0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x13010Cu, 0x130114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130114u;
label_130114:
    // 0x130114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13011c: 0x3e00008  jr          $ra
    ctx->pc = 0x13011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13011Cu;
        // 0x130120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130124u;
    // 0x130124: 0x0  nop
    ctx->pc = 0x130124u;
    // NOP
    // 0x130128: 0x0  nop
    ctx->pc = 0x130128u;
    // NOP
    // 0x13012c: 0x0  nop
    ctx->pc = 0x13012cu;
    // NOP
    // 0x130130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130134: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x130134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x130138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13013c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130148: 0xc055650  jal         func_155940
    ctx->pc = 0x130148u;
    SET_GPR_U32(ctx, 31, 0x130150u);
    ctx->pc = 0x13014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130148u;
    // 0x13014c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155940u, 0x130148u, 0x130150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130150u;
label_130150:
    // 0x130150: 0xc04c1dc  jal         func_130770
    ctx->pc = 0x130150u;
    SET_GPR_U32(ctx, 31, 0x130158u);
    ctx->pc = 0x130770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130770u, 0x130150u, 0x130158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130158u;
label_130158:
    // 0x130158: 0xc055234  jal         func_1548D0
    ctx->pc = 0x130158u;
    SET_GPR_U32(ctx, 31, 0x130160u);
    ctx->pc = 0x1548D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1548D0u, 0x130158u, 0x130160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130160u;
label_130160:
    // 0x130160: 0xc055770  jal         func_155DC0
    ctx->pc = 0x130160u;
    SET_GPR_U32(ctx, 31, 0x130168u);
    ctx->pc = 0x130164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130160u;
    // 0x130164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x130160u, 0x130168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130168u;
label_130168:
    // 0x130168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13016c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13016cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130170: 0x3e00008  jr          $ra
    ctx->pc = 0x130170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130170u;
        // 0x130174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130178u;
    // 0x130178: 0x0  nop
    ctx->pc = 0x130178u;
    // NOP
    // 0x13017c: 0x0  nop
    ctx->pc = 0x13017cu;
    // NOP
    // 0x130180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x130180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130184: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x130188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13018c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13018cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130198: 0x906355c0  lbu         $v1, 0x55C0($v1)
    ctx->pc = 0x130198u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21952)));
    // 0x13019c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x13019cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1301a0: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x1301A0u;
    {
        const bool branch_taken_0x1301a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301A0u;
        // 0x1301a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301a0) {
            ctx->pc = 0x130340u;
            goto label_130340;
        }
    }
    ctx->pc = 0x1301A8u;
    // 0x1301a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1301a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1301ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1301acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1301b0: 0x2484c480  addiu       $a0, $a0, -0x3B80
    ctx->pc = 0x1301b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x1301b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1301b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1301b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1301bc: 0x600008  jr          $v1
    ctx->pc = 0x1301BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1301C4u: goto label_1301c4;
            case 0x1301F0u: goto label_1301f0;
            case 0x130238u: goto label_130238;
            case 0x130270u: goto label_130270;
            case 0x130294u: goto label_130294;
            case 0x1302D4u: goto label_1302d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1301BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1301C4u;
label_1301c4:
    // 0x1301c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1301c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1301c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1301c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1301cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1301ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1301d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1301d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1301d4: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x1301D4u;
    SET_GPR_U32(ctx, 31, 0x1301DCu);
    ctx->pc = 0x1301D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301D4u;
    // 0x1301d8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C00u, 0x1301D4u, 0x1301DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301DCu;
label_1301dc:
    // 0x1301dc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1301dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1301e0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1301e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1301e4: 0x906355c0  lbu         $v1, 0x55C0($v1)
    ctx->pc = 0x1301e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21952)));
    // 0x1301e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1301e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1301ec: 0xa04355c0  sb          $v1, 0x55C0($v0)
    ctx->pc = 0x1301ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 3));
label_1301f0:
    // 0x1301f0: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x1301f4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1301f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1301f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1301f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301fc: 0x2631c430  addiu       $s1, $s1, -0x3BD0
    ctx->pc = 0x1301fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951984));
    // 0x130200: 0x261055e0  addiu       $s0, $s0, 0x55E0
    ctx->pc = 0x130200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21984));
label_130204:
    // 0x130204: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x130204u;
    SET_GPR_U32(ctx, 31, 0x13020Cu);
    ctx->pc = 0x130208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130204u;
    // 0x130208: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x130204u, 0x13020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13020Cu;
label_13020c:
    // 0x13020c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x13020cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x130210: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x130210u;
    SET_GPR_U32(ctx, 31, 0x130218u);
    ctx->pc = 0x130214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130210u;
    // 0x130214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x130210u, 0x130218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130218u;
label_130218:
    // 0x130218: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x130218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13021c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x13021Cu;
    SET_GPR_U32(ctx, 31, 0x130224u);
    ctx->pc = 0x130220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13021Cu;
    // 0x130220: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x13021Cu, 0x130224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130224u;
label_130224:
    // 0x130224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x130224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x130228: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x130228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13022c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x13022cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x130230: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x130230u;
    {
        const bool branch_taken_0x130230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130230u;
        // 0x130234: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130230) {
            ctx->pc = 0x130204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130204;
        }
    }
    ctx->pc = 0x130238u;
label_130238:
    // 0x130238: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13023c: 0x8c6855e0  lw          $t0, 0x55E0($v1)
    ctx->pc = 0x13023cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21984)));
    // 0x130240: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x130240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x130244: 0x908455c0  lbu         $a0, 0x55C0($a0)
    ctx->pc = 0x130244u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21952)));
    // 0x130248: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x130248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x13024c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x13024cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x130250: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130254: 0xacc855f8  sw          $t0, 0x55F8($a2)
    ctx->pc = 0x130254u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22008), GPR_U32(ctx, 8));
    // 0x130258: 0x8c6755e4  lw          $a3, 0x55E4($v1)
    ctx->pc = 0x130258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21988)));
    // 0x13025c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x130260: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130264: 0xaca75604  sw          $a3, 0x5604($a1)
    ctx->pc = 0x130264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22020), GPR_U32(ctx, 7));
    // 0x130268: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x130268u;
    {
        const bool branch_taken_0x130268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130268u;
        // 0x13026c: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130268) {
            ctx->pc = 0x130340u;
            goto label_130340;
        }
    }
    ctx->pc = 0x130270u;
label_130270:
    // 0x130270: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x130270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x130274: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x130274u;
    SET_GPR_U32(ctx, 31, 0x13027Cu);
    ctx->pc = 0x130278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130274u;
    // 0x130278: 0x2484c428  addiu       $a0, $a0, -0x3BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x130274u, 0x13027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13027Cu;
label_13027c:
    // 0x13027c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x13027cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x130280: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130284: 0x908455c0  lbu         $a0, 0x55C0($a0)
    ctx->pc = 0x130284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21952)));
    // 0x130288: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x130288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13028c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13028Cu;
    {
        const bool branch_taken_0x13028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13028Cu;
        // 0x130290: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13028c) {
            ctx->pc = 0x130340u;
            goto label_130340;
        }
    }
    ctx->pc = 0x130294u;
label_130294:
    // 0x130294: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x130294u;
    SET_GPR_U32(ctx, 31, 0x13029Cu);
    ctx->pc = 0x3036A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036A0u, 0x130294u, 0x13029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13029Cu;
label_13029c:
    // 0x13029c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x13029Cu;
    {
        const bool branch_taken_0x13029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13029c) {
            ctx->pc = 0x1302A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13029Cu;
            // 0x1302a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130344u;
            goto label_130344;
        }
    }
    ctx->pc = 0x1302A4u;
    // 0x1302a4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1302a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1302a8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1302a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1302ac: 0x906355c0  lbu         $v1, 0x55C0($v1)
    ctx->pc = 0x1302acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21952)));
    // 0x1302b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1302b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1302b4: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x1302B4u;
    SET_GPR_U32(ctx, 31, 0x1302BCu);
    ctx->pc = 0x1302B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302B4u;
    // 0x1302b8: 0xa04355c0  sb          $v1, 0x55C0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x1302B4u, 0x1302BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302BCu;
label_1302bc:
    // 0x1302bc: 0xc063d18  jal         func_18F460
    ctx->pc = 0x1302BCu;
    SET_GPR_U32(ctx, 31, 0x1302C4u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x1302BCu, 0x1302C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302C4u;
label_1302c4:
    // 0x1302c4: 0xc0c880c  jal         func_322030
    ctx->pc = 0x1302C4u;
    SET_GPR_U32(ctx, 31, 0x1302CCu);
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x1302C4u, 0x1302CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302CCu;
label_1302cc:
    // 0x1302cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1302CCu;
    {
        const bool branch_taken_0x1302cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302cc) {
            ctx->pc = 0x130340u;
            goto label_130340;
        }
    }
    ctx->pc = 0x1302D4u;
label_1302d4:
    // 0x1302d4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1302d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1302d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1302d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1302dc: 0xc063d2c  jal         func_18F4B0
    ctx->pc = 0x1302DCu;
    SET_GPR_U32(ctx, 31, 0x1302E4u);
    ctx->pc = 0x1302E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302DCu;
    // 0x1302e0: 0x2484c438  addiu       $a0, $a0, -0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4B0u, 0x1302DCu, 0x1302E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302E4u;
label_1302e4:
    // 0x1302e4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1302E4u;
    {
        const bool branch_taken_0x1302e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302e4) {
            ctx->pc = 0x130340u;
            goto label_130340;
        }
    }
    ctx->pc = 0x1302ECu;
    // 0x1302ec: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x1302ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x1302f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1302f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302f4: 0x2652bb70  addiu       $s2, $s2, -0x4490
    ctx->pc = 0x1302f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949744));
label_1302f8:
    // 0x1302f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1302f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1302fc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1302fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x130300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130304: 0x24c6c428  addiu       $a2, $a2, -0x3BD8
    ctx->pc = 0x130304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951976));
    // 0x130308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x130308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13030c: 0xc0c8978  jal         func_3225E0
    ctx->pc = 0x13030Cu;
    SET_GPR_U32(ctx, 31, 0x130314u);
    ctx->pc = 0x130310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13030Cu;
    // 0x130310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3225E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3225E0u, 0x13030Cu, 0x130314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130314u;
label_130314:
    // 0x130314: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x130314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x130318: 0x1220fff7  beqz        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x130318u;
    {
        const bool branch_taken_0x130318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130318u;
        // 0x13031c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130318) {
            ctx->pc = 0x1302F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1302f8;
        }
    }
    ctx->pc = 0x130320u;
    // 0x130320: 0xc063d18  jal         func_18F460
    ctx->pc = 0x130320u;
    SET_GPR_U32(ctx, 31, 0x130328u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x130320u, 0x130328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130328u;
label_130328:
    // 0x130328: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13032c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130334: 0xa04055c0  sb          $zero, 0x55C0($v0)
    ctx->pc = 0x130334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 0));
    // 0x130338: 0xc055768  jal         func_155DA0
    ctx->pc = 0x130338u;
    SET_GPR_U32(ctx, 31, 0x130340u);
    ctx->pc = 0x13033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130338u;
    // 0x13033c: 0x24840360  addiu       $a0, $a0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x130338u, 0x130340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130340u;
label_130340:
    // 0x130340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x130340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_130344:
    // 0x130344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13034c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13034cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130350: 0x3e00008  jr          $ra
    ctx->pc = 0x130350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130350u;
        // 0x130354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130358u;
    // 0x130358: 0x0  nop
    ctx->pc = 0x130358u;
    // NOP
    // 0x13035c: 0x0  nop
    ctx->pc = 0x13035cu;
    // NOP
    // 0x130360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x130360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x130364: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13036c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x130370: 0xc460c440  lwc1        $f0, -0x3BC0($v1)
    ctx->pc = 0x130370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130374: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130378: 0xc462c444  lwc1        $f2, -0x3BBC($v1)
    ctx->pc = 0x130378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13037c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x13037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x130380: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130384: 0xc461c448  lwc1        $f1, -0x3BB8($v1)
    ctx->pc = 0x130384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130388: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x130388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x13038c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13038cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130390: 0xc460c44c  lwc1        $f0, -0x3BB4($v1)
    ctx->pc = 0x130390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130394: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x130394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x130398: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x13039c: 0xc461c450  lwc1        $f1, -0x3BB0($v1)
    ctx->pc = 0x13039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1303a0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1303a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1303a4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1303a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1303a8: 0xc460c454  lwc1        $f0, -0x3BAC($v1)
    ctx->pc = 0x1303a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1303ac: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1303acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1303b0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1303b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1303b4: 0xc461c458  lwc1        $f1, -0x3BA8($v1)
    ctx->pc = 0x1303b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1303b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1303b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1303bc: 0xc480c45c  lwc1        $f0, -0x3BA4($a0)
    ctx->pc = 0x1303bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1303c0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1303c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1303c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1303c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1303c8: 0xc461c460  lwc1        $f1, -0x3BA0($v1)
    ctx->pc = 0x1303c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1303cc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1303ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1303d0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1303d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1303d4: 0xc480c464  lwc1        $f0, -0x3B9C($a0)
    ctx->pc = 0x1303d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1303d8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1303d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1303dc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1303dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1303e0: 0xc461c468  lwc1        $f1, -0x3B98($v1)
    ctx->pc = 0x1303e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1303e4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1303e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1303e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1303e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1303ec: 0xc480c470  lwc1        $f0, -0x3B90($a0)
    ctx->pc = 0x1303ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1303f0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1303f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1303f4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1303f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1303f8: 0xc461c474  lwc1        $f1, -0x3B8C($v1)
    ctx->pc = 0x1303f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1303fc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x130400: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x130400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x130404: 0xc480c478  lwc1        $f0, -0x3B88($a0)
    ctx->pc = 0x130404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130408: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x130408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13040c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13040cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130410: 0xc461c47c  lwc1        $f1, -0x3B84($v1)
    ctx->pc = 0x130410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130414: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x130414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x130418: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x130418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x13041c: 0xc480c480  lwc1        $f0, -0x3B80($a0)
    ctx->pc = 0x13041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130420: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x130420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x130424: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130428: 0xc461c484  lwc1        $f1, -0x3B7C($v1)
    ctx->pc = 0x130428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13042c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x13042cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x130430: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x130430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x130434: 0xc480c488  lwc1        $f0, -0x3B78($a0)
    ctx->pc = 0x130434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130438: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x130438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x13043c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130440: 0xc461c48c  lwc1        $f1, -0x3B74($v1)
    ctx->pc = 0x130440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130444: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x130444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x130448: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x130448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x13044c: 0xc480c490  lwc1        $f0, -0x3B70($a0)
    ctx->pc = 0x13044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130450: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x130450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x130454: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130458: 0xc461c494  lwc1        $f1, -0x3B6C($v1)
    ctx->pc = 0x130458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13045c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x13045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x130460: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x130460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x130464: 0xc480c498  lwc1        $f0, -0x3B68($a0)
    ctx->pc = 0x130464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130468: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13046c: 0x906555c0  lbu         $a1, 0x55C0($v1)
    ctx->pc = 0x13046cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21952)));
    // 0x130470: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x130470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x130474: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x130474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x130478: 0x10a400b6  beq         $a1, $a0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x130478u;
    {
        const bool branch_taken_0x130478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x13047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130478u;
        // 0x13047c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130478) {
            ctx->pc = 0x130754u;
            goto label_130754;
        }
    }
    ctx->pc = 0x130480u;
    // 0x130480: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x130480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x130484: 0x50a300a6  beql        $a1, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x130484u;
    {
        const bool branch_taken_0x130484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x130484) {
            ctx->pc = 0x130488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130484u;
            // 0x130488: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130720u;
            goto label_130720;
        }
    }
    ctx->pc = 0x13048Cu;
    // 0x13048c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x13048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x130490: 0x50a3009c  beql        $a1, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x130490u;
    {
        const bool branch_taken_0x130490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x130490) {
            ctx->pc = 0x130494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130490u;
            // 0x130494: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130704u;
            goto label_130704;
        }
    }
    ctx->pc = 0x130498u;
    // 0x130498: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x130498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x13049c: 0x10a3008a  beq         $a1, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x13049Cu;
    {
        const bool branch_taken_0x13049c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13049c) {
            ctx->pc = 0x1306C8u;
            goto label_1306c8;
        }
    }
    ctx->pc = 0x1304A4u;
    // 0x1304a4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1304a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1304a8: 0x10a3007b  beq         $a1, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1304A8u;
    {
        const bool branch_taken_0x1304a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304a8) {
            ctx->pc = 0x130698u;
            goto label_130698;
        }
    }
    ctx->pc = 0x1304B0u;
    // 0x1304b0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1304b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1304b4: 0x50a3006f  beql        $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1304B4u;
    {
        const bool branch_taken_0x1304b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304b4) {
            ctx->pc = 0x1304B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1304B4u;
            // 0x1304b8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130674u;
            goto label_130674;
        }
    }
    ctx->pc = 0x1304BCu;
    // 0x1304bc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1304bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1304c0: 0x50a3005e  beql        $a1, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1304C0u;
    {
        const bool branch_taken_0x1304c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304c0) {
            ctx->pc = 0x1304C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1304C0u;
            // 0x1304c4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13063Cu;
            goto label_13063c;
        }
    }
    ctx->pc = 0x1304C8u;
    // 0x1304c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1304c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1304cc: 0x50a3004d  beql        $a1, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1304CCu;
    {
        const bool branch_taken_0x1304cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304cc) {
            ctx->pc = 0x1304D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1304CCu;
            // 0x1304d0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130604u;
            goto label_130604;
        }
    }
    ctx->pc = 0x1304D4u;
    // 0x1304d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1304d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1304d8: 0x50a30043  beql        $a1, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1304D8u;
    {
        const bool branch_taken_0x1304d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304d8) {
            ctx->pc = 0x1304DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1304D8u;
            // 0x1304dc: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305E8u;
            goto label_1305e8;
        }
    }
    ctx->pc = 0x1304E0u;
    // 0x1304e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1304e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1304e4: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1304E4u;
    {
        const bool branch_taken_0x1304e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304e4) {
            ctx->pc = 0x1305ACu;
            goto label_1305ac;
        }
    }
    ctx->pc = 0x1304ECu;
    // 0x1304ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1304ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1304f0: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1304F0u;
    {
        const bool branch_taken_0x1304f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304f0) {
            ctx->pc = 0x13057Cu;
            goto label_13057c;
        }
    }
    ctx->pc = 0x1304F8u;
    // 0x1304f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1304f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1304fc: 0x50a30016  beql        $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1304FCu;
    {
        const bool branch_taken_0x1304fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1304fc) {
            ctx->pc = 0x130500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1304FCu;
            // 0x130500: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130558u;
            goto label_130558;
        }
    }
    ctx->pc = 0x130504u;
    // 0x130504: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130504u;
    {
        const bool branch_taken_0x130504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130504) {
            ctx->pc = 0x130514u;
            goto label_130514;
        }
    }
    ctx->pc = 0x13050Cu;
    // 0x13050c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x13050Cu;
    {
        const bool branch_taken_0x13050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13050Cu;
        // 0x130510: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13050c) {
            ctx->pc = 0x130764u;
            goto label_130764;
        }
    }
    ctx->pc = 0x130514u;
label_130514:
    // 0x130514: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x130514u;
    SET_GPR_U32(ctx, 31, 0x13051Cu);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x130514u, 0x13051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13051Cu;
label_13051c:
    // 0x13051c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x13051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x130520: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x130520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x130524: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x130524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130528: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x130528u;
    SET_GPR_U32(ctx, 31, 0x130530u);
    ctx->pc = 0x13052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130528u;
    // 0x13052c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x130528u, 0x130530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130530u;
label_130530:
    // 0x130530: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x130530u;
    SET_GPR_U32(ctx, 31, 0x130538u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x130530u, 0x130538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130538u;
label_130538:
    // 0x130538: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x130538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13053c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130540: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x130540u;
    SET_GPR_U32(ctx, 31, 0x130548u);
    ctx->pc = 0x130544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130540u;
    // 0x130544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x130540u, 0x130548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130548u;
label_130548:
    // 0x130548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13054c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130550: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130550u;
        // 0x130554: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130550) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130558u;
label_130558:
    // 0x130558: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x130558u;
    SET_GPR_U32(ctx, 31, 0x130560u);
    ctx->pc = 0x13055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130558u;
    // 0x13055c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x130558u, 0x130560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130560u;
label_130560:
    // 0x130560: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x130560u;
    {
        const bool branch_taken_0x130560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130560) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130568u;
    // 0x130568: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x130568u;
    SET_GPR_U32(ctx, 31, 0x130570u);
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x130568u, 0x130570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130570u;
label_130570:
    // 0x130570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130574: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x130578: 0xa04355c0  sb          $v1, 0x55C0($v0)
    ctx->pc = 0x130578u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 3));
label_13057c:
    // 0x13057c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x130580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130584: 0x804255d8  lb          $v0, 0x55D8($v0)
    ctx->pc = 0x130584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21976)));
    // 0x130588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13058c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x130590: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x130590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x130594: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x130594u;
    SET_GPR_U32(ctx, 31, 0x13059Cu);
    ctx->pc = 0x130598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130594u;
    // 0x130598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x130594u, 0x13059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13059Cu;
label_13059c:
    // 0x13059c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1305a0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1305a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1305a4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1305A4u;
    {
        const bool branch_taken_0x1305a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1305A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305A4u;
        // 0x1305a8: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305a4) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x1305ACu;
label_1305ac:
    // 0x1305ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1305acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1305b0: 0x804255d8  lb          $v0, 0x55D8($v0)
    ctx->pc = 0x1305b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21976)));
    // 0x1305b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1305b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1305b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1305b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1305bc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1305bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1305c0: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1305C0u;
    SET_GPR_U32(ctx, 31, 0x1305C8u);
    ctx->pc = 0x1305C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305C0u;
    // 0x1305c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x1305C0u, 0x1305C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305C8u;
label_1305c8:
    // 0x1305c8: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1305C8u;
    {
        const bool branch_taken_0x1305c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305c8) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x1305D0u;
    // 0x1305d0: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x1305D0u;
    SET_GPR_U32(ctx, 31, 0x1305D8u);
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x1305D0u, 0x1305D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305D8u;
label_1305d8:
    // 0x1305d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1305d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1305dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1305dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1305e0: 0xa04355c0  sb          $v1, 0x55C0($v0)
    ctx->pc = 0x1305e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 3));
    // 0x1305e4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1305e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1305e8:
    // 0x1305e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1305e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1305ec: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1305ECu;
    SET_GPR_U32(ctx, 31, 0x1305F4u);
    ctx->pc = 0x1305F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305ECu;
    // 0x1305f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1305ECu, 0x1305F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305F4u;
label_1305f4:
    // 0x1305f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1305f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1305f8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1305fc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1305FCu;
    {
        const bool branch_taken_0x1305fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305FCu;
        // 0x130600: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305fc) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130604u;
label_130604:
    // 0x130604: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x130604u;
    SET_GPR_U32(ctx, 31, 0x13060Cu);
    ctx->pc = 0x130608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130604u;
    // 0x130608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x130604u, 0x13060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13060Cu;
label_13060c:
    // 0x13060c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x13060Cu;
    {
        const bool branch_taken_0x13060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13060c) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130614u;
    // 0x130614: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x130614u;
    SET_GPR_U32(ctx, 31, 0x13061Cu);
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x130614u, 0x13061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13061Cu;
label_13061c:
    // 0x13061c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130624: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x130624u;
    SET_GPR_U32(ctx, 31, 0x13062Cu);
    ctx->pc = 0x130628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130624u;
    // 0x130628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x130624u, 0x13062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13062Cu;
label_13062c:
    // 0x13062c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x130630: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x130634: 0xa04355c0  sb          $v1, 0x55C0($v0)
    ctx->pc = 0x130634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 3));
    // 0x130638: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x130638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_13063c:
    // 0x13063c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x13063cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x130640: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x130640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130644: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x130644u;
    SET_GPR_U32(ctx, 31, 0x13064Cu);
    ctx->pc = 0x130648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130644u;
    // 0x130648: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x130644u, 0x13064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13064Cu;
label_13064c:
    // 0x13064c: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x13064Cu;
    SET_GPR_U32(ctx, 31, 0x130654u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x13064Cu, 0x130654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130654u;
label_130654:
    // 0x130654: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x130654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x130658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13065c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13065Cu;
    SET_GPR_U32(ctx, 31, 0x130664u);
    ctx->pc = 0x130660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13065Cu;
    // 0x130660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x13065Cu, 0x130664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130664u;
label_130664:
    // 0x130664: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x130664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x130668: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13066c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x13066Cu;
    {
        const bool branch_taken_0x13066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13066Cu;
        // 0x130670: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13066c) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130674u;
label_130674:
    // 0x130674: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x130674u;
    SET_GPR_U32(ctx, 31, 0x13067Cu);
    ctx->pc = 0x130678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130674u;
    // 0x130678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x130674u, 0x13067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13067Cu;
label_13067c:
    // 0x13067c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13067Cu;
    {
        const bool branch_taken_0x13067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13067c) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130684u;
    // 0x130684: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x130684u;
    SET_GPR_U32(ctx, 31, 0x13068Cu);
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x130684u, 0x13068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13068Cu;
label_13068c:
    // 0x13068c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x13068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x130690: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x130694: 0xa04355c0  sb          $v1, 0x55C0($v0)
    ctx->pc = 0x130694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 3));
label_130698:
    // 0x130698: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13069c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1306a0: 0x804255d0  lb          $v0, 0x55D0($v0)
    ctx->pc = 0x1306a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21968)));
    // 0x1306a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1306a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1306a8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1306a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1306ac: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1306acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1306b0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1306B0u;
    SET_GPR_U32(ctx, 31, 0x1306B8u);
    ctx->pc = 0x1306B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306B0u;
    // 0x1306b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1306B0u, 0x1306B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306B8u;
label_1306b8:
    // 0x1306b8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1306bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1306bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1306c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1306C0u;
    {
        const bool branch_taken_0x1306c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306C0u;
        // 0x1306c4: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306c0) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x1306C8u;
label_1306c8:
    // 0x1306c8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1306cc: 0x804255d0  lb          $v0, 0x55D0($v0)
    ctx->pc = 0x1306ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21968)));
    // 0x1306d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1306d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1306d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1306d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1306d8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1306d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1306dc: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1306DCu;
    SET_GPR_U32(ctx, 31, 0x1306E4u);
    ctx->pc = 0x1306E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306DCu;
    // 0x1306e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x1306DCu, 0x1306E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306E4u;
label_1306e4:
    // 0x1306e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1306E4u;
    {
        const bool branch_taken_0x1306e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1306e4) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x1306ECu;
    // 0x1306ec: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x1306ECu;
    SET_GPR_U32(ctx, 31, 0x1306F4u);
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x1306ECu, 0x1306F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306F4u;
label_1306f4:
    // 0x1306f4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1306f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1306f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1306f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1306fc: 0xa04355c0  sb          $v1, 0x55C0($v0)
    ctx->pc = 0x1306fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21952), (uint8_t)GPR_U32(ctx, 3));
    // 0x130700: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x130700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_130704:
    // 0x130704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x130704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130708: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x130708u;
    SET_GPR_U32(ctx, 31, 0x130710u);
    ctx->pc = 0x13070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130708u;
    // 0x13070c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x130708u, 0x130710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130710u;
label_130710:
    // 0x130710: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x130710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x130714: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130718: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x130718u;
    {
        const bool branch_taken_0x130718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130718u;
        // 0x13071c: 0xa06455c0  sb          $a0, 0x55C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130718) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130720u;
label_130720:
    // 0x130720: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x130720u;
    SET_GPR_U32(ctx, 31, 0x130728u);
    ctx->pc = 0x130724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130720u;
    // 0x130724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x130720u, 0x130728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130728u;
label_130728:
    // 0x130728: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x130728u;
    {
        const bool branch_taken_0x130728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130728) {
            ctx->pc = 0x130760u;
            goto label_130760;
        }
    }
    ctx->pc = 0x130730u;
    // 0x130730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130738: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x130738u;
    SET_GPR_U32(ctx, 31, 0x130740u);
    ctx->pc = 0x13073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130738u;
    // 0x13073c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x130738u, 0x130740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130740u;
label_130740:
    // 0x130740: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x130740u;
    SET_GPR_U32(ctx, 31, 0x130748u);
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x130740u, 0x130748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130748u;
label_130748:
    // 0x130748: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x130748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13074c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13074cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130750: 0xa06455c0  sb          $a0, 0x55C0($v1)
    ctx->pc = 0x130750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21952), (uint8_t)GPR_U32(ctx, 4));
label_130754:
    // 0x130754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130758: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13075c: 0xa06455c8  sb          $a0, 0x55C8($v1)
    ctx->pc = 0x13075cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21960), (uint8_t)GPR_U32(ctx, 4));
label_130760:
    // 0x130760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130764:
    // 0x130764: 0x3e00008  jr          $ra
    ctx->pc = 0x130764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13076Cu;
    // 0x13076c: 0x0  nop
    ctx->pc = 0x13076cu;
    // NOP
}

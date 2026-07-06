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

// Function: sub_0025EFC8
// Address: 0x25efc8 - 0x25f158
void sub_0025EFC8_0x25efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EFC8_0x25efc8");
#endif

    switch (ctx->pc) {
        case 0x25effcu: goto label_25effc;
        case 0x25f010u: goto label_25f010;
        case 0x25f02cu: goto label_25f02c;
        case 0x25f050u: goto label_25f050;
        case 0x25f090u: goto label_25f090;
        case 0x25f0b8u: goto label_25f0b8;
        case 0x25f0e0u: goto label_25f0e0;
        case 0x25f10cu: goto label_25f10c;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f124u: goto label_25f124;
        case 0x25f130u: goto label_25f130;
        default: break;
    }

    ctx->pc = 0x25efc8u;

    // 0x25efc8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x25efcc: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x25efccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x25efd0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x25efd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x25efd4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25efd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25efd8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x25efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x25efdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25efdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25efe0: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x25efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x25efe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25efe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25efe8: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x25efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x25efec: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x25efecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x25eff0: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x25eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x25eff4: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25EFF4u;
    SET_GPR_U32(ctx, 31, 0x25EFFCu);
    ctx->pc = 0x25EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFF4u;
    // 0x25eff8: 0xffb10090  sd          $s1, 0x90($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25EFF4u, 0x25EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFFCu;
label_25effc:
    // 0x25effc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25effcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f000: 0x12a0004b  beqz        $s5, . + 4 + (0x4B << 2)
    ctx->pc = 0x25F000u;
    {
        const bool branch_taken_0x25f000 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F000u;
        // 0x25f004: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f000) {
            ctx->pc = 0x25F130u;
            goto label_25f130;
        }
    }
    ctx->pc = 0x25F008u;
    // 0x25f008: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25F008u;
    SET_GPR_U32(ctx, 31, 0x25F010u);
    ctx->pc = 0x25F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F008u;
    // 0x25f00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25F008u, 0x25F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F010u;
label_25f010:
    // 0x25f010: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25f010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f014: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F014u;
    {
        const bool branch_taken_0x25f014 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F014u;
        // 0x25f018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f014) {
            ctx->pc = 0x25F024u;
            goto label_25f024;
        }
    }
    ctx->pc = 0x25F01Cu;
    // 0x25f01c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x25F01Cu;
    {
        const bool branch_taken_0x25f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F01Cu;
        // 0x25f020: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f01c) {
            ctx->pc = 0x25F11Cu;
            goto label_25f11c;
        }
    }
    ctx->pc = 0x25F024u;
label_25f024:
    // 0x25f024: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25F024u;
    SET_GPR_U32(ctx, 31, 0x25F02Cu);
    ctx->pc = 0x25F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F024u;
    // 0x25f028: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25F024u, 0x25F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F02Cu;
label_25f02c:
    // 0x25f02c: 0x12143a  dsrl        $v0, $s2, 16
    ctx->pc = 0x25f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 16);
    // 0x25f030: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x25f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x25f034: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x25f034u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25f038: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x25f038u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x25f03c: 0x2e230081  sltiu       $v1, $s1, 0x81
    ctx->pc = 0x25f03cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x25f040: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F040u;
    {
        const bool branch_taken_0x25f040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F040u;
        // 0x25f044: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f040) {
            ctx->pc = 0x25F064u;
            goto label_25f064;
        }
    }
    ctx->pc = 0x25F048u;
    // 0x25f048: 0xc098552  jal         func_261548
    ctx->pc = 0x25F048u;
    SET_GPR_U32(ctx, 31, 0x25F050u);
    ctx->pc = 0x25F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F048u;
    // 0x25f04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25F048u, 0x25F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F050u;
label_25f050:
    // 0x25f050: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25f050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f054: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F054u;
    {
        const bool branch_taken_0x25f054 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F054u;
        // 0x25f058: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f054) {
            ctx->pc = 0x25F068u;
            goto label_25f068;
        }
    }
    ctx->pc = 0x25F05Cu;
    // 0x25f05c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x25F05Cu;
    {
        const bool branch_taken_0x25f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F05Cu;
        // 0x25f060: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f05c) {
            ctx->pc = 0x25F11Cu;
            goto label_25f11c;
        }
    }
    ctx->pc = 0x25F064u;
label_25f064:
    // 0x25f064: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x25f064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f068:
    // 0x25f068: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x25f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25f06c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25f06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25f070: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x25f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x25f074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F074u;
    {
        const bool branch_taken_0x25f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F074u;
        // 0x25f078: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f074) {
            ctx->pc = 0x25F098u;
            goto label_25f098;
        }
    }
    ctx->pc = 0x25F07Cu;
    // 0x25f07c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25F07Cu;
    {
        const bool branch_taken_0x25f07c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F07Cu;
        // 0x25f080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f07c) {
            ctx->pc = 0x25F0CCu;
            goto label_25f0cc;
        }
    }
    ctx->pc = 0x25F084u;
    // 0x25f084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f088: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25F088u;
    SET_GPR_U32(ctx, 31, 0x25F090u);
    ctx->pc = 0x25F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F088u;
    // 0x25f08c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25F088u, 0x25F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F090u;
label_25f090:
    // 0x25f090: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25F090u;
    {
        const bool branch_taken_0x25f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F090u;
        // 0x25f094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f090) {
            ctx->pc = 0x25F0D4u;
            goto label_25f0d4;
        }
    }
    ctx->pc = 0x25F098u;
label_25f098:
    // 0x25f098: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x25f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x25f09c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F09Cu;
    {
        const bool branch_taken_0x25f09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F09Cu;
        // 0x25f0a0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f09c) {
            ctx->pc = 0x25F0C0u;
            goto label_25f0c0;
        }
    }
    ctx->pc = 0x25F0A4u;
    // 0x25f0a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F0A4u;
    {
        const bool branch_taken_0x25f0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0A4u;
        // 0x25f0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0a4) {
            ctx->pc = 0x25F0C0u;
            goto label_25f0c0;
        }
    }
    ctx->pc = 0x25F0ACu;
    // 0x25f0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0b0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x25F0B0u;
    SET_GPR_U32(ctx, 31, 0x25F0B8u);
    ctx->pc = 0x25F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0B0u;
    // 0x25f0b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x25F0B0u, 0x25F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0B8u;
label_25f0b8:
    // 0x25f0b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F0B8u;
    {
        const bool branch_taken_0x25f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0B8u;
        // 0x25f0bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0b8) {
            ctx->pc = 0x25F0D4u;
            goto label_25f0d4;
        }
    }
    ctx->pc = 0x25F0C0u;
label_25f0c0:
    // 0x25f0c0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x25f0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x25f0c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F0C4u;
    {
        const bool branch_taken_0x25f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0C4u;
        // 0x25f0c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0c4) {
            ctx->pc = 0x25F0D4u;
            goto label_25f0d4;
        }
    }
    ctx->pc = 0x25F0CCu;
label_25f0cc:
    // 0x25f0cc: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x25f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x25f0d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f0d4:
    // 0x25f0d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25f0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0d8: 0xc08c02e  jal         func_2300B8
    ctx->pc = 0x25F0D8u;
    SET_GPR_U32(ctx, 31, 0x25F0E0u);
    ctx->pc = 0x25F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0D8u;
    // 0x25f0dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x25F0D8u, 0x25F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0E0u;
label_25f0e0:
    // 0x25f0e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25f0e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0e4: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F0E4u;
    {
        const bool branch_taken_0x25f0e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0E4u;
        // 0x25f0e8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0e4) {
            ctx->pc = 0x25F10Cu;
            goto label_25f10c;
        }
    }
    ctx->pc = 0x25F0ECu;
    // 0x25f0ec: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x25f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x25f0f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F0F0u;
    {
        const bool branch_taken_0x25f0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f0f0) {
            ctx->pc = 0x25F10Cu;
            goto label_25f10c;
        }
    }
    ctx->pc = 0x25F0F8u;
    // 0x25f0f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F0F8u;
    {
        const bool branch_taken_0x25f0f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0F8u;
        // 0x25f0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0f8) {
            ctx->pc = 0x25F10Cu;
            goto label_25f10c;
        }
    }
    ctx->pc = 0x25F100u;
    // 0x25f100: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25f100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f104: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25F104u;
    SET_GPR_U32(ctx, 31, 0x25F10Cu);
    ctx->pc = 0x25F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F104u;
    // 0x25f108: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25F104u, 0x25F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F10Cu;
label_25f10c:
    // 0x25f10c: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F10Cu;
    {
        const bool branch_taken_0x25f10c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f10c) {
            ctx->pc = 0x25F11Cu;
            goto label_25f11c;
        }
    }
    ctx->pc = 0x25F114u;
    // 0x25f114: 0xc098560  jal         func_261580
    ctx->pc = 0x25F114u;
    SET_GPR_U32(ctx, 31, 0x25F11Cu);
    ctx->pc = 0x25F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F114u;
    // 0x25f118: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25F114u, 0x25F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F11Cu;
label_25f11c:
    // 0x25f11c: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25F11Cu;
    SET_GPR_U32(ctx, 31, 0x25F124u);
    ctx->pc = 0x25F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F11Cu;
    // 0x25f120: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25F11Cu, 0x25F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F124u;
label_25f124:
    // 0x25f124: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f128: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25F128u;
    SET_GPR_U32(ctx, 31, 0x25F130u);
    ctx->pc = 0x25F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F128u;
    // 0x25f12c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25F128u, 0x25F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F130u;
label_25f130:
    // 0x25f130: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x25f130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25f134: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x25f134u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25f138: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x25f138u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25f13c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x25f13cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25f140: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x25f140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25f144: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x25f144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f148: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x25f148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f14c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x25f14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f150: 0x3e00008  jr          $ra
    ctx->pc = 0x25F150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F150u;
        // 0x25f154: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F158u;
}

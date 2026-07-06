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

// Function: sub_00155DD0
// Address: 0x155dd0 - 0x155fe0
void sub_00155DD0_0x155dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155DD0_0x155dd0");
#endif

    switch (ctx->pc) {
        case 0x155dd0u: goto label_155dd0;
        case 0x155dd4u: goto label_155dd4;
        case 0x155dd8u: goto label_155dd8;
        case 0x155ddcu: goto label_155ddc;
        case 0x155de0u: goto label_155de0;
        case 0x155de4u: goto label_155de4;
        case 0x155de8u: goto label_155de8;
        case 0x155decu: goto label_155dec;
        case 0x155df0u: goto label_155df0;
        case 0x155df4u: goto label_155df4;
        case 0x155df8u: goto label_155df8;
        case 0x155dfcu: goto label_155dfc;
        case 0x155e00u: goto label_155e00;
        case 0x155e04u: goto label_155e04;
        case 0x155e08u: goto label_155e08;
        case 0x155e0cu: goto label_155e0c;
        case 0x155e10u: goto label_155e10;
        case 0x155e14u: goto label_155e14;
        case 0x155e18u: goto label_155e18;
        case 0x155e1cu: goto label_155e1c;
        case 0x155e20u: goto label_155e20;
        case 0x155e24u: goto label_155e24;
        case 0x155e28u: goto label_155e28;
        case 0x155e2cu: goto label_155e2c;
        case 0x155e30u: goto label_155e30;
        case 0x155e34u: goto label_155e34;
        case 0x155e38u: goto label_155e38;
        case 0x155e3cu: goto label_155e3c;
        case 0x155e40u: goto label_155e40;
        case 0x155e44u: goto label_155e44;
        case 0x155e48u: goto label_155e48;
        case 0x155e4cu: goto label_155e4c;
        case 0x155e50u: goto label_155e50;
        case 0x155e54u: goto label_155e54;
        case 0x155e58u: goto label_155e58;
        case 0x155e5cu: goto label_155e5c;
        case 0x155e60u: goto label_155e60;
        case 0x155e64u: goto label_155e64;
        case 0x155e68u: goto label_155e68;
        case 0x155e6cu: goto label_155e6c;
        case 0x155e70u: goto label_155e70;
        case 0x155e74u: goto label_155e74;
        case 0x155e78u: goto label_155e78;
        case 0x155e7cu: goto label_155e7c;
        case 0x155e80u: goto label_155e80;
        case 0x155e84u: goto label_155e84;
        case 0x155e88u: goto label_155e88;
        case 0x155e8cu: goto label_155e8c;
        case 0x155e90u: goto label_155e90;
        case 0x155e94u: goto label_155e94;
        case 0x155e98u: goto label_155e98;
        case 0x155e9cu: goto label_155e9c;
        case 0x155ea0u: goto label_155ea0;
        case 0x155ea4u: goto label_155ea4;
        case 0x155ea8u: goto label_155ea8;
        case 0x155eacu: goto label_155eac;
        case 0x155eb0u: goto label_155eb0;
        case 0x155eb4u: goto label_155eb4;
        case 0x155eb8u: goto label_155eb8;
        case 0x155ebcu: goto label_155ebc;
        case 0x155ec0u: goto label_155ec0;
        case 0x155ec4u: goto label_155ec4;
        case 0x155ec8u: goto label_155ec8;
        case 0x155eccu: goto label_155ecc;
        case 0x155ed0u: goto label_155ed0;
        case 0x155ed4u: goto label_155ed4;
        case 0x155ed8u: goto label_155ed8;
        case 0x155edcu: goto label_155edc;
        case 0x155ee0u: goto label_155ee0;
        case 0x155ee4u: goto label_155ee4;
        case 0x155ee8u: goto label_155ee8;
        case 0x155eecu: goto label_155eec;
        case 0x155ef0u: goto label_155ef0;
        case 0x155ef4u: goto label_155ef4;
        case 0x155ef8u: goto label_155ef8;
        case 0x155efcu: goto label_155efc;
        case 0x155f00u: goto label_155f00;
        case 0x155f04u: goto label_155f04;
        case 0x155f08u: goto label_155f08;
        case 0x155f0cu: goto label_155f0c;
        case 0x155f10u: goto label_155f10;
        case 0x155f14u: goto label_155f14;
        case 0x155f18u: goto label_155f18;
        case 0x155f1cu: goto label_155f1c;
        case 0x155f20u: goto label_155f20;
        case 0x155f24u: goto label_155f24;
        case 0x155f28u: goto label_155f28;
        case 0x155f2cu: goto label_155f2c;
        case 0x155f30u: goto label_155f30;
        case 0x155f34u: goto label_155f34;
        case 0x155f38u: goto label_155f38;
        case 0x155f3cu: goto label_155f3c;
        case 0x155f40u: goto label_155f40;
        case 0x155f44u: goto label_155f44;
        case 0x155f48u: goto label_155f48;
        case 0x155f4cu: goto label_155f4c;
        case 0x155f50u: goto label_155f50;
        case 0x155f54u: goto label_155f54;
        case 0x155f58u: goto label_155f58;
        case 0x155f5cu: goto label_155f5c;
        case 0x155f60u: goto label_155f60;
        case 0x155f64u: goto label_155f64;
        case 0x155f68u: goto label_155f68;
        case 0x155f6cu: goto label_155f6c;
        case 0x155f70u: goto label_155f70;
        case 0x155f74u: goto label_155f74;
        case 0x155f78u: goto label_155f78;
        case 0x155f7cu: goto label_155f7c;
        case 0x155f80u: goto label_155f80;
        case 0x155f84u: goto label_155f84;
        case 0x155f88u: goto label_155f88;
        case 0x155f8cu: goto label_155f8c;
        case 0x155f90u: goto label_155f90;
        case 0x155f94u: goto label_155f94;
        case 0x155f98u: goto label_155f98;
        case 0x155f9cu: goto label_155f9c;
        case 0x155fa0u: goto label_155fa0;
        case 0x155fa4u: goto label_155fa4;
        case 0x155fa8u: goto label_155fa8;
        case 0x155facu: goto label_155fac;
        case 0x155fb0u: goto label_155fb0;
        case 0x155fb4u: goto label_155fb4;
        case 0x155fb8u: goto label_155fb8;
        case 0x155fbcu: goto label_155fbc;
        case 0x155fc0u: goto label_155fc0;
        case 0x155fc4u: goto label_155fc4;
        case 0x155fc8u: goto label_155fc8;
        case 0x155fccu: goto label_155fcc;
        case 0x155fd0u: goto label_155fd0;
        case 0x155fd4u: goto label_155fd4;
        case 0x155fd8u: goto label_155fd8;
        case 0x155fdcu: goto label_155fdc;
        default: break;
    }

    ctx->pc = 0x155dd0u;

label_155dd0:
    // 0x155dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_155dd4:
    // 0x155dd4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x155dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_155dd8:
    // 0x155dd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x155dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_155ddc:
    // 0x155ddc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_155de0:
    // 0x155de0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_155de4:
    // 0x155de4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x155de4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155de8:
    // 0x155de8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_155dec:
    // 0x155dec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_155df0:
    // 0x155df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_155df4:
    // 0x155df4: 0x3c11009b  lui         $s1, 0x9B
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)155 << 16));
label_155df8:
    // 0x155df8: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x155df8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
label_155dfc:
    // 0x155dfc: 0xac40f770  sw          $zero, -0x890($v0)
    ctx->pc = 0x155dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965104), GPR_U32(ctx, 0));
label_155e00:
    // 0x155e00: 0x2631ffd0  addiu       $s1, $s1, -0x30
    ctx->pc = 0x155e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
label_155e04:
    // 0x155e04: 0x2610f370  addiu       $s0, $s0, -0xC90
    ctx->pc = 0x155e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964080));
label_155e08:
    // 0x155e08: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x155e08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_155e0c:
    // 0x155e0c: 0x12600064  beqz        $s3, . + 4 + (0x64 << 2)
label_155e10:
    if (ctx->pc == 0x155E10u) {
        ctx->pc = 0x155E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E0Cu;
        // 0x155e10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E14u;
        goto label_155e14;
    }
    ctx->pc = 0x155E0Cu;
    {
        const bool branch_taken_0x155e0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E0Cu;
        // 0x155e10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e0c) {
            ctx->pc = 0x155FA0u;
            goto label_155fa0;
        }
    }
    ctx->pc = 0x155E14u;
label_155e14:
    // 0x155e14: 0x0  nop
    ctx->pc = 0x155e14u;
    // NOP
label_155e18:
    // 0x155e18: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_155e1c:
    // 0x155e1c: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x155e1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
label_155e20:
    // 0x155e20: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_155e24:
    if (ctx->pc == 0x155E24u) {
        ctx->pc = 0x155E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E20u;
        // 0x155e24: 0x8e720014  lw          $s2, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E28u;
        goto label_155e28;
    }
    ctx->pc = 0x155E20u;
    {
        const bool branch_taken_0x155e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E20u;
        // 0x155e24: 0x8e720014  lw          $s2, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e20) {
            ctx->pc = 0x155F00u;
            goto label_155f00;
        }
    }
    ctx->pc = 0x155E28u;
label_155e28:
    // 0x155e28: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x155e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_155e2c:
    // 0x155e2c: 0x26640022  addiu       $a0, $s3, 0x22
    ctx->pc = 0x155e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
label_155e30:
    // 0x155e30: 0xc04a78a  jal         func_129E28
label_155e34:
    if (ctx->pc == 0x155E34u) {
        ctx->pc = 0x155E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E30u;
        // 0x155e34: 0x24a5d248  addiu       $a1, $a1, -0x2DB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E38u;
        goto label_155e38;
    }
    ctx->pc = 0x155E30u;
    SET_GPR_U32(ctx, 31, 0x155E38u);
    ctx->pc = 0x155E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E30u;
    // 0x155e34: 0x24a5d248  addiu       $a1, $a1, -0x2DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x155E30u, 0x155E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E38u;
label_155e38:
    // 0x155e38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_155e3c:
    if (ctx->pc == 0x155E3Cu) {
        ctx->pc = 0x155E40u;
        goto label_155e40;
    }
    ctx->pc = 0x155E38u;
    {
        const bool branch_taken_0x155e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e38) {
            ctx->pc = 0x155E68u;
            goto label_155e68;
        }
    }
    ctx->pc = 0x155E40u;
label_155e40:
    // 0x155e40: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x155e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_155e44:
    // 0x155e44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155e48:
    // 0x155e48: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_155e4c:
    if (ctx->pc == 0x155E4Cu) {
        ctx->pc = 0x155E50u;
        goto label_155e50;
    }
    ctx->pc = 0x155E48u;
    {
        const bool branch_taken_0x155e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155e48) {
            ctx->pc = 0x155E60u;
            goto label_155e60;
        }
    }
    ctx->pc = 0x155E50u;
label_155e50:
    // 0x155e50: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x155e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_155e54:
    // 0x155e54: 0x12420002  beq         $s2, $v0, . + 4 + (0x2 << 2)
label_155e58:
    if (ctx->pc == 0x155E58u) {
        ctx->pc = 0x155E5Cu;
        goto label_155e5c;
    }
    ctx->pc = 0x155E54u;
    {
        const bool branch_taken_0x155e54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x155e54) {
            ctx->pc = 0x155E60u;
            goto label_155e60;
        }
    }
    ctx->pc = 0x155E5Cu;
label_155e5c:
    // 0x155e5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x155e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155e60:
    // 0x155e60: 0x1000004d  b           . + 4 + (0x4D << 2)
label_155e64:
    if (ctx->pc == 0x155E64u) {
        ctx->pc = 0x155E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E60u;
        // 0x155e64: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E68u;
        goto label_155e68;
    }
    ctx->pc = 0x155E60u;
    {
        const bool branch_taken_0x155e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E60u;
        // 0x155e64: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e60) {
            ctx->pc = 0x155F98u;
            goto label_155f98;
        }
    }
    ctx->pc = 0x155E68u;
label_155e68:
    // 0x155e68: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x155e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_155e6c:
    // 0x155e6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155e70:
    // 0x155e70: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_155e74:
    if (ctx->pc == 0x155E74u) {
        ctx->pc = 0x155E78u;
        goto label_155e78;
    }
    ctx->pc = 0x155E70u;
    {
        const bool branch_taken_0x155e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155e70) {
            ctx->pc = 0x155ED8u;
            goto label_155ed8;
        }
    }
    ctx->pc = 0x155E78u;
label_155e78:
    // 0x155e78: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x155e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_155e7c:
    // 0x155e7c: 0x40f809  jalr        $v0
label_155e80:
    if (ctx->pc == 0x155E80u) {
        ctx->pc = 0x155E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E7Cu;
        // 0x155e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E84u;
        goto label_155e84;
    }
    ctx->pc = 0x155E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155E84u);
        ctx->pc = 0x155E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E7Cu;
        // 0x155e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E7Cu, 0x155E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155E84u;
label_155e84:
    // 0x155e84: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x155e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_155e88:
    // 0x155e88: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_155e8c:
    if (ctx->pc == 0x155E8Cu) {
        ctx->pc = 0x155E90u;
        goto label_155e90;
    }
    ctx->pc = 0x155E88u;
    {
        const bool branch_taken_0x155e88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x155e88) {
            ctx->pc = 0x155EB8u;
            goto label_155eb8;
        }
    }
    ctx->pc = 0x155E90u;
label_155e90:
    // 0x155e90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_155e94:
    // 0x155e94: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x155e94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
label_155e98:
    // 0x155e98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x155e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_155e9c:
    // 0x155e9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x155e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_155ea0:
    // 0x155ea0: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x155ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_155ea4:
    // 0x155ea4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_155ea8:
    if (ctx->pc == 0x155EA8u) {
        ctx->pc = 0x155EACu;
        goto label_155eac;
    }
    ctx->pc = 0x155EA4u;
    {
        const bool branch_taken_0x155ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155ea4) {
            ctx->pc = 0x155EB8u;
            goto label_155eb8;
        }
    }
    ctx->pc = 0x155EACu;
label_155eac:
    // 0x155eac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x155eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_155eb0:
    // 0x155eb0: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x155eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
label_155eb4:
    // 0x155eb4: 0x0  nop
    ctx->pc = 0x155eb4u;
    // NOP
label_155eb8:
    // 0x155eb8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x155eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_155ebc:
    // 0x155ebc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x155ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_155ec0:
    // 0x155ec0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x155ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_155ec4:
    // 0x155ec4: 0x8c63f770  lw          $v1, -0x890($v1)
    ctx->pc = 0x155ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965104)));
label_155ec8:
    // 0x155ec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x155ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_155ecc:
    // 0x155ecc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_155ed0:
    // 0x155ed0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x155ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_155ed4:
    // 0x155ed4: 0xac43f770  sw          $v1, -0x890($v0)
    ctx->pc = 0x155ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965104), GPR_U32(ctx, 3));
label_155ed8:
    // 0x155ed8: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x155ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_155edc:
    // 0x155edc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155ee0:
    // 0x155ee0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_155ee4:
    if (ctx->pc == 0x155EE4u) {
        ctx->pc = 0x155EE8u;
        goto label_155ee8;
    }
    ctx->pc = 0x155EE0u;
    {
        const bool branch_taken_0x155ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155ee0) {
            ctx->pc = 0x155EF8u;
            goto label_155ef8;
        }
    }
    ctx->pc = 0x155EE8u;
label_155ee8:
    // 0x155ee8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x155ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_155eec:
    // 0x155eec: 0x12420002  beq         $s2, $v0, . + 4 + (0x2 << 2)
label_155ef0:
    if (ctx->pc == 0x155EF0u) {
        ctx->pc = 0x155EF4u;
        goto label_155ef4;
    }
    ctx->pc = 0x155EECu;
    {
        const bool branch_taken_0x155eec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x155eec) {
            ctx->pc = 0x155EF8u;
            goto label_155ef8;
        }
    }
    ctx->pc = 0x155EF4u;
label_155ef4:
    // 0x155ef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x155ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155ef8:
    // 0x155ef8: 0x10000027  b           . + 4 + (0x27 << 2)
label_155efc:
    if (ctx->pc == 0x155EFCu) {
        ctx->pc = 0x155EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EF8u;
        // 0x155efc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155F00u;
        goto label_155f00;
    }
    ctx->pc = 0x155EF8u;
    {
        const bool branch_taken_0x155ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EF8u;
        // 0x155efc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ef8) {
            ctx->pc = 0x155F98u;
            goto label_155f98;
        }
    }
    ctx->pc = 0x155F00u;
label_155f00:
    // 0x155f00: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x155f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_155f04:
    // 0x155f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155f08:
    // 0x155f08: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_155f0c:
    if (ctx->pc == 0x155F0Cu) {
        ctx->pc = 0x155F10u;
        goto label_155f10;
    }
    ctx->pc = 0x155F08u;
    {
        const bool branch_taken_0x155f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155f08) {
            ctx->pc = 0x155F70u;
            goto label_155f70;
        }
    }
    ctx->pc = 0x155F10u;
label_155f10:
    // 0x155f10: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x155f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_155f14:
    // 0x155f14: 0x40f809  jalr        $v0
label_155f18:
    if (ctx->pc == 0x155F18u) {
        ctx->pc = 0x155F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F14u;
        // 0x155f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155F1Cu;
        goto label_155f1c;
    }
    ctx->pc = 0x155F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155F1Cu);
        ctx->pc = 0x155F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F14u;
        // 0x155f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F14u, 0x155F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155F1Cu;
label_155f1c:
    // 0x155f1c: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x155f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_155f20:
    // 0x155f20: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_155f24:
    if (ctx->pc == 0x155F24u) {
        ctx->pc = 0x155F28u;
        goto label_155f28;
    }
    ctx->pc = 0x155F20u;
    {
        const bool branch_taken_0x155f20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x155f20) {
            ctx->pc = 0x155F50u;
            goto label_155f50;
        }
    }
    ctx->pc = 0x155F28u;
label_155f28:
    // 0x155f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_155f2c:
    // 0x155f2c: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x155f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
label_155f30:
    // 0x155f30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x155f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_155f34:
    // 0x155f34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x155f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_155f38:
    // 0x155f38: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x155f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_155f3c:
    // 0x155f3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_155f40:
    if (ctx->pc == 0x155F40u) {
        ctx->pc = 0x155F44u;
        goto label_155f44;
    }
    ctx->pc = 0x155F3Cu;
    {
        const bool branch_taken_0x155f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155f3c) {
            ctx->pc = 0x155F50u;
            goto label_155f50;
        }
    }
    ctx->pc = 0x155F44u;
label_155f44:
    // 0x155f44: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x155f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_155f48:
    // 0x155f48: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x155f48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
label_155f4c:
    // 0x155f4c: 0x0  nop
    ctx->pc = 0x155f4cu;
    // NOP
label_155f50:
    // 0x155f50: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x155f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_155f54:
    // 0x155f54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x155f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_155f58:
    // 0x155f58: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_155f5c:
    // 0x155f5c: 0x8c63f770  lw          $v1, -0x890($v1)
    ctx->pc = 0x155f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965104)));
label_155f60:
    // 0x155f60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x155f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_155f64:
    // 0x155f64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_155f68:
    // 0x155f68: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x155f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_155f6c:
    // 0x155f6c: 0xac43f770  sw          $v1, -0x890($v0)
    ctx->pc = 0x155f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965104), GPR_U32(ctx, 3));
label_155f70:
    // 0x155f70: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x155f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_155f74:
    // 0x155f74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155f78:
    // 0x155f78: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_155f7c:
    if (ctx->pc == 0x155F7Cu) {
        ctx->pc = 0x155F80u;
        goto label_155f80;
    }
    ctx->pc = 0x155F78u;
    {
        const bool branch_taken_0x155f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155f78) {
            ctx->pc = 0x155F90u;
            goto label_155f90;
        }
    }
    ctx->pc = 0x155F80u;
label_155f80:
    // 0x155f80: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_155f84:
    // 0x155f84: 0x12420002  beq         $s2, $v0, . + 4 + (0x2 << 2)
label_155f88:
    if (ctx->pc == 0x155F88u) {
        ctx->pc = 0x155F8Cu;
        goto label_155f8c;
    }
    ctx->pc = 0x155F84u;
    {
        const bool branch_taken_0x155f84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x155f84) {
            ctx->pc = 0x155F90u;
            goto label_155f90;
        }
    }
    ctx->pc = 0x155F8Cu;
label_155f8c:
    // 0x155f8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x155f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155f90:
    // 0x155f90: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x155f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155f94:
    // 0x155f94: 0x0  nop
    ctx->pc = 0x155f94u;
    // NOP
label_155f98:
    // 0x155f98: 0x1660ff9f  bnez        $s3, . + 4 + (-0x61 << 2)
label_155f9c:
    if (ctx->pc == 0x155F9Cu) {
        ctx->pc = 0x155FA0u;
        goto label_155fa0;
    }
    ctx->pc = 0x155F98u;
    {
        const bool branch_taken_0x155f98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x155f98) {
            ctx->pc = 0x155E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155e18;
        }
    }
    ctx->pc = 0x155FA0u;
label_155fa0:
    // 0x155fa0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_155fa4:
    // 0x155fa4: 0x2a820100  slti        $v0, $s4, 0x100
    ctx->pc = 0x155fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
label_155fa8:
    // 0x155fa8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x155fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_155fac:
    // 0x155fac: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
label_155fb0:
    if (ctx->pc == 0x155FB0u) {
        ctx->pc = 0x155FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FACu;
        // 0x155fb0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FB4u;
        goto label_155fb4;
    }
    ctx->pc = 0x155FACu;
    {
        const bool branch_taken_0x155fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FACu;
        // 0x155fb0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fac) {
            ctx->pc = 0x155E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155e08;
        }
    }
    ctx->pc = 0x155FB4u;
label_155fb4:
    // 0x155fb4: 0xc055880  jal         func_156200
label_155fb8:
    if (ctx->pc == 0x155FB8u) {
        ctx->pc = 0x155FBCu;
        goto label_155fbc;
    }
    ctx->pc = 0x155FB4u;
    SET_GPR_U32(ctx, 31, 0x155FBCu);
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x155FB4u, 0x155FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FBCu;
label_155fbc:
    // 0x155fbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x155fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_155fc0:
    // 0x155fc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_155fc4:
    // 0x155fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155fc8:
    // 0x155fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155fcc:
    // 0x155fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155fd0:
    // 0x155fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155fd4:
    // 0x155fd4: 0x3e00008  jr          $ra
label_155fd8:
    if (ctx->pc == 0x155FD8u) {
        ctx->pc = 0x155FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FD4u;
        // 0x155fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FDCu;
        goto label_155fdc;
    }
    ctx->pc = 0x155FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FD4u;
        // 0x155fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155FDCu;
label_155fdc:
    // 0x155fdc: 0x0  nop
    ctx->pc = 0x155fdcu;
    // NOP
    if (ctx->pc == 0x155fdcu) { ctx->pc = 0x155fe0u; }
}

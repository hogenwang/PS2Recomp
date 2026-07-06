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

// Function: sub_0013BCF0
// Address: 0x13bcf0 - 0x13be80
void sub_0013BCF0_0x13bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BCF0_0x13bcf0");
#endif

    switch (ctx->pc) {
        case 0x13bd08u: goto label_13bd08;
        case 0x13bd54u: goto label_13bd54;
        case 0x13bda8u: goto label_13bda8;
        case 0x13bdd8u: goto label_13bdd8;
        case 0x13be28u: goto label_13be28;
        case 0x13be40u: goto label_13be40;
        default: break;
    }

    ctx->pc = 0x13bcf0u;

    // 0x13bcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13bcf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13bcf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bcfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd00: 0xc062804  jal         func_18A010
    ctx->pc = 0x13BD00u;
    SET_GPR_U32(ctx, 31, 0x13BD08u);
    ctx->pc = 0x13BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD00u;
    // 0x13bd04: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13BD00u, 0x13BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD08u;
label_13bd08:
    // 0x13bd08: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BD08u;
    {
        const bool branch_taken_0x13bd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bd08) {
            ctx->pc = 0x13BD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BD08u;
            // 0x13bd0c: 0x8c420498  lw          $v0, 0x498($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BD18u;
            goto label_13bd18;
        }
    }
    ctx->pc = 0x13BD10u;
    // 0x13bd10: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x13BD10u;
    {
        const bool branch_taken_0x13bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD10u;
        // 0x13bd14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd10) {
            ctx->pc = 0x13BE68u;
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BD18u;
label_13bd18:
    // 0x13bd18: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x13bd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x13bd1c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BD1Cu;
    {
        const bool branch_taken_0x13bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd1c) {
            ctx->pc = 0x13BD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BD1Cu;
            // 0x13bd20: 0x8e03023c  lw          $v1, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BD60u;
            goto label_13bd60;
        }
    }
    ctx->pc = 0x13BD24u;
    // 0x13bd24: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x13bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13bd28: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x13bd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13bd2c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13BD2Cu;
    {
        const bool branch_taken_0x13bd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bd2c) {
            ctx->pc = 0x13BD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BD2Cu;
            // 0x13bd30: 0xae000208  sw          $zero, 0x208($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BD58u;
            goto label_13bd58;
        }
    }
    ctx->pc = 0x13BD34u;
    // 0x13bd34: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x13bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x13bd38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bd3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BD3Cu;
    {
        const bool branch_taken_0x13bd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd3c) {
            ctx->pc = 0x13BD54u;
            goto label_13bd54;
        }
    }
    ctx->pc = 0x13BD44u;
    // 0x13bd44: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x13bd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13bd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd4c: 0xc04f1bc  jal         func_13C6F0
    ctx->pc = 0x13BD4Cu;
    SET_GPR_U32(ctx, 31, 0x13BD54u);
    ctx->pc = 0x13BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD4Cu;
    // 0x13bd50: 0xae02023c  sw          $v0, 0x23C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6F0u, 0x13BD4Cu, 0x13BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD54u;
label_13bd54:
    // 0x13bd54: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x13bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_13bd58:
    // 0x13bd58: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x13BD58u;
    {
        const bool branch_taken_0x13bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD58u;
        // 0x13bd5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd58) {
            ctx->pc = 0x13BE68u;
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BD60u;
label_13bd60:
    // 0x13bd60: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x13bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13bd64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13bd68: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x13bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    // 0x13bd6c: 0x8e020498  lw          $v0, 0x498($s0)
    ctx->pc = 0x13bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x13bd70: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13bd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13bd74: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13BD74u;
    {
        const bool branch_taken_0x13bd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd74) {
            ctx->pc = 0x13BD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BD74u;
            // 0x13bd78: 0x8e03023c  lw          $v1, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BDB4u;
            goto label_13bdb4;
        }
    }
    ctx->pc = 0x13BD7Cu;
    // 0x13bd7c: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x13bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13bd80: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13bd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13bd84: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13BD84u;
    {
        const bool branch_taken_0x13bd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bd84) {
            ctx->pc = 0x13BD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BD84u;
            // 0x13bd88: 0xae000208  sw          $zero, 0x208($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BDACu;
            goto label_13bdac;
        }
    }
    ctx->pc = 0x13BD8Cu;
    // 0x13bd8c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13bd90: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BD90u;
    {
        const bool branch_taken_0x13bd90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13bd90) {
            ctx->pc = 0x13BDA8u;
            goto label_13bda8;
        }
    }
    ctx->pc = 0x13BD98u;
    // 0x13bd98: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x13bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13bd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bda0: 0xc04f1d4  jal         func_13C750
    ctx->pc = 0x13BDA0u;
    SET_GPR_U32(ctx, 31, 0x13BDA8u);
    ctx->pc = 0x13BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDA0u;
    // 0x13bda4: 0xae02023c  sw          $v0, 0x23C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C750u, 0x13BDA0u, 0x13BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDA8u;
label_13bda8:
    // 0x13bda8: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x13bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_13bdac:
    // 0x13bdac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13BDACu;
    {
        const bool branch_taken_0x13bdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDACu;
        // 0x13bdb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bdac) {
            ctx->pc = 0x13BE68u;
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BDB4u;
label_13bdb4:
    // 0x13bdb4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13bdb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13bdbc: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x13bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    // 0x13bdc0: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x13bdc4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x13bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13bdc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BDC8u;
    {
        const bool branch_taken_0x13bdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bdc8) {
            ctx->pc = 0x13BDE0u;
            goto label_13bde0;
        }
    }
    ctx->pc = 0x13BDD0u;
    // 0x13bdd0: 0xc04f19c  jal         func_13C670
    ctx->pc = 0x13BDD0u;
    SET_GPR_U32(ctx, 31, 0x13BDD8u);
    ctx->pc = 0x13BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDD0u;
    // 0x13bdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C670u, 0x13BDD0u, 0x13BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDD8u;
label_13bdd8:
    // 0x13bdd8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13BDD8u;
    {
        const bool branch_taken_0x13bdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDD8u;
        // 0x13bddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bdd8) {
            ctx->pc = 0x13BE68u;
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BDE0u;
label_13bde0:
    // 0x13bde0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13bde4: 0x8c425c70  lw          $v0, 0x5C70($v0)
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23664)));
    // 0x13bde8: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x13BDE8u;
    {
        const bool branch_taken_0x13bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bde8) {
            ctx->pc = 0x13BDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BDE8u;
            // 0x13bdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BE68u;
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BDF0u;
    // 0x13bdf0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13bdf4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BDF4u;
    {
        const bool branch_taken_0x13bdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bdf4) {
            ctx->pc = 0x13BDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BDF4u;
            // 0x13bdf8: 0x8e03023c  lw          $v1, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BE0Cu;
            goto label_13be0c;
        }
    }
    ctx->pc = 0x13BDFCu;
    // 0x13bdfc: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x13bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x13be00: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BE00u;
    {
        const bool branch_taken_0x13be00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be00) {
            ctx->pc = 0x13BE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BE00u;
            // 0x13be04: 0x8e04023c  lw          $a0, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BE48u;
            goto label_13be48;
        }
    }
    ctx->pc = 0x13BE08u;
    // 0x13be08: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x13be08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_13be0c:
    // 0x13be0c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x13be0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x13be10: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BE10u;
    {
        const bool branch_taken_0x13be10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13be10) {
            ctx->pc = 0x13BE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BE10u;
            // 0x13be14: 0x8e02023c  lw          $v0, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BE2Cu;
            goto label_13be2c;
        }
    }
    ctx->pc = 0x13BE18u;
    // 0x13be18: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x13be18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x13be1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be20: 0xc04f21c  jal         func_13C870
    ctx->pc = 0x13BE20u;
    SET_GPR_U32(ctx, 31, 0x13BE28u);
    ctx->pc = 0x13BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE20u;
    // 0x13be24: 0xae02023c  sw          $v0, 0x23C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C870u, 0x13BE20u, 0x13BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE28u;
label_13be28:
    // 0x13be28: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_13be2c:
    // 0x13be2c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x13be2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x13be30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13BE30u;
    {
        const bool branch_taken_0x13be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be30) {
            ctx->pc = 0x13BE64u;
            goto label_13be64;
        }
    }
    ctx->pc = 0x13BE38u;
    // 0x13be38: 0xc04f3e8  jal         func_13CFA0
    ctx->pc = 0x13BE38u;
    SET_GPR_U32(ctx, 31, 0x13BE40u);
    ctx->pc = 0x13BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE38u;
    // 0x13be3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CFA0u, 0x13BE38u, 0x13BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE40u;
label_13be40:
    // 0x13be40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13BE40u;
    {
        const bool branch_taken_0x13be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE40u;
        // 0x13be44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be40) {
            ctx->pc = 0x13BE68u;
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BE48u;
label_13be48:
    // 0x13be48: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x13be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x13be4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13be50: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x13be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x13be54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13be54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13be58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13be58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13be5c: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x13be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x13be60: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x13be60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
label_13be64:
    // 0x13be64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13be64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13be68:
    // 0x13be68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13be68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13be6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13be6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13be70: 0x3e00008  jr          $ra
    ctx->pc = 0x13BE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE70u;
        // 0x13be74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BE78u;
    // 0x13be78: 0x0  nop
    ctx->pc = 0x13be78u;
    // NOP
    // 0x13be7c: 0x0  nop
    ctx->pc = 0x13be7cu;
    // NOP
}

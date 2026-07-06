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

// Function: sub_002F7040
// Address: 0x2f7040 - 0x2f72e0
void sub_002F7040_0x2f7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7040_0x2f7040");
#endif

    switch (ctx->pc) {
        case 0x2f7040u: goto label_2f7040;
        case 0x2f7044u: goto label_2f7044;
        case 0x2f7048u: goto label_2f7048;
        case 0x2f704cu: goto label_2f704c;
        case 0x2f7050u: goto label_2f7050;
        case 0x2f7054u: goto label_2f7054;
        case 0x2f7058u: goto label_2f7058;
        case 0x2f705cu: goto label_2f705c;
        case 0x2f7060u: goto label_2f7060;
        case 0x2f7064u: goto label_2f7064;
        case 0x2f7068u: goto label_2f7068;
        case 0x2f706cu: goto label_2f706c;
        case 0x2f7070u: goto label_2f7070;
        case 0x2f7074u: goto label_2f7074;
        case 0x2f7078u: goto label_2f7078;
        case 0x2f707cu: goto label_2f707c;
        case 0x2f7080u: goto label_2f7080;
        case 0x2f7084u: goto label_2f7084;
        case 0x2f7088u: goto label_2f7088;
        case 0x2f708cu: goto label_2f708c;
        case 0x2f7090u: goto label_2f7090;
        case 0x2f7094u: goto label_2f7094;
        case 0x2f7098u: goto label_2f7098;
        case 0x2f709cu: goto label_2f709c;
        case 0x2f70a0u: goto label_2f70a0;
        case 0x2f70a4u: goto label_2f70a4;
        case 0x2f70a8u: goto label_2f70a8;
        case 0x2f70acu: goto label_2f70ac;
        case 0x2f70b0u: goto label_2f70b0;
        case 0x2f70b4u: goto label_2f70b4;
        case 0x2f70b8u: goto label_2f70b8;
        case 0x2f70bcu: goto label_2f70bc;
        case 0x2f70c0u: goto label_2f70c0;
        case 0x2f70c4u: goto label_2f70c4;
        case 0x2f70c8u: goto label_2f70c8;
        case 0x2f70ccu: goto label_2f70cc;
        case 0x2f70d0u: goto label_2f70d0;
        case 0x2f70d4u: goto label_2f70d4;
        case 0x2f70d8u: goto label_2f70d8;
        case 0x2f70dcu: goto label_2f70dc;
        case 0x2f70e0u: goto label_2f70e0;
        case 0x2f70e4u: goto label_2f70e4;
        case 0x2f70e8u: goto label_2f70e8;
        case 0x2f70ecu: goto label_2f70ec;
        case 0x2f70f0u: goto label_2f70f0;
        case 0x2f70f4u: goto label_2f70f4;
        case 0x2f70f8u: goto label_2f70f8;
        case 0x2f70fcu: goto label_2f70fc;
        case 0x2f7100u: goto label_2f7100;
        case 0x2f7104u: goto label_2f7104;
        case 0x2f7108u: goto label_2f7108;
        case 0x2f710cu: goto label_2f710c;
        case 0x2f7110u: goto label_2f7110;
        case 0x2f7114u: goto label_2f7114;
        case 0x2f7118u: goto label_2f7118;
        case 0x2f711cu: goto label_2f711c;
        case 0x2f7120u: goto label_2f7120;
        case 0x2f7124u: goto label_2f7124;
        case 0x2f7128u: goto label_2f7128;
        case 0x2f712cu: goto label_2f712c;
        case 0x2f7130u: goto label_2f7130;
        case 0x2f7134u: goto label_2f7134;
        case 0x2f7138u: goto label_2f7138;
        case 0x2f713cu: goto label_2f713c;
        case 0x2f7140u: goto label_2f7140;
        case 0x2f7144u: goto label_2f7144;
        case 0x2f7148u: goto label_2f7148;
        case 0x2f714cu: goto label_2f714c;
        case 0x2f7150u: goto label_2f7150;
        case 0x2f7154u: goto label_2f7154;
        case 0x2f7158u: goto label_2f7158;
        case 0x2f715cu: goto label_2f715c;
        case 0x2f7160u: goto label_2f7160;
        case 0x2f7164u: goto label_2f7164;
        case 0x2f7168u: goto label_2f7168;
        case 0x2f716cu: goto label_2f716c;
        case 0x2f7170u: goto label_2f7170;
        case 0x2f7174u: goto label_2f7174;
        case 0x2f7178u: goto label_2f7178;
        case 0x2f717cu: goto label_2f717c;
        case 0x2f7180u: goto label_2f7180;
        case 0x2f7184u: goto label_2f7184;
        case 0x2f7188u: goto label_2f7188;
        case 0x2f718cu: goto label_2f718c;
        case 0x2f7190u: goto label_2f7190;
        case 0x2f7194u: goto label_2f7194;
        case 0x2f7198u: goto label_2f7198;
        case 0x2f719cu: goto label_2f719c;
        case 0x2f71a0u: goto label_2f71a0;
        case 0x2f71a4u: goto label_2f71a4;
        case 0x2f71a8u: goto label_2f71a8;
        case 0x2f71acu: goto label_2f71ac;
        case 0x2f71b0u: goto label_2f71b0;
        case 0x2f71b4u: goto label_2f71b4;
        case 0x2f71b8u: goto label_2f71b8;
        case 0x2f71bcu: goto label_2f71bc;
        case 0x2f71c0u: goto label_2f71c0;
        case 0x2f71c4u: goto label_2f71c4;
        case 0x2f71c8u: goto label_2f71c8;
        case 0x2f71ccu: goto label_2f71cc;
        case 0x2f71d0u: goto label_2f71d0;
        case 0x2f71d4u: goto label_2f71d4;
        case 0x2f71d8u: goto label_2f71d8;
        case 0x2f71dcu: goto label_2f71dc;
        case 0x2f71e0u: goto label_2f71e0;
        case 0x2f71e4u: goto label_2f71e4;
        case 0x2f71e8u: goto label_2f71e8;
        case 0x2f71ecu: goto label_2f71ec;
        case 0x2f71f0u: goto label_2f71f0;
        case 0x2f71f4u: goto label_2f71f4;
        case 0x2f71f8u: goto label_2f71f8;
        case 0x2f71fcu: goto label_2f71fc;
        case 0x2f7200u: goto label_2f7200;
        case 0x2f7204u: goto label_2f7204;
        case 0x2f7208u: goto label_2f7208;
        case 0x2f720cu: goto label_2f720c;
        case 0x2f7210u: goto label_2f7210;
        case 0x2f7214u: goto label_2f7214;
        case 0x2f7218u: goto label_2f7218;
        case 0x2f721cu: goto label_2f721c;
        case 0x2f7220u: goto label_2f7220;
        case 0x2f7224u: goto label_2f7224;
        case 0x2f7228u: goto label_2f7228;
        case 0x2f722cu: goto label_2f722c;
        case 0x2f7230u: goto label_2f7230;
        case 0x2f7234u: goto label_2f7234;
        case 0x2f7238u: goto label_2f7238;
        case 0x2f723cu: goto label_2f723c;
        case 0x2f7240u: goto label_2f7240;
        case 0x2f7244u: goto label_2f7244;
        case 0x2f7248u: goto label_2f7248;
        case 0x2f724cu: goto label_2f724c;
        case 0x2f7250u: goto label_2f7250;
        case 0x2f7254u: goto label_2f7254;
        case 0x2f7258u: goto label_2f7258;
        case 0x2f725cu: goto label_2f725c;
        case 0x2f7260u: goto label_2f7260;
        case 0x2f7264u: goto label_2f7264;
        case 0x2f7268u: goto label_2f7268;
        case 0x2f726cu: goto label_2f726c;
        case 0x2f7270u: goto label_2f7270;
        case 0x2f7274u: goto label_2f7274;
        case 0x2f7278u: goto label_2f7278;
        case 0x2f727cu: goto label_2f727c;
        case 0x2f7280u: goto label_2f7280;
        case 0x2f7284u: goto label_2f7284;
        case 0x2f7288u: goto label_2f7288;
        case 0x2f728cu: goto label_2f728c;
        case 0x2f7290u: goto label_2f7290;
        case 0x2f7294u: goto label_2f7294;
        case 0x2f7298u: goto label_2f7298;
        case 0x2f729cu: goto label_2f729c;
        case 0x2f72a0u: goto label_2f72a0;
        case 0x2f72a4u: goto label_2f72a4;
        case 0x2f72a8u: goto label_2f72a8;
        case 0x2f72acu: goto label_2f72ac;
        case 0x2f72b0u: goto label_2f72b0;
        case 0x2f72b4u: goto label_2f72b4;
        case 0x2f72b8u: goto label_2f72b8;
        case 0x2f72bcu: goto label_2f72bc;
        case 0x2f72c0u: goto label_2f72c0;
        case 0x2f72c4u: goto label_2f72c4;
        case 0x2f72c8u: goto label_2f72c8;
        case 0x2f72ccu: goto label_2f72cc;
        case 0x2f72d0u: goto label_2f72d0;
        case 0x2f72d4u: goto label_2f72d4;
        case 0x2f72d8u: goto label_2f72d8;
        case 0x2f72dcu: goto label_2f72dc;
        default: break;
    }

    ctx->pc = 0x2f7040u;

label_2f7040:
    // 0x2f7040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f7040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2f7044:
    // 0x2f7044: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2f7044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2f7048:
    // 0x2f7048: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2f7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_2f704c:
    // 0x2f704c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f704cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7050:
    // 0x2f7050: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2f7050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2f7054:
    // 0x2f7054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7058:
    // 0x2f7058: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f705c:
    // 0x2f705c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2f705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2f7060:
    // 0x2f7060: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2f7060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2f7064:
    // 0x2f7064: 0x10920008  beq         $a0, $s2, . + 4 + (0x8 << 2)
label_2f7068:
    if (ctx->pc == 0x2F7068u) {
        ctx->pc = 0x2F7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7064u;
        // 0x2f7068: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F706Cu;
        goto label_2f706c;
    }
    ctx->pc = 0x2F7064u;
    {
        const bool branch_taken_0x2f7064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7064u;
        // 0x2f7068: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7064) {
            ctx->pc = 0x2F7088u;
            goto label_2f7088;
        }
    }
    ctx->pc = 0x2F706Cu;
label_2f706c:
    // 0x2f706c: 0xc0432ac  jal         func_10CAB0
label_2f7070:
    if (ctx->pc == 0x2F7070u) {
        ctx->pc = 0x2F7074u;
        goto label_2f7074;
    }
    ctx->pc = 0x2F706Cu;
    SET_GPR_U32(ctx, 31, 0x2F7074u);
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F706Cu, 0x2F7074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7074u;
label_2f7074:
    // 0x2f7074: 0xc04329c  jal         func_10CA70
label_2f7078:
    if (ctx->pc == 0x2F7078u) {
        ctx->pc = 0x2F7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7074u;
        // 0x2f7078: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F707Cu;
        goto label_2f707c;
    }
    ctx->pc = 0x2F7074u;
    SET_GPR_U32(ctx, 31, 0x2F707Cu);
    ctx->pc = 0x2F7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7074u;
    // 0x2f7078: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F7074u, 0x2F707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F707Cu;
label_2f707c:
    // 0x2f707c: 0xc0be45e  jal         func_2F9178
label_2f7080:
    if (ctx->pc == 0x2F7080u) {
        ctx->pc = 0x2F7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F707Cu;
        // 0x2f7080: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7084u;
        goto label_2f7084;
    }
    ctx->pc = 0x2F707Cu;
    SET_GPR_U32(ctx, 31, 0x2F7084u);
    ctx->pc = 0x2F7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F707Cu;
    // 0x2f7080: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F707Cu, 0x2F7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7084u;
label_2f7084:
    // 0x2f7084: 0xae32005c  sw          $s2, 0x5C($s1)
    ctx->pc = 0x2f7084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
label_2f7088:
    // 0x2f7088: 0xc0be450  jal         func_2F9140
label_2f708c:
    if (ctx->pc == 0x2F708Cu) {
        ctx->pc = 0x2F708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7088u;
        // 0x2f708c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7090u;
        goto label_2f7090;
    }
    ctx->pc = 0x2F7088u;
    SET_GPR_U32(ctx, 31, 0x2F7090u);
    ctx->pc = 0x2F708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7088u;
    // 0x2f708c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F7088u, 0x2F7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7090u;
label_2f7090:
    // 0x2f7090: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f7094:
    if (ctx->pc == 0x2F7094u) {
        ctx->pc = 0x2F7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7090u;
        // 0x2f7094: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7098u;
        goto label_2f7098;
    }
    ctx->pc = 0x2F7090u;
    {
        const bool branch_taken_0x2f7090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7090u;
        // 0x2f7094: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7090) {
            ctx->pc = 0x2F70A8u;
            goto label_2f70a8;
        }
    }
    ctx->pc = 0x2F7098u;
label_2f7098:
    // 0x2f7098: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f7098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
label_2f709c:
    // 0x2f709c: 0x10000077  b           . + 4 + (0x77 << 2)
label_2f70a0:
    if (ctx->pc == 0x2F70A0u) {
        ctx->pc = 0x2F70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F709Cu;
        // 0x2f70a0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F70A4u;
        goto label_2f70a4;
    }
    ctx->pc = 0x2F709Cu;
    {
        const bool branch_taken_0x2f709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F709Cu;
        // 0x2f70a0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f709c) {
            ctx->pc = 0x2F727Cu;
            goto label_2f727c;
        }
    }
    ctx->pc = 0x2F70A4u;
label_2f70a4:
    // 0x2f70a4: 0x0  nop
    ctx->pc = 0x2f70a4u;
    // NOP
label_2f70a8:
    // 0x2f70a8: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x2f70a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2f70ac:
    // 0x2f70ac: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x2f70acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2f70b0:
    // 0x2f70b0: 0x8e280058  lw          $t0, 0x58($s1)
    ctx->pc = 0x2f70b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2f70b4:
    // 0x2f70b4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2f70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2f70b8:
    // 0x2f70b8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f70bc:
    // 0x2f70bc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f70bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2f70c0:
    // 0x2f70c0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2f70c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_2f70c4:
    // 0x2f70c4: 0x24427008  addiu       $v0, $v0, 0x7008
    ctx->pc = 0x2f70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
label_2f70c8:
    // 0x2f70c8: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x2f70c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_2f70cc:
    // 0x2f70cc: 0x24a523e0  addiu       $a1, $a1, 0x23E0
    ctx->pc = 0x2f70ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9184));
label_2f70d0:
    // 0x2f70d0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2f70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2f70d4:
    // 0x2f70d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f70d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f70d8:
    // 0x2f70d8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2f70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_2f70dc:
    // 0x2f70dc: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2f70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_2f70e0:
    // 0x2f70e0: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2f70e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_2f70e4:
    // 0x2f70e4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2f70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2f70e8:
    // 0x2f70e8: 0xc043298  jal         func_10CA60
label_2f70ec:
    if (ctx->pc == 0x2F70ECu) {
        ctx->pc = 0x2F70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70E8u;
        // 0x2f70ec: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F70F0u;
        goto label_2f70f0;
    }
    ctx->pc = 0x2F70E8u;
    SET_GPR_U32(ctx, 31, 0x2F70F0u);
    ctx->pc = 0x2F70ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70E8u;
    // 0x2f70ec: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x2F70E8u, 0x2F70F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70F0u;
label_2f70f0:
    // 0x2f70f0: 0x1052000d  beq         $v0, $s2, . + 4 + (0xD << 2)
label_2f70f4:
    if (ctx->pc == 0x2F70F4u) {
        ctx->pc = 0x2F70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70F0u;
        // 0x2f70f4: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F70F8u;
        goto label_2f70f8;
    }
    ctx->pc = 0x2F70F0u;
    {
        const bool branch_taken_0x2f70f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70F0u;
        // 0x2f70f4: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70f0) {
            ctx->pc = 0x2F7128u;
            goto label_2f7128;
        }
    }
    ctx->pc = 0x2F70F8u;
label_2f70f8:
    // 0x2f70f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f70fc:
    // 0x2f70fc: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x2f70fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
label_2f7100:
    // 0x2f7100: 0x244223f8  addiu       $v0, $v0, 0x23F8
    ctx->pc = 0x2f7100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9208));
label_2f7104:
    // 0x2f7104: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f7104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7108:
    // 0x2f7108: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2f7108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2f710c:
    // 0x2f710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7110:
    // 0x2f7110: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f7110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2f7114:
    // 0x2f7114: 0xc043318  jal         func_10CC60
label_2f7118:
    if (ctx->pc == 0x2F7118u) {
        ctx->pc = 0x2F7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7114u;
        // 0x2f7118: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F711Cu;
        goto label_2f711c;
    }
    ctx->pc = 0x2F7114u;
    SET_GPR_U32(ctx, 31, 0x2F711Cu);
    ctx->pc = 0x2F7118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7114u;
    // 0x2f7118: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F7114u, 0x2F711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F711Cu;
label_2f711c:
    // 0x2f711c: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_2f7120:
    if (ctx->pc == 0x2F7120u) {
        ctx->pc = 0x2F7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F711Cu;
        // 0x2f7120: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7124u;
        goto label_2f7124;
    }
    ctx->pc = 0x2F711Cu;
    {
        const bool branch_taken_0x2f711c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F711Cu;
        // 0x2f7120: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f711c) {
            ctx->pc = 0x2F7134u;
            goto label_2f7134;
        }
    }
    ctx->pc = 0x2F7124u;
label_2f7124:
    // 0x2f7124: 0x0  nop
    ctx->pc = 0x2f7124u;
    // NOP
label_2f7128:
    // 0x2f7128: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
label_2f712c:
    // 0x2f712c: 0x10000051  b           . + 4 + (0x51 << 2)
label_2f7130:
    if (ctx->pc == 0x2F7130u) {
        ctx->pc = 0x2F7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F712Cu;
        // 0x2f7130: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7134u;
        goto label_2f7134;
    }
    ctx->pc = 0x2F712Cu;
    {
        const bool branch_taken_0x2f712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F712Cu;
        // 0x2f7130: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f712c) {
            ctx->pc = 0x2F7274u;
            goto label_2f7274;
        }
    }
    ctx->pc = 0x2F7134u;
label_2f7134:
    // 0x2f7134: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f7134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f7138:
    // 0x2f7138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f713c:
    // 0x2f713c: 0x24422410  addiu       $v0, $v0, 0x2410
    ctx->pc = 0x2f713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9232));
label_2f7140:
    // 0x2f7140: 0xc043318  jal         func_10CC60
label_2f7144:
    if (ctx->pc == 0x2F7144u) {
        ctx->pc = 0x2F7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7140u;
        // 0x2f7144: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7148u;
        goto label_2f7148;
    }
    ctx->pc = 0x2F7140u;
    SET_GPR_U32(ctx, 31, 0x2F7148u);
    ctx->pc = 0x2F7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7140u;
    // 0x2f7144: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F7140u, 0x2F7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7148u;
label_2f7148:
    // 0x2f7148: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_2f714c:
    if (ctx->pc == 0x2F714Cu) {
        ctx->pc = 0x2F714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7148u;
        // 0x2f714c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7150u;
        goto label_2f7150;
    }
    ctx->pc = 0x2F7148u;
    {
        const bool branch_taken_0x2f7148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7148u;
        // 0x2f714c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7148) {
            ctx->pc = 0x2F7160u;
            goto label_2f7160;
        }
    }
    ctx->pc = 0x2F7150u;
label_2f7150:
    // 0x2f7150: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f7150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
label_2f7154:
    // 0x2f7154: 0x10000043  b           . + 4 + (0x43 << 2)
label_2f7158:
    if (ctx->pc == 0x2F7158u) {
        ctx->pc = 0x2F7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7154u;
        // 0x2f7158: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F715Cu;
        goto label_2f715c;
    }
    ctx->pc = 0x2F7154u;
    {
        const bool branch_taken_0x2f7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7154u;
        // 0x2f7158: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7154) {
            ctx->pc = 0x2F7264u;
            goto label_2f7264;
        }
    }
    ctx->pc = 0x2F715Cu;
label_2f715c:
    // 0x2f715c: 0x0  nop
    ctx->pc = 0x2f715cu;
    // NOP
label_2f7160:
    // 0x2f7160: 0xae330074  sw          $s3, 0x74($s1)
    ctx->pc = 0x2f7160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 19));
label_2f7164:
    // 0x2f7164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7168:
    // 0x2f7168: 0xc043768  jal         func_10DDA0
label_2f716c:
    if (ctx->pc == 0x2F716Cu) {
        ctx->pc = 0x2F716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7168u;
        // 0x2f716c: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7170u;
        goto label_2f7170;
    }
    ctx->pc = 0x2F7168u;
    SET_GPR_U32(ctx, 31, 0x2F7170u);
    ctx->pc = 0x2F716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7168u;
    // 0x2f716c: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x2F7168u, 0x2F7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7170u;
label_2f7170:
    // 0x2f7170: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
label_2f7174:
    if (ctx->pc == 0x2F7174u) {
        ctx->pc = 0x2F7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7170u;
        // 0x2f7174: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7178u;
        goto label_2f7178;
    }
    ctx->pc = 0x2F7170u;
    {
        const bool branch_taken_0x2f7170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f7170) {
            ctx->pc = 0x2F7174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7170u;
            // 0x2f7174: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7188u;
            goto label_2f7188;
        }
    }
    ctx->pc = 0x2F7178u;
label_2f7178:
    // 0x2f7178: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f7178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
label_2f717c:
    // 0x2f717c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f717cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2f7180:
    // 0x2f7180: 0x10000034  b           . + 4 + (0x34 << 2)
label_2f7184:
    if (ctx->pc == 0x2F7184u) {
        ctx->pc = 0x2F7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7180u;
        // 0x2f7184: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7188u;
        goto label_2f7188;
    }
    ctx->pc = 0x2F7180u;
    {
        const bool branch_taken_0x2f7180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7180u;
        // 0x2f7184: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7180) {
            ctx->pc = 0x2F7254u;
            goto label_2f7254;
        }
    }
    ctx->pc = 0x2F7188u;
label_2f7188:
    // 0x2f7188: 0x1052000f  beq         $v0, $s2, . + 4 + (0xF << 2)
label_2f718c:
    if (ctx->pc == 0x2F718Cu) {
        ctx->pc = 0x2F718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7188u;
        // 0x2f718c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7190u;
        goto label_2f7190;
    }
    ctx->pc = 0x2F7188u;
    {
        const bool branch_taken_0x2f7188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7188u;
        // 0x2f718c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7188) {
            ctx->pc = 0x2F71C8u;
            goto label_2f71c8;
        }
    }
    ctx->pc = 0x2F7190u;
label_2f7190:
    // 0x2f7190: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2f7190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_2f7194:
    // 0x2f7194: 0xc046278  jal         func_1189E0
label_2f7198:
    if (ctx->pc == 0x2F7198u) {
        ctx->pc = 0x2F7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7194u;
        // 0x2f7198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F719Cu;
        goto label_2f719c;
    }
    ctx->pc = 0x2F7194u;
    SET_GPR_U32(ctx, 31, 0x2F719Cu);
    ctx->pc = 0x2F7198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7194u;
    // 0x2f7198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189E0u, 0x2F7194u, 0x2F719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F719Cu;
label_2f719c:
    // 0x2f719c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2f719cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_2f71a0:
    // 0x2f71a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f71a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f71a4:
    // 0x2f71a4: 0x24a569f8  addiu       $a1, $a1, 0x69F8
    ctx->pc = 0x2f71a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27128));
label_2f71a8:
    // 0x2f71a8: 0xc0462e4  jal         func_118B90
label_2f71ac:
    if (ctx->pc == 0x2F71ACu) {
        ctx->pc = 0x2F71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71A8u;
        // 0x2f71ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F71B0u;
        goto label_2f71b0;
    }
    ctx->pc = 0x2F71A8u;
    SET_GPR_U32(ctx, 31, 0x2F71B0u);
    ctx->pc = 0x2F71ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71A8u;
    // 0x2f71ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x2F71A8u, 0x2F71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71B0u;
label_2f71b0:
    // 0x2f71b0: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
label_2f71b4:
    if (ctx->pc == 0x2F71B4u) {
        ctx->pc = 0x2F71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71B0u;
        // 0x2f71b4: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F71B8u;
        goto label_2f71b8;
    }
    ctx->pc = 0x2F71B0u;
    {
        const bool branch_taken_0x2f71b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71B0u;
        // 0x2f71b4: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71b0) {
            ctx->pc = 0x2F71CCu;
            goto label_2f71cc;
        }
    }
    ctx->pc = 0x2F71B8u;
label_2f71b8:
    // 0x2f71b8: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
label_2f71bc:
    // 0x2f71bc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2f71c0:
    if (ctx->pc == 0x2F71C0u) {
        ctx->pc = 0x2F71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71BCu;
        // 0x2f71c0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F71C4u;
        goto label_2f71c4;
    }
    ctx->pc = 0x2F71BCu;
    {
        const bool branch_taken_0x2f71bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71BCu;
        // 0x2f71c0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71bc) {
            ctx->pc = 0x2F723Cu;
            goto label_2f723c;
        }
    }
    ctx->pc = 0x2F71C4u;
label_2f71c4:
    // 0x2f71c4: 0x0  nop
    ctx->pc = 0x2f71c4u;
    // NOP
label_2f71c8:
    // 0x2f71c8: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x2f71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
label_2f71cc:
    // 0x2f71cc: 0xc043328  jal         func_10CCA0
label_2f71d0:
    if (ctx->pc == 0x2F71D0u) {
        ctx->pc = 0x2F71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71CCu;
        // 0x2f71d0: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F71D4u;
        goto label_2f71d4;
    }
    ctx->pc = 0x2F71CCu;
    SET_GPR_U32(ctx, 31, 0x2F71D4u);
    ctx->pc = 0x2F71D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71CCu;
    // 0x2f71d0: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F71CCu, 0x2F71D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71D4u;
label_2f71d4:
    // 0x2f71d4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2f71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2f71d8:
    // 0x2f71d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f71dc:
    // 0x2f71dc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2f71e0:
    if (ctx->pc == 0x2F71E0u) {
        ctx->pc = 0x2F71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71DCu;
        // 0x2f71e0: 0x8e320148  lw          $s2, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F71E4u;
        goto label_2f71e4;
    }
    ctx->pc = 0x2F71DCu;
    {
        const bool branch_taken_0x2f71dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71DCu;
        // 0x2f71e0: 0x8e320148  lw          $s2, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71dc) {
            ctx->pc = 0x2F71ECu;
            goto label_2f71ec;
        }
    }
    ctx->pc = 0x2F71E4u;
label_2f71e4:
    // 0x2f71e4: 0xc04636c  jal         func_118DB0
label_2f71e8:
    if (ctx->pc == 0x2F71E8u) {
        ctx->pc = 0x2F71ECu;
        goto label_2f71ec;
    }
    ctx->pc = 0x2F71E4u;
    SET_GPR_U32(ctx, 31, 0x2F71ECu);
    ctx->pc = 0x118DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DB0u, 0x2F71E4u, 0x2F71ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71ECu;
label_2f71ec:
    // 0x2f71ec: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x2f71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_2f71f0:
    // 0x2f71f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f71f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2f71f4:
    // 0x2f71f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f71f8:
    if (ctx->pc == 0x2F71F8u) {
        ctx->pc = 0x2F71FCu;
        goto label_2f71fc;
    }
    ctx->pc = 0x2F71F4u;
    {
        const bool branch_taken_0x2f71f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71f4) {
            ctx->pc = 0x2F7218u;
            goto label_2f7218;
        }
    }
    ctx->pc = 0x2F71FCu;
label_2f71fc:
    // 0x2f71fc: 0xc0bda64  jal         func_2F6990
label_2f7200:
    if (ctx->pc == 0x2F7200u) {
        ctx->pc = 0x2F7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71FCu;
        // 0x2f7200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7204u;
        goto label_2f7204;
    }
    ctx->pc = 0x2F71FCu;
    SET_GPR_U32(ctx, 31, 0x2F7204u);
    ctx->pc = 0x2F7200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71FCu;
    // 0x2f7200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6990u, 0x2F71FCu, 0x2F7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7204u;
label_2f7204:
    // 0x2f7204: 0xc043328  jal         func_10CCA0
label_2f7208:
    if (ctx->pc == 0x2F7208u) {
        ctx->pc = 0x2F7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7204u;
        // 0x2f7208: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F720Cu;
        goto label_2f720c;
    }
    ctx->pc = 0x2F7204u;
    SET_GPR_U32(ctx, 31, 0x2F720Cu);
    ctx->pc = 0x2F7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7204u;
    // 0x2f7208: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F7204u, 0x2F720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F720Cu;
label_2f720c:
    // 0x2f720c: 0x2403fc13  addiu       $v1, $zero, -0x3ED
    ctx->pc = 0x2f720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
label_2f7210:
    // 0x2f7210: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f7214:
    if (ctx->pc == 0x2F7214u) {
        ctx->pc = 0x2F7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7210u;
        // 0x2f7214: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7218u;
        goto label_2f7218;
    }
    ctx->pc = 0x2F7210u;
    {
        const bool branch_taken_0x2f7210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7210u;
        // 0x2f7214: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7210) {
            ctx->pc = 0x2F7230u;
            goto label_2f7230;
        }
    }
    ctx->pc = 0x2F7218u;
label_2f7218:
    // 0x2f7218: 0xc043328  jal         func_10CCA0
label_2f721c:
    if (ctx->pc == 0x2F721Cu) {
        ctx->pc = 0x2F721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7218u;
        // 0x2f721c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7220u;
        goto label_2f7220;
    }
    ctx->pc = 0x2F7218u;
    SET_GPR_U32(ctx, 31, 0x2F7220u);
    ctx->pc = 0x2F721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7218u;
    // 0x2f721c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F7218u, 0x2F7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7220u;
label_2f7220:
    // 0x2f7220: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2f7220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2f7224:
    // 0x2f7224: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f7228:
    if (ctx->pc == 0x2F7228u) {
        ctx->pc = 0x2F7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7224u;
        // 0x2f7228: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F722Cu;
        goto label_2f722c;
    }
    ctx->pc = 0x2F7224u;
    {
        const bool branch_taken_0x2f7224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7224u;
        // 0x2f7228: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7224) {
            ctx->pc = 0x2F7234u;
            goto label_2f7234;
        }
    }
    ctx->pc = 0x2F722Cu;
label_2f722c:
    // 0x2f722c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f722cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2f7230:
    // 0x2f7230: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f7230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7234:
    // 0x2f7234: 0xc0bf148  jal         func_2FC520
label_2f7238:
    if (ctx->pc == 0x2F7238u) {
        ctx->pc = 0x2F7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7234u;
        // 0x2f7238: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F723Cu;
        goto label_2f723c;
    }
    ctx->pc = 0x2F7234u;
    SET_GPR_U32(ctx, 31, 0x2F723Cu);
    ctx->pc = 0x2F7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7234u;
    // 0x2f7238: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F7234u, 0x2F723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F723Cu;
label_2f723c:
    // 0x2f723c: 0xc0432ac  jal         func_10CAB0
label_2f7240:
    if (ctx->pc == 0x2F7240u) {
        ctx->pc = 0x2F7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F723Cu;
        // 0x2f7240: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7244u;
        goto label_2f7244;
    }
    ctx->pc = 0x2F723Cu;
    SET_GPR_U32(ctx, 31, 0x2F7244u);
    ctx->pc = 0x2F7240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F723Cu;
    // 0x2f7240: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F723Cu, 0x2F7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7244u;
label_2f7244:
    // 0x2f7244: 0xc04329c  jal         func_10CA70
label_2f7248:
    if (ctx->pc == 0x2F7248u) {
        ctx->pc = 0x2F7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7244u;
        // 0x2f7248: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F724Cu;
        goto label_2f724c;
    }
    ctx->pc = 0x2F7244u;
    SET_GPR_U32(ctx, 31, 0x2F724Cu);
    ctx->pc = 0x2F7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7244u;
    // 0x2f7248: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F7244u, 0x2F724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F724Cu;
label_2f724c:
    // 0x2f724c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7250:
    // 0x2f7250: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x2f7250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_2f7254:
    // 0x2f7254: 0xc04331c  jal         func_10CC70
label_2f7258:
    if (ctx->pc == 0x2F7258u) {
        ctx->pc = 0x2F7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7254u;
        // 0x2f7258: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F725Cu;
        goto label_2f725c;
    }
    ctx->pc = 0x2F7254u;
    SET_GPR_U32(ctx, 31, 0x2F725Cu);
    ctx->pc = 0x2F7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7254u;
    // 0x2f7258: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F7254u, 0x2F725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F725Cu;
label_2f725c:
    // 0x2f725c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7260:
    // 0x2f7260: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2f7260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_2f7264:
    // 0x2f7264: 0xc04331c  jal         func_10CC70
label_2f7268:
    if (ctx->pc == 0x2F7268u) {
        ctx->pc = 0x2F7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7264u;
        // 0x2f7268: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F726Cu;
        goto label_2f726c;
    }
    ctx->pc = 0x2F7264u;
    SET_GPR_U32(ctx, 31, 0x2F726Cu);
    ctx->pc = 0x2F7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7264u;
    // 0x2f7268: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F7264u, 0x2F726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F726Cu;
label_2f726c:
    // 0x2f726c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7270:
    // 0x2f7270: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x2f7270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_2f7274:
    // 0x2f7274: 0xc0be45e  jal         func_2F9178
label_2f7278:
    if (ctx->pc == 0x2F7278u) {
        ctx->pc = 0x2F7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7274u;
        // 0x2f7278: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F727Cu;
        goto label_2f727c;
    }
    ctx->pc = 0x2F7274u;
    SET_GPR_U32(ctx, 31, 0x2F727Cu);
    ctx->pc = 0x2F7278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7274u;
    // 0x2f7278: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F7274u, 0x2F727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F727Cu;
label_2f727c:
    // 0x2f727c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2f727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2f7280:
    // 0x2f7280: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2f7280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_2f7284:
    // 0x2f7284: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2f7288:
    if (ctx->pc == 0x2F7288u) {
        ctx->pc = 0x2F7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7284u;
        // 0x2f7288: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F728Cu;
        goto label_2f728c;
    }
    ctx->pc = 0x2F7284u;
    {
        const bool branch_taken_0x2f7284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7284u;
        // 0x2f7288: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7284) {
            ctx->pc = 0x2F72BCu;
            goto label_2f72bc;
        }
    }
    ctx->pc = 0x2F728Cu;
label_2f728c:
    // 0x2f728c: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x2f728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_2f7290:
    // 0x2f7290: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f7294:
    if (ctx->pc == 0x2F7294u) {
        ctx->pc = 0x2F7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7290u;
        // 0x2f7294: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7298u;
        goto label_2f7298;
    }
    ctx->pc = 0x2F7290u;
    {
        const bool branch_taken_0x2f7290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7290u;
        // 0x2f7294: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7290) {
            ctx->pc = 0x2F72C0u;
            goto label_2f72c0;
        }
    }
    ctx->pc = 0x2F7298u;
label_2f7298:
    // 0x2f7298: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f7298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f729c:
    // 0x2f729c: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2f729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_2f72a0:
    // 0x2f72a0: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f72a0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f72a4:
    // 0x2f72a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f72a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f72a8:
    // 0x2f72a8: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x2f72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_2f72ac:
    // 0x2f72ac: 0x8c8600a8  lw          $a2, 0xA8($a0)
    ctx->pc = 0x2f72acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_2f72b0:
    // 0x2f72b0: 0x40f809  jalr        $v0
label_2f72b4:
    if (ctx->pc == 0x2F72B4u) {
        ctx->pc = 0x2F72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72B0u;
        // 0x2f72b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F72B8u;
        goto label_2f72b8;
    }
    ctx->pc = 0x2F72B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F72B8u);
        ctx->pc = 0x2F72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72B0u;
        // 0x2f72b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F72B0u, 0x2F72B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F72B8u;
label_2f72b8:
    // 0x2f72b8: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f72b8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f72bc:
    // 0x2f72bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f72bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f72c0:
    // 0x2f72c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f72c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f72c4:
    // 0x2f72c4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2f72c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f72c8:
    // 0x2f72c8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2f72c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f72cc:
    // 0x2f72cc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2f72ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f72d0:
    // 0x2f72d0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2f72d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f72d4:
    // 0x2f72d4: 0x3e00008  jr          $ra
label_2f72d8:
    if (ctx->pc == 0x2F72D8u) {
        ctx->pc = 0x2F72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72D4u;
        // 0x2f72d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F72DCu;
        goto label_2f72dc;
    }
    ctx->pc = 0x2F72D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72D4u;
        // 0x2f72d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F72D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F72DCu;
label_2f72dc:
    // 0x2f72dc: 0x0  nop
    ctx->pc = 0x2f72dcu;
    // NOP
}
